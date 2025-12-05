#include<iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>&arr,int n){
    //agar i=0 se n-1 tak chalare to to j 0 se n-i-1 tak chalaenge
    bool swapped=false;
    for (int i = 1; i < n; i++)
    {
        //for round to 1 ton-1
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swapped=true;
                swap(arr[j],arr[j+1]);
            }
            
        }
        if (swapped==false)
        {
            break;
        }
        
    }
    
}