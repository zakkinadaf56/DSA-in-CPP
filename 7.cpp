#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int bit=n&1;
    //     ans=(bit*pow(10,i))+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<"Ans is "<<ans<<endl;

    //for both neg and pos number
    for (int i = 7; i >= 0; i--)
    {
        int bit=(n>>i)&1;
        cout<<bit;
    }
    return 0;
}