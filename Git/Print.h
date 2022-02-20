#include <iostream>
using namespace std;

void print(int x)
{
	cout << x << endl;
}
void print(double x)
{
	cout << x << endl;
}
void print(string x)
{
	cout << x << endl;
}
void printarr(int arr[], uint32_t size)
{

    for (size_t i = 0; i < size; i++)
    {


        cout << arr[i] << "  ";

    }
}

void printGreen(string x)
{
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 10);
    cout << x << endl;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);

}