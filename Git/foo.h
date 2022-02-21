#include <iostream>
using namespace std;

void randarr(int arr[], uint32_t size)
{
    srand(time(0));
    for (size_t i = 0; i < size; i++)
    {


        arr[i] = 1 + rand() % 20;

    }
}
void shake(int arr[], uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        swap(arr[i], arr[rand() % size]);
    }
}
