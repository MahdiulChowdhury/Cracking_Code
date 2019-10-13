#include <iostream>
#include "question_three_main.h"

using namespace std; 


void Time::Display() 
{
	cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}

void Time::Add_two_objects(Time one, Time two) 
{
	seconds = one.seconds+two.seconds; 
	if (seconds > 59)
	{
		seconds -= 60; 
		minutes++;
	}
	minutes += one.minutes+two.minutes; 
	if (minutes>59)
	{
		minutes -= 60; 
		hours++;
	}
	hours += one.hours+two.hours; 
}



