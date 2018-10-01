#include <stdio.h>
#include <array>

using namespace std;

void func1(int arr[10])
{
    printf("Function with static array result:\n");
    for(size_t i = 0; i < 10; i++)
    {
        if(i % 2 == 0) arr[i] *= 2;
        else arr[i]--;
        printf("Array item arr[%zu]=%d\n", i, arr[i]);
    }
}

void func2(int *arr)
{
    printf("Function with dinamic array result:\n");
    for( size_t i = 0; i < 10; i++)
    {
        if(i % 2 == 0) arr[i] *= 2;
        else arr[i]--;
        printf("Array item arr[%zu]=%d\n", i, arr[i]);
    }
}

void func3(array<int,10>& arr)
{
    printf("Function with std::array result:\n");
    for( size_t i = 0; i < arr.size(); i++)
    {
        if(i % 2 == 0) arr[i] *= 2;
        else arr[i]--;
        printf("Array item arr[%zu]=%d\n", i, arr[i]);
    }
}

int main()
{
    int arr1[10];
    int *arr2 = new int[10];
    array<int, 10> arr3;
    srand(time(0));
    for(size_t i = 0; i < 10; i++)
    {
        arr1[i] = rand() % 10;
        arr2[i] = rand() % 100;
        arr3[i] = rand() % 1000;
    }

    func1(arr1);
    func2(arr2);
    func3(arr3);
}