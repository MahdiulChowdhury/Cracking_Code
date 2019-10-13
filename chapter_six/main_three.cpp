#include <iostream>

#include "question_three_main.h"

using namespace std; 


int main() 
{
	const Time obj1(11,60,60);
	const Time obj2(4,40,40);
	Time obj3; 
	obj3.Add_two_objects(obj1, obj2); 
	cout<<"Time=";
	obj3.Display(); 
	cout<<endl; 
	return 0; 
}