#include<iostream>
#include<math.h>
using namespace std;

int main (){
    //reverse integer 
    int n;
    cin>>n;
    int digit;
    int ans=0;
    while (n!=0)
    {
        digit=n%10;
        ans=(ans*10)+digit;
        n/=10;
    }
    cout<<ans;
    
}