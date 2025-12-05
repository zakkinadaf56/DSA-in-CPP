
#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int dig=n%10;
    //     if(dig==1){
    //         ans=ans+pow(2,i);
    //     }
    //     i++;
    //     n=n/10;
    // }
    // cout<<"Ans is "<<ans<<endl;
    // int n;
    // cin>>n;
    // int ans=0;
    // int i=0;
    // while (n!=0)
    // {
    //     int digit=n%10;
    //     if (digit==1)
    //     {
    //         ans=ans+pow(2,i);
    //     }
    //     n/=10;
    //     i++;
    // }
    // cout<<ans;
    
    //reverse integer
    // int n;
    // cin>>n;
    // int digit;
    // int ans=0;
    // int max=INT_MAX;
    // while (n!=0)
    // {
    //     digit=n%10;
    //     if ((ans>max/10)||(ans<INT_MIN/10))
    //     {
    //         return 0;
    //     }
        
    //     ans=(ans*10)+digit;
    //     n/=10;
    // }
    // cout<<ans;

    //compliment of base 10integer
    // int n;
    // cin>>n;
    // int m=n;
    // int mask=0;
    // //edge case
    // if (n==0)
    // {
    //     return true;
    // }
    
    // while (m!=0)
    // {
    //     mask=(mask<<1)|1;
    //     m>>=1;
    // }
    // int ans=(~n)&mask;
    // cout<<ans;

    // //power of 2
    // int n;
    // cin>>n;
    // int ans=1;
    // for (int i = 0; i < 31; i++)
    // {
    //     // int ans=pow(2,i);
    //     if (ans==n)
    //     {
    //         cout<<"True";
    //         break;
    //     }
    //     if (ans<INT_MAX/2)
    //     {
    //         ans=ans*2;
    //     }
    
    // }
    // cout<<"Not true";
    
    int n;
    cin>>n;
    if (n<1)
    {
        cout<<"FALSE";
    }
    else{     
        if ((n &(n-1))==0)
        {
            cout<<"True";
        }
        else{
            cout<<"False";
        }
    }
    
    
}