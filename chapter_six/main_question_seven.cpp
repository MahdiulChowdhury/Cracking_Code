#include <iostream>

#include "main_question_seven.h"

using namespace std; 

void Angle::user_input(int dgr, float mnt, char dre)
{
	degrees = dgr; 
	minutes = mnt; 
	direction = dre; 
}

void Angle::display() const
{
	cout<<"Angle: "<< degrees <<"\xF8" << minutes << "\'" << direction; 
	switch(direction)
	{
		case 'N': 
			cout<<"Latitude"; 
			break; 
		case 'n': 
			cout<<"Latitude";
			break;  
		case 'S': 
			cout<<"Latitude";
			break;  
		case 's': 
			cout<<"Latitude";
			break;  
		case 'E': 
			cout<<"Longitude";
			break; 
		case 'e': 
			cout<<"Longitude";
			break;  
		case 'W': 
			cout<<"Longitude"; 
			break;
		case 'w': 
			cout<<"Longitude"; 
			break; 
	}
}