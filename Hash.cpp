#include<bits/stdc++.h>

using namespace std;

class HashEntry
{

public:

	string value;
	HashEntry(string value);
	
};

HashEntry::HashEntry(string value)
{
	this->value = value;
}

const int TABLE_SIZE = 127;

class HashMap
{
	private:
	HashEntry **table;

	public:
	HashMap()
	{
		table = new HashEntry*[TABLE_SIZE];

		for (int i = 0; i < TABLE_SIZE; i++)
		{
			table[i] = NULL;
		}
		
	}

	int HashFunc(string value);
	void Insert(string value);
	HashEntry* Search(string value);
	void Remove(string value);
};

 int HashMap::HashFunc(string value)
	{
		int key = 0;
		for(unsigned int i=0;i<value.size();i++)
		{
			key+=value[i];
		}

		return key%TABLE_SIZE;
	}


void HashMap::Insert(string value)
{
	int hash = HashFunc(value);
		table[hash] = new HashEntry(value);
}


HashEntry* HashMap::Search(string value)
{
	int hash = HashFunc(value);
	
	if(table[hash] == NULL)
	{
		return NULL;
	}

	else
	{
		return table [hash];
	}
}


void HashMap::Remove(string value)    //REMOVE NOT WORKING!!!!!!!!!!
{
	int hash = HashFunc(value);

	if(table[hash] == NULL)
	{
		cout<<"No element found with value "<<value<<endl;
	}
	else
	{
		table[hash] == NULL;
		cout<<"Element with value "<<value<<" deleted"<<endl;
	}
}


int main()
{
	HashMap hash;

	hash.Insert("one");
	hash.Insert("Two");
	hash.Insert("Three");

	cout<<hash.Search("Two")<<endl;
	hash.Remove("Two");
	cout<<hash.Search("Two");

	return 0;
}