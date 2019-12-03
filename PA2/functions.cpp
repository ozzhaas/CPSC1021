/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "functions.hpp"
#include "sort.hpp"
#include "tuple.cpp"


void readDate(fstream& input, vector<CalendarEvent>& goodVec, vector<CalendarEvent>& badVec) {
	string line;
	string word;
	string name = "unknown";
	int month, day, year, hour, minute = 0;

	/**********************************************************************
	  While there are lines to read from the input file read in all info
	  and store it into a stringstream. Then loop through the stringstream
	  and store all of the words into a vector.
	**********************************************************************/
	while (getline(input, line)) {
		stringstream s(line);
		vector<string> words;
		while (s >> word) {
			words.push_back(word);
		}

		/**********************************************************************
		  Next, parse the words in the vector into the name, date and time.
		**********************************************************************/
		unsigned int end = words.size();
		string dateString = words.at(end - 2);
		string timeString = words.at(end - 1);

		/**********************************************************************
		  Create a stringstream to store the names of the Calendar Events.
		**********************************************************************/
		stringstream nameStream;
		for (unsigned int i = 0; i < words.size() - 3; i++){
			nameStream << words.at(i) << " ";
		}

		nameStream << words.at(words.size()-3);
		name = nameStream.str();

		/**********************************************************************
		  Call the splitDate function to parse the date into month, day, and
		  year. Uses the tuple function in c++ to parse the Date information.
		**********************************************************************/
		auto dateParts = splitDate(dateString);
		Date tempDate(month, day, year);
		month = get<0>(dateParts);
		day = get<1>(dateParts);
		year = get<2>(dateParts);

		/**********************************************************************
		  Set the date values into the private members of the Date class using
		  the specific setters.
		**********************************************************************/
		tempDate.setMonth(month);
		tempDate.setDay(day);
		tempDate.setYear(year);
		tempDate.setDate(month, day, year);

		/**********************************************************************
		  Call the splitTime function to parse the time into hour and
		  minute. Uses the tuple function in c++ to parse the Time information.
		**********************************************************************/
		auto timeParts = splitTime(timeString);
		Time tempTime(hour, minute);
		hour = get<0>(timeParts);
		minute = get<1>(timeParts);

		/**********************************************************************
		  Set the time values into the private members of the Time class using
		  the specific setters.
		**********************************************************************/
		tempTime.setHour(hour);
		tempTime.setMinute(minute);
		tempTime.setTime(hour, minute);

		/**********************************************************************
		  Create a CalendarEvent object from the CalendarEvent class and assign it
		  the values of the read in and parsed month, day, year, hour, minute,
		  and name in the implementation of the constructor.
		**********************************************************************/
		CalendarEvent calendar(month, day, year, hour, minute, name);

		/**********************************************************************
		  Check to make sure that the Date members and
		  the Time members of the CalendarEvent are both valid using the
		  isEventDateValid and isEventTimeValid functions. Then if they are
		  valid push the CalendarEvents onto the good vector. If they are not
		  valid push the CalendarEvents onto the bad vector. Then sort both
		  vectors by date and time.
		**********************************************************************/
		if (calendar.isEventDateValid() && calendar.isEventTimeValid()){
			goodVec.push_back(calendar);
		}
		else {
			badVec.push_back(calendar);

		}
	}
	sortDate(goodVec);
	sortDate(badVec);
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
