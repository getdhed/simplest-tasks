
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << endl;
	}
	int minvalue = arr[0];
	int maxvalue = arr[0];


	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < minvalue)
		{
			minvalue = arr[i];
        }
		if (arr[i] > maxvalue)
		{
			maxvalue = arr[i];

		}
	}
	cout << "наименьшее число:" <<minvalue<< endl;
	cout << "нибольшее число:" << maxvalue << endl;
}