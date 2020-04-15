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
	void Permutation();
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
			cout<<"-->"<<(char) x; 
		cout<<endl; 
	}
}


void Hash::Permutation()
{
	list <int> :: iterator x;

	for (int i = 0; i<BUCKET; i++)
	{
		list <int> :: iterator temp = table[i].begin();
		//cout<<i; 
		for(x = table[i].begin(); x!=table[i].end(); x++)
			{
				if(*x != *temp)
				{
					cout<<"no Permutation"<<endl; 
					break; 
				}
			} 
		cout<<endl; 
	}

	cout<<"Permutation found"<<endl; 
}

int main () 
{
	string a = "ABCD";
	string b = "DACB";
	int n = a.length(); 

	Hash h(7);

	for (int i = 0; i<n; i++)
	{
		h.insertItem(a[i]);
	}
	for (int i = 0; i<n; i++)
	{
		h.insertItem(b[i]);
	}

	h.deleteItem(12);
	h.displayHash(); 
	h.Permutation(); 

	return 0; 
}