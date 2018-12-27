#include <iostream>


using namespace std; 


int binarytodecimal(int binary)
{
	int base = 1; 
	int decimal=0; 

	int temp = binary;
	while(temp)
	{
		int last_digit = temp%10;
		temp = temp/10;

		decimal += base*last_digit; 

		base = base*2; 

	}
	return decimal; 
}


int main() 
{
	int binary = 10101001; 
	cout << "decimal"<<binarytodecimal(binary);
	return 0; 
}
