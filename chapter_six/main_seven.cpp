#include <iostream>

#include "main_question_seven.h"

using namespace std; 

int main() 
{
	int degree; 
	float mint; 
	char direction, choice; 
	Angle ang(140, 40, 'S'); 
	ang.display(); 
	cout <<endl; 

	Angle ang2; 
	do {
		cout<<"Enter the degree:"; 
		cin >> degree; 
		cout<<"Enter the minutes:"; 
		cin>>mint; 
		cout<<"Enter the direction(N,S,E,W):";
		cin>>direction; 

		ang2.user_input(degree,mint,degree); 
		ang2.display(); 

		cout<<"Do you want to continue"; 
		cin>>choice; 
	}while (choice == 'Y'|| choice == 'y');
	cout<<endl; 
	return 0; 
}