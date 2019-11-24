/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "sort.hpp"
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
