/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "functions.hpp"
#include "sort.hpp"
#include "tupple.cpp"


void readDate(fstream& input, vector<CalendarEvent>& goodVec, vector<CalendarEvent>& badVec) {
	string line;
	string word;
	string name = "unknown";
	int month, day, year, hour, minute = 0;

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




bool checkArguments(int argc) {
	if (argc != 4) {
		cout << "Not enough command line arguments. Exiting..." << endl;
		return false;
	}
	return true;
}


void isOpen(fstream& file, char* fileName, ios::openmode openFor) {
	file.open(fileName, openFor);
	if (file.fail()){
		cout << "The file " << fileName << " did not open correctly." << endl;
		cout << "Exiting program..." << endl;
	}

}
