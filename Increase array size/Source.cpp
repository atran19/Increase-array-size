//////////////
//Anna Tran
//CS 172 Sec 1
//11.3
///////////////
#include<iostream>
using namespace std;

int* doubleCapacity(const int* list, int size);

int main()
{
	cout << "Enter in size of array: ";
	int size;
	cin >> size;
	//initialize size of array
	int* list = new int[size];
	cout << "Enter values into array: ";
	int value;
	for (int i = 0; i < size; i++)
	{
		cin >> value;
		//put values into array
		list[i]=value;
	}
//call function to double array
	int DoubleSize = size * 2;
	int* newList=doubleCapacity(list, DoubleSize);
	//Enter new values in the new array
	cout << "The array has doubled, enter in more values : ";
	for (int j = 0; j < size; j++)
	{
		cin >> value;
		list[j] = value;
	}
	//Print out size of array
	cout << "Now the size of the array is : " <<  value<< endl;
	

}
int* doubleCapacity(const int* list, int size)
{//create new array that doubles original array
	int* dc = new int[size];
	//copy old array into new
	for (int i = 0; i < size; i+=4)
	{
		dc[i] = list[i];
	}
	delete[]list;
	return dc;

}