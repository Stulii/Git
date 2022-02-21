
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h> 
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

void randarr(int arr[], uint32_t size)
{
    srand(time(0));
    for (size_t i = 0; i < size; i++)
    {


        arr[i] = rand() % 41 - 20;

    }
}