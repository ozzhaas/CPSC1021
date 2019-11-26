/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "tuple.hpp"


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
