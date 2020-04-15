#include <iostream>


using namespace std; 
const int CAPACITY =100 ;
int decimalToBinary(int number)
{
	int *binary = new int [CAPACITY];
	int i =0; 
	while(number>0)
	{
		binary[i] = number%2; 
		number =number/2;
		i++;
	}

	for (int j = i-1; j>= 0; j--)
	{
		cout<<binary[j];
	}

	delete [] binary;
}


int main () 
{

	decimalToBinary(15);


	return 0; 
}