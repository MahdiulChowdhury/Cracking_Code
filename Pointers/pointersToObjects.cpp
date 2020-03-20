//////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std; 
/////////////////////////////////////////////////
class person 
{
protected: 
	string name; 
public: 
	void setName();
	void printName(); 
	string getname(); 
};
/////////////////////////////////////////////////
void person::setName()
	{ cout << "Enter your name: "; cin >> name; }
void person::printName()
	{ cout << endl << name; }
string person::getname()
	{ return name; }
/////////////////////////////////////////////////
void bsort(person** ptrPtr, int n)
{
	int j,k; 
	//person **ptr = (ptrPtr+1);
	//cout << "PtrPtr=" << (*(1+ptrPtr))->getname() << endl; 
	for(j=0; j<n-1; j++)
	{
		for(k=j+1; k<n; k++)
		{
			if ((*(ptrPtr+j))->getname() > (*(ptrPtr+k))->getname())
			{
				
				person* temPtr = *(ptrPtr+j); 
				*(ptrPtr+j) = *(ptrPtr+k);
				*(ptrPtr+k) = temPtr;
			}
		}
	}
			

		
}
////////////////////////////////////////////////
int main()
{
	void bsort(person**, int);
	person* persPtr[100]; 
	int n = 0; 
	char choice; 
	int j ; 

	do {
		persPtr[n] = new person(); 
		persPtr[n]->setName();
		n++;
		cout << " Enter anohter (y/n)?";
		cin >> choice;  
	} while (choice == 'y');

	//cout << "n =" << n << endl; 
	cout << "\nUnsorted list\n"; 
	for ( j=0; j<n; j++)
	{
		 //cout << "j==" << j << " "; 
		 persPtr[j]->printName(); 
		 //cout<<endl;
	}

	bsort(persPtr,n);
	
	cout << "\nSorted list:"; 
	for(int k = 0; k < n; k++)
		{ 
			//cout << "k=" << k << " "; 
			persPtr[k]->printName(); 
			//cout<<endl; 
		}
	cout << endl; 
	return 0; 
}
