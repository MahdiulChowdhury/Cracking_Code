#include <iostream>
#include "main_question_eight.h"

using namespace std; 

int holds_serial_number::count = 0; 
void holds_serial_number::display_serial_number() const
{
	cout<<"I am object number " << serial_number; 
	cout<<endl; 
}