#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int sum=0;
    // int i=1;
    // while(i<=n){
    //     if (i%2==0){
    //     sum+=i;
    //     i++;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    // cout<<"The value of sum of even numbers :"<<sum<<endl;

    //Prime no
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i!=0){
            cout<<"The number is prime number:"<<endl;
        }
        else{
            cout<<"The number is not  prime number:"<<endl;
        }
        i++;
    }

}