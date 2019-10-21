#include <iostream>

using namespace std; 

class Stack 
{
private: 
	enum {MAX = 10};
	int st[MAX]; 
	int top; 

public: 
	Stack(): top(0)
	{}
	void push (int var); 
	int pop(); 
};
void Stack::push(int var)
{
	st[++top] = var; 
}
int Stack::pop()
{
	return st[top --]; 
}

int main() 
{
	Stack s1; 

	s1.push(1) ;
	s1.push(34);
	s1.push(45);
	cout << "1:"<<s1.pop()<<endl;
	return 0;   
}