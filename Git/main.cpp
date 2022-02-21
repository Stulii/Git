#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h> 
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "print.h"
#include "foo.h"
using namespace std;







int main()
{

	setlocale(LC_ALL, "Rus");
	
	printYellow("Дан массив из 20 целых чисел со значениями от 1 до 20.");
	printYellow("Необходимо:");
	printYellow("- написать функцию, разбрасывающую элементы массива произвольным образом;");
	printYellow("- создать случайное число из того же диапазона и найти позицию этого случайного числа в массиве;");
	printYellow("- отсортировать элементы массива, находящиеся слева от найденной позиции по убыванию, а элементы");
	printYellow("массива, находящиеся справа от найденной позиции по возрастанию.");
	printendl();
	const int size3 = 20;
	int arr3[size3];
	printGreen("Массив: ");
	randarr(arr3, size3);
	printarr(arr3, size3);
	printendl();
	printendl();
	printGreen("Перемешанный массив: ");
	shake(arr3, size3);
	printarr(arr3, size3);
	printendl();
	printendl();
	int dig = arr3[rand() % 19];
	printGreen("Случайное число: ");
	printRed(dig);
	printGreen("Позиция случайного числа: ");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	int numbIndex = findDig(arr3, size3, dig);
	cout << numbIndex + 1 << " (Индекс: " << numbIndex << ")" << endl;
	
	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	
	

	return 0;
}