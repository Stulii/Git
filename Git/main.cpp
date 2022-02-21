#define _USE_MATH_DEFINES
#include <windows.h>
#include "foo.h"
#include "print.h"
using namespace std;







int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Rus");
    printYellow("Дан массив случайных чисел в диапазонеот - 20 до + 20.");
	printYellow("Необходимо найти позиции крайних отрицательных");
	printYellow("элементов(самого левого отрицательного элемента");
	printYellow("и самого правого отрицательного элемента) и отсортировать");
	printYellow("элементы, находящиеся между ними.");
	printendl();
	printendl();
	printGreen("Массив:");
	const int size2 = 10;
	int arr2[size2];
	randarr(arr2, size2);
	printarr(arr2, size2);
	printendl();
	printendl();
    printGreen("Массив с отсортированными элементами:");
	findFirstAndLast(arr2, size2);
	printarr(arr2, size2);
	printendl();
	printendl();
	printendl();
	return 0;
}