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

	fstream input;
	isOpen(input, argv[1], ios::in);
	fstream goodOutput;
	isOpen(goodOutput, argv[2], ios::out);
	fstream badOutput;
	isOpen(badOutput, argv[3], ios::out);

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
