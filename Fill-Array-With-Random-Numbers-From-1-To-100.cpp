#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num;
	do
	{
		cout << Message;
		cin >> Num;
	} while (Num < 0);

	return Num;
}

int RandomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillArray(int arr[100], int& arrLength)
{
	cout << "Please enter how many elements: ";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArray(arr, arrLength);

	cout << "Array Elements: ";
	PrintArray(arr, arrLength);
	cout << "\n\n";

	return 0;
}