#define _USE_MATH_DEFINES

#include <math.h> 
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "sort_arr.h"
#include "print.h"
using namespace std;




int main()
{
	setlocale(LC_ALL, "Rus");
	const int size = 10;
	int arr[size]{ 1,21,33,4,15,62,7,81,-9,10 };
	
	printYellow("Дан массив чисел размерностью 10 элементов.Написать функцию, которая сортирует массив по возрастанию");
	printYellow("или по убыванию, в зависимости от третего параметра функции, Если он равен 1, сортировка идет по убыванию,");
	printYellow("если 0, то по возрастнию.Первые 2 параметра функции - это массив и его размер, третий параметр по умолчанию равен 1.");
		cout << endl;
		printGreen("Исходный массив: ");
		printarr(arr, size);
		cout << endl;
		cout << endl;
		printGreen("Если третий параметры = 0:");
		cout << endl;
		sortarr(arr, size, 0);
		printarr(arr, size);
		cout << endl;
		cout << endl;
		printGreen("Если третий параметры = 1:");
		cout << endl;
		sortarr(arr, size, 1);
		printarr(arr, size);
		cout << endl;
		cout << endl;
	
		
	return 0;
}