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
int findDig(int arr[], uint32_t size, int dig)
{
    
    int digpos;
    
    for (int i = 0; i < size; i++)
    {


        if (arr[i] == dig)
        {
            digpos = i;
            break;
        }

    }
    return digpos + 1;
}
void sortLeftAndRight(int arr[], uint32_t size, int dig)
{

}
