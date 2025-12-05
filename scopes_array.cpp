#include<iostream>
using namespace std;

// int printarray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<"  ";
//     }
//     cout<<endl;
// }

void update(int arr[],int n){

}

int sumArr(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int arr[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<sumArr(arr,size)<<endl;
    
}