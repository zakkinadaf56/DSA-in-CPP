#include<iostream>
using namespace std;

void update(int **p){
    // p=p+1;

    // *p=*p+1;

    **p=**p+1;
}

int main(){

    // int i=8;
    // int *ptr=&i;
    // int **ptr2=&ptr;

    // // cout<<ptr<<endl;
    // // cout<<&ptr<<endl;
    // // cout<<*ptr2<<endl;
    // //before
    // cout<<"Before"<<i<<endl;
    // cout<<ptr<<endl;
    // cout<<ptr2<<endl;
    // //after

    // update(ptr2);

    // cout<<"After"<<i<<endl;
    // cout<<ptr<<endl;
    // cout<<ptr2<<endl;

    

    return 0;
}