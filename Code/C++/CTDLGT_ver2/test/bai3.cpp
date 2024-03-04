#include<iostream>
using namespace std;

double AVG(int *value , int size);

int main()
{
    int arr[5] = {4 , 78 , 33 , 23 , 10};
    double average;
    average = AVG(arr , 5);
    cout << average;

    return 0;
}

double AVG(int *value , int size)
{
    int sum = 0;
    double average;
    for(int i = 0 ; i < size ; i ++)
    {
        sum += *(value + i);
    }

    average = sum / size;
    return average;
}