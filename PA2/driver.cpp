/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "functions.hpp"
#include "sort.hpp"

int main(int argc, char* argv[]) {
	/**********************************************************************
	  Calls the checkArguments function to make sure the proper amount of
	  files were entered into the terminal.
	**********************************************************************/
	if (!checkArguments(argc)) {
		return 1;
	}

	/**********************************************************************
	  Create the input and output file streams and use the isOpen function
	  to ensure that they open correctly.
	**********************************************************************/
	fstream input;
	isOpen(input, argv[1], ios::in);
	fstream goodOutput;
	isOpen(goodOutput, argv[2], ios::out);
	fstream badOutput;
	isOpen(badOutput, argv[3], ios::out);

	/**********************************************************************
	  Create the vectors for good and bad Calendar Events.
	**********************************************************************/
	vector<CalendarEvent> good;
	vector<CalendarEvent> bad;

	/**********************************************************************
	  Read the input information from the file and then push it onto the
	  proper vector by calling the readDate function.
	**********************************************************************/
	readDate(input, good, bad);

	/**********************************************************************
	  Print the calendar events from the good and bad vectors to their
	  respective output file.
	**********************************************************************/
	for (auto& e : good) {
		e.printCalendar(goodOutput);
	}
	for (auto& e : bad) {
		e.printCalendar(badOutput);
	}

	/**********************************************************************
	  Close all file streams.
	**********************************************************************/
	input.close();
	goodOutput.close();
	badOutput.close();

return 0;

}
