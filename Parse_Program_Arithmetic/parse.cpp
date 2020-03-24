/****************Reference Book: Object Oriented Programming*****************/

#include <iostream>
#include <cstring>               //strlen() 

using namespace std; 

const int LEN = 80;              //Lenght of expression in Charactars 
const int MAX = 40;              //size of stack 

///////////////////////////////////////////////////////////////////////
class Stack
{
private: 
	char st[MAX]; 	            //array of chars
	int top;		            //number of top of stack 
public: 
	Stack();
	{ top =0 };
	void push (char var)		//put the char on stack   		
	{ st[++top] = var };		
	char pop()					//take the char off the stack 
	{ return st[top--]; }		 				
	int getTop()				//get top of stack 
	{ return top; }
};
////////////////////////////////////////////////////////////////////////
class express 
{
private: 
	Stack s; 
	char* pStr; 
	int len; 
public: 
	express(char* ptr)
	{
		pStr = ptr; 
		len = strlen(pStr); 
	}
	void parse(); 
	int solve(); 
}
//----------------------------------------------------------------------
void express::parse()
{
	char ch; 
	char lastVal; 
	char lastTop; 

	for (int j=0; j<len; j++)
	{
		ch = pStr[j];

		if(ch>='0' && ch<='9')
			s.push(ch-'0')			//save the numerical value 
		else if (ch=='+' || ch=='-' || ch=='*' || ch=='/')
		{
			if(s.getTop() == 1)
				s.push(ch); 
			else 
			{
				lastVal = s.pop(); 
				lastTop = s.pop(); 
			}
			if(ch=='*' || ch=='/') && (lastTop=='+' || lastTop == '-')
			{
				s.push(lastTop);
				s.push(lastVal);
			}
			else 
			{
				switch(lastTop)
				{
					case '+': s.push(s.pop() + lastVal); break; 
					case '-': s.push(s.pop() - lastVal); break; 
					case '*': s.push(s.pop() * lastVal); break; 
					case '/': s.push(s.pop() / lastVal); break; 
					default: cout<<"\nUnknown operant"; exit(1);  
				}
				s.push(ch);
			}
		}
		else {cout << "\nUnknown input Charactar"; exit(1);}
	}
}
//----------------------------------------------------------------------------
int express::solve()
{
	char lastVal; 

	while (s.getTop() > 1)
	{
		lastVal = s.pop(); 
		switch(s.pop())
		{
			case '+': s.push(s.pop() + lastVal); break;
			case '-': s.push(s.pop() - lastVal); break; 
			case '*': s.push(s.pop() * lastVal); break; 
			case '/': s.push(s.pop() / lastVal); break; 
			default: cout<<"\nUnknown operator"; exit(1);
		}
	}
	return int (s.pop());	
}
///////////////////////////////////////////////////////////////////////////
int main()
{
	char ans; 
	char string[LEN];

	cout << "\nEnter an arithmetic expression"
			"\nof the form 2+3*4/3-2."
			"\nNo number may have more than one digit"
			"\nDon't use any spaces or parentheses."; 

	do {
		cout << "\nEnter expression:";
		cin >> string; 
		express* eptr = new express(string); 
		eptr->parse(); 
		cout<<"\nThe numerical value is:"
			<< eptr->solve(); 
		delete eptr; 
		cout<<"\nDo Another (Enter y or n)?";
		cin >> ans; 
	}while (ans == 'y');
	return 0; 
}