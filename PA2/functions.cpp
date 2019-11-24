/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "functions.hpp"


void readDate(ifstream& input, vector<CalendarEvent>& goodVec, vector<CalendarEvent>& badVec) {
	string line;
	string word;
	string name = "unknown";
	int month = 0;
	int day = 0;
	int year = 0;
	int hour = 0;
	int minute = 0;

	while (getline(input, line)) {
		stringstream s(line);
		vector<string> words;
		while (s >> word) {
			words.push_back(word);
		}
		unsigned int end = words.size();
		string dateString = words.at(end - 2);
		string timeString = words.at(end - 1);
		stringstream nameStream;
		for (unsigned int i = 0; i < words.size() - 3; i++){
			nameStream << words.at(i) << " ";
		}
		nameStream << words.at(words.size()-3);
		name = nameStream.str();
		auto dateParts = splitDate(dateString);
		Date tempDate(month, day, year);
		month = get<0>(dateParts);
		day = get<1>(dateParts);
		year = get<2>(dateParts);

		tempDate.setMonth(month);
		tempDate.setDay(day);
		tempDate.setYear(year);
		tempDate.setDate(month, day, year);

		auto timeParts = splitTime(timeString);
		Time tempTime(hour, minute);
		hour = get<0>(timeParts);
		minute = get<1>(timeParts);

		tempTime.setHour(hour);
		tempTime.setMinute(minute);
		tempTime.setTime(hour, minute);
		CalendarEvent calendar(month, day, year, hour, minute, name);

		if (calendar.isEventDateValid() && calendar.isEventTimeValid()){
			goodVec.push_back(calendar);
			sortDate(goodVec);
		}
		else {
			badVec.push_back(calendar);
			sortDate(badVec);
		}
	}
}

bool compareDate(CalendarEvent lhs, CalendarEvent rhs){
	if (lhs.getYear() == rhs.getYear()){
		//Years are equal
		if (lhs.getMonth() < rhs.getMonth()){
			return true;
		}
		else if (lhs.getMonth() == rhs.getMonth()){
			if (lhs.getDay() < rhs.getDay()){
				return true;
			}
			else if(lhs.getDay() == rhs.getDay()){
				if (lhs.getHour() < rhs.getHour()){
					return true;
				}
				else if (lhs.getHour() == rhs.getHour()){
					if (lhs.getMinute() < rhs.getMinute()){
						return true;
					}
					else{
						return false;
					}
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}
	}
	else {
		return false;
	}
return true;
}

void sortDate(vector<CalendarEvent>& sortVec){
	sort(sortVec.begin(), sortVec.end(), compareDate);
}



bool checkArguments(int argc) {
	if (argc != 4) {
		cout << "Not enough command line arguments. Exiting..." << endl;
		return false;
	}
	return true;
}


void isOpen(fstream& file, char* fileType) {






}


tuple<int, int, int> splitDate(string Date) {
	stringstream dateStream(Date);
	string dateStr;
	int month;
	int day;
	int year;

	int i = 0;
	while (getline(dateStream, dateStr, '/')) {
		if (i == 0) {
			month = stoi(dateStr);
		}
		else if (i == 1) {
			day = stoi(dateStr);
		}
		else {
			year = stoi(dateStr);
		}
		i++;
	}
return make_tuple(month, day, year);
}



tuple<int, int> splitTime(string Time) {
	stringstream timeStream(Time);
	string timeStr;
	int hour;
	int minute;

	int i = 0;
	while (getline(timeStream, timeStr, ':')) {
		if (i == 0) {
			hour = stoi(timeStr);
		}
		else {
			minute = stoi(timeStr);
		}
		i++;
	}
return make_tuple(hour, minute);


}
