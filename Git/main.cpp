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
HANDLE hConsole;







int main()
{
	setlocale(LC_ALL, "Rus");
	const int size = 10;
	int arr[size]{ 1,21,33,4,15,62,7,81,-9,10 };
	
		print("Дан массив чисел размерностью 10 элементов.Написать функцию, которая сортирует массив по возрастанию");
		print("или по убыванию, в зависимости от третего параметра функции, Если он равен 1, сортировка идет по убыванию,");
		print("если 0, то по возрастнию.Первые 2 параметра функции - это массив и его размер, третий параметр по умолчанию равен 1.");
	return 0;
}