/*
* Program: Laboratory14.cpp
* Author: Aanika Mishra
* Date: 12-12-2024
* Description: This program reads in a user specified number of floating-point values
*/
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

double average(double* a, int size);
double* maximum(double* a, int size);
double* minimum(double* a, int size);

int main()
{
	int arrSize = 0;
	double* arrPoint = 0;

	cout << "Please Enter Size of Array: ";
	cin >> arrSize;
	arrPoint = new double[arrSize];

	cout << "Enter " << arrSize << " floating-point values: ";
	for (int i = 0; i < arrSize; i++)
	{
		cin >> arrPoint[i];
	}

	cout << "The average is: " << average(arrPoint, arrSize) << endl;

	int posMax = -1;
	int posMin = -1;
	for (int i = 0; i < arrSize; i++)
	{
		if (arrPoint[i] == *maximum(arrPoint, arrSize))
		{
			posMax = i;
		}
	}
	for (int i = 0; i < arrSize; i++)
	{
		if (arrPoint[i] == *minimum(arrPoint, arrSize))
		{
			posMin = i;
		}
	}

	cout << "The maximum value is element #" << posMax << ": " << arrPoint[posMax] << endl;
	cout << "The minimum value is element #" << posMin << ": " << arrPoint[posMin] << endl;
}

double average(double* a, int size)
{
	double avg = 0;
	for (int i = 0; i < size; i++)
	{
		avg += a[i];
	}
	avg = avg / size;
	return avg;
}
double* maximum(double* a, int size)
{
	double max = a[0];
	double* pointMax = &max;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return pointMax;
}
double* minimum(double* a, int size)
{
	double min = a[0];
	double* pointMin = &min;
	for (int i = 0; i < size; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return pointMin;
}