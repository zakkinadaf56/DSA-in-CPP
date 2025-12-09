#include<iostream>
using namespace std;

void print(int *p){
    cout<<p<<endl;
}

void update(int *p){
    p=p+1;
}

int getSum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    // int arr[10]={2,5,6,7};
    // cout<<"Address of first memory blovk "<<(*arr)+1<<endl;
    // cout<<"Address of first memory blovk "<< &arr[1]<<endl;
    // int i=3;

    // int temp[10]={1,2};
    // int *ptr=&temp[0];
    // cout<<sizeof(temp)<<endl;
    // cout<<sizeof(*temp)<<endl;
    // cout<<sizeof(&temp)<<endl;
    // cout<<sizeof(&ptr)<<endl;
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;

    // int a[20]={12,3,4};
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;
    
    // int *p=&a[0];
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;

    //symbol table content cannot be changed

    // int arr[10];
    // int *ptr=&arr[0];
    // cout<<ptr<<endl;
    // ptr=ptr+1;
    // cout<<ptr<<endl;

    // int arr[5]={1,2,3,4,5};
    // char ch[6]="abcde";
    // cout<<arr<<endl;
    // cout<<ch<<endl;
    // //cout implementation is different in int and char
    // char *c=&ch[0];
    // cout<<c<<endl;
    
    // char temp='z';
    // char *p=&temp;
    // cout<<p<<endl;

    int valu=8;
    int *p=&valu;
    print(p);

    update(p);

    int arr[5]={1,2,3,4,5};
    cout<<"he sum is"<<getSum(arr,5);

    return 0;
}