#include<iostream>
using namespace std;

int main(){

    int num=5;
    cout<<num<<endl;

    //address of operator- &

    cout<<"address of num"<<&num<<endl;

    int *ptr=&num;

    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    cout<<sizeof(num)<<endl;
    cout<<sizeof(ptr);

    //pointer to int is created and pointing to some garbage address
    int *p;

    int nums=6;
    int *pt=&nums;
    int a=nums;
    cout<<nums;
    (*pt)++;
    cout<<nums;

    int *q=pt;

    cout<<pt<<q<<endl;
    cout<<*pt<<*q<<endl;

    //imp concept


    int i=3;
    int *t=&i;
    







    return 0;
}