/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "functions.hpp"


int main(int argc, char* argv[]) {
	if (!checkArguments(argc)) {
		return 1;
	}

	ifstream input;
	input.open(argv[1]);
	ofstream goodOutput;
	goodOutput.open(argv[2]);
	ofstream badOutput;
	badOutput.open(argv[3]);

	vector<CalendarEvent> good;
	vector<CalendarEvent> bad;

	readDate(input, good, bad);
	for (auto& e : good) {
		e.printCalendar(goodOutput);
	}
	for (auto& e : bad) {
		e.printCalendar(badOutput);
	}

	input.close();
	goodOutput.close();
	badOutput.close();

return 0;

}
