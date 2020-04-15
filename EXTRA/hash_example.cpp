#include <iostream>
#include <list>

using namespace std; 

class Hash
{
	int BUCKET; 
	list<int> *table; 
public: 
	Hash(int V);
	//insert the key into hash table 
	void insertItem(int x);
	//deletes key from hash table 
	void deleteItem(int key);
	//hash function to map values to key 
	int hashFunction(int x)
	{
		return (x%BUCKET);
	}

	void displayHash(); 
};

Hash::Hash(int b)
{
	this-> BUCKET = b; 
	table = new list<int> [BUCKET];
}

void Hash::insertItem(int key)
{
	int index = hashFunction(key);
	table[index].push_back(key);
}
void Hash::deleteItem(int key)
{
	//get the index of key
	int index = hashFunction(key);

	list <int> :: iterator i;
	for (i = table[index].begin(); i!=table[index].end(); i++)
	{
		if(*i==key)
		{
			table[index].erase(i);
			break; 
		}
	}
}

void Hash::displayHash()
{
	for (int i = 0; i<BUCKET; i++)
	{
		cout<<i; 
		for(auto x:table[i])
			cout<<"-->"<<x; 
		cout<<endl; 
	}
}

int main () 
{
	int a[] = {15,17,18,12,8};
	int n = sizeof(a)/sizeof(a[0]);

	Hash h(7);

	for (int i = 0; i<n; i++)
	{
		h.insertItem(a[i]);
	}

	h.deleteItem(12);
	h.displayHash(); 

	return 0; 
}