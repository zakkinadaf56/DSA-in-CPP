#include<iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr,int n){
    for (int i = 1; i < n; i++)
    {   
        int current=arr[i];
        int j = i-1;
        for (; j >= 0; j--)
        {
            if (arr[j]>current)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=current;
    }
    
}