// pascal traingle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "conio.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{ 
	int num;
	cout << "enter number of lines\n";
	cin >> num;
	int **arr;
	arr = new int*[num];
	for (int i = 0; i < num; i++)
	{
		arr[i] = new int[num * 2];
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < (2*num)-1; j++)
		{
			arr[i][j] = 0;
		}
	}
	for (int i = 0,j = num-1; i <num ,j >= 0; i++,j--)
	{
		arr[i][j] = 1;
	}
	for (int i = 0, j = num-1; i < num, j < 2*num-1; i++, j++)
	{
		arr[i][j] = 1;
	}
    for (int i = 2; i < num; i++) 
	{
		for (int j = num - i; j < (num-1) + i; j++)
		{
			arr[i][j] = arr[i - 1][j-1] + arr[i - 1][j + 1];
		}
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 2*num-1; j++)
		{
			if (arr[i][j] == 0)
				cout << " ";
			else
				cout << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}

