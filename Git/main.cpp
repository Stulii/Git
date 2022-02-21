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
	
	printYellow("ƒан массив из 20 целых чисел со значени€ми от 1 до 20.");
	printYellow("Ќеобходимо:");
	printYellow("- написать функцию, разбрасывающую элементы массива произвольным образом;");
	printYellow("- создать случайное число из того же диапазона и найти позицию этого случайного числа в массиве;");
	printYellow("- отсортировать элементы массива, наход€щиес€ слева от найденной позиции по убыванию, а элементы");
	printYellow("массива, наход€щиес€ справа от найденной позиции по возрастанию.");
	printendl();
		
	return 0;
}