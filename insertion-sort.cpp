#include<iostream>
#include<ctime>
using namespace std;
void insertion_Sort(int arr[], int size);
void print(int arr[], int size);
int main()
{
	int dataarray[50], temp[50];
	srand(time(NULL));
	//total random:
	for (int i = 0; i < 50; i++)
	{
		dataarray[i] = rand() % 1000;
	}
	cout << "sorting array (random data) \n";
	insertion_Sort(dataarray, 50);
	print(dataarray, 50);
	//nearly sorted:
	for (int i = 0; i < 20; i++)
	{
		dataarray[i] = rand() % 1000;
	}
	cout << "sorting array (nearly sorted data) \n";
	insertion_Sort(dataarray, 50);
	print(dataarray, 50);
	//reversing:
	for (int i = 0,j=49; i < 50; i++,j--)
	{
		temp[j] = dataarray[i];
	}
	cout << "sorting array (reversed data) \n";
	insertion_Sort(temp, 50);
	print(dataarray, 50);
	//redundant:
	for (int i = 0; i < 50; i++)
	{
		dataarray[i] = rand() % 100;
	}
	cout << "sorting array (redundant values data) \n";
	insertion_Sort(dataarray, 50);
	print(dataarray, 50);
	system("pause>0");
	return 0;
}
void insertion_Sort(int arr[], int size)
{
	int j;
	for (int i = 1, first_sort; i < size; i++)
	{
		first_sort = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > first_sort)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = first_sort;
	}
}
void print(int arr[], int size)
{
	for (int i = 0; i < 50; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}
