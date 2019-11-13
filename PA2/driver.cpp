/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "functions.hpp"


int main(int argc, char* argv[]) {
	ifstream input;
	input.open(argv[1]);

	vector<CalendarEvent> good;
	vector<CalendarEvent> bad;

	checkArguments(argc);

	readDate(input, good, bad);











	input.close();

return 0;

}
