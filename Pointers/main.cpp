#include <iostream>
#include <string>
#include "functionPointers_typedef.h"
int slam_execution(std::string comamnd, int number);
int Classification(std::string command, int number);

commandTable table[2] = 
{
	{"SLAM", slam_execution,"executing slam"},
	{"Classification",Classification,"executing Classification"}
};


void test(int a)
{
	std::cout << "value is = "<< a << std::endl; 
}

void SLAM (int a, int b)
{
	std::cout<<"Navigation using SLAM"<<std::endl; 
}
void Land (int a, int b)
{
	std::cout<<"Landing"<<std::endl; 
}


int slam_execution(std::string comamnd, int number)
{
	commandTable* tabl = table;

	std::cout << "[command:] " << comamnd << " number " << number <<" "<< tabl->help << std::endl;  
	return 0; 
}

int Classification(std::string command, int number)
{
	//std::cout << "[command:]" << command << "number" << number << std::endl; 
}



int main() 
{
	/*void (*fun_ptr) (int) = &test; 

	(*fun_ptr)(10);*/

	/*void (*fun_ptr)(int) = test; 
	fun_ptr(10);*/
	//string command;
	int ch;  
	void (*fun_ptr_arr[]) (int, int) = {SLAM,Land};
	std::string controller = "SLAM"; 
	std::cout<<"[command:-]"; 
	std::cin>>ch; 
	std::cout<<std::endl; 
	int a = 5; 
	int b = 5; 
	(fun_ptr_arr[ch])(a,b); 
	

	commandProcess(controller, table);

	return 0; 
}