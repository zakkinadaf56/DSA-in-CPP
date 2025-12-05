#include<iostream>
#include<limits.h>
using namespace std;

int getmax(int num[],int size){
    int max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }
        
    }
    return max;
}

int getmin(int num[],int n){
    int mini= INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini=min(mini,num[i]);
        // if(num[i]<min){
        //     min=num[i];
        // }
    }
    return mini;
    
}


int main(){
    int size;
    cin>>size;

    int num[100];
    
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    
    cout<<"MAx val is "<<getmax(num,size)<<endl;
    cout<<"Min val is "<<getmin(num,size)<<endl;
}