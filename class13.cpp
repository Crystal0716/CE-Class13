#include<iomanip>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std ;
int main() 
{
	srand(1234);
	const int all = 20;
	int numbers[all];
	for (int i = 0; i < all; ++i)
	{
		numbers[i] = rand() % 100;
	}
	int odd[all];
	int even[all];
	int oddCount = 0;
	int evenCount = 0;
	for (int i = 0; i < all; ++i) 
	{
		if (numbers[i] % 2 != 0) 
		{
			odd[oddCount] = numbers[i];
			oddCount++;
		}
	else 
		{
			even[evenCount] = numbers[i];
			evenCount++;
		}
	}
	cout << "Original numbers : ";
	for (int i = 0; i < all; ++i) 
	{
		if( i < all -1 )
		cout << numbers[i] << ",";
		else
		cout << numbers[i] ;
	}
	cout << endl;
	cout << evenCount << " even numbers found : ";
	for (int i = 0; i < evenCount; ++i)
	{
		if ( i <evenCount-1 )
		cout << even[i] << ",";
		else
		cout << even[i];
	}
	cout << endl;
	cout << oddCount << " odd numbers found : ";
	for (int i = 0; i < oddCount; ++i) 
	{
		if ( i <oddCount -1 )
		cout << odd[i] << ",";
		else
		cout << odd[i] ;
	}
	cout << endl;
return (0);
}