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

	while (getline(input, line)) {
		stringstream s(line);
		vector<string> words;
		while (s >> word) {
			words.push_back(word);
		}
		unsigned int end = words.size();
		string dateString = words.at(end - 2);
		string timeString = words.at(end - 1);
		auto dateParts = splitDate(dateString);
		int month = get<0>(dateParts);
		int day = get<1>(dateParts);
		int year = get<2>(dateParts);
		auto timeParts = splitTime(timeString);
		int hour = get<0>(timeParts);
		int minute = get<1>(timeParts);

		cout << month << "~" << day << "~" << year << endl;
		cout << hour << ":" << setprecision(2) << minute << endl;
	}
}


void checkArguments(int argc) {
	if (argc != 4) {
		cout << "Not enough command line arguments. Exiting..." << endl;
	}
}


void isOpen(ifstream&, char*) {
	ifstream input;







}


tuple<int, int, int> splitDate(string Date) {
	stringstream dateStream(Date);
	string dateStr;
	int month;
	int day;
	int year;

	int i = 0;
	while (getline(dateStream, dateStr, '/')) {
		cout << "DATE STR: " << dateStr << endl;
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
		cout << "TIME STR: " << timeStr << endl;
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
