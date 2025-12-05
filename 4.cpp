#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=i;
    //     while(j<=n){
    //         cout<<i;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    int n;
    cin >>n;
    int i=1;
    char count='A';
    while (i<=n)
    {
        // int j=i;
        char val='A'+i-1;
        // int space=n-i+1;
        // while (space)
        // {   char t='A'+n-i;
        //     cout<<" ";
        //     j++;
        //     val=val+1;
        //     count=count+1;
        //     space=space-1;
        // }
        // while(j<=space){
        //     cout<<"*";
        //     j++;
        // }

        // int space=i-1;
        // while (space)
        // {
        //     cout<<" ";
        //     space-=1;
        // }

        // int star=n-i+1;
        // while(star){
        //     cout<<"*";
        //     star-=1;
        // }
        // while(j<=n){
        //     cout<<i;
        //     j++;
        // }
        
        // int space=n-i;
        // while(space){
        //     cout<<"*";
        //     space-=1;
        // }
        // j=1;
        // while (j<=i)
        // {
        //     cout<<j;
        //     j++;
        // }
        // int c=i-1;
        // while (c)
        // {
        //     cout<<c;
        //     c-=1;
        // }
        
        // cout<<endl;
        // i++;
        int j=1;
        while (j<=n-i+1)
        {
            cout<<j;
            j+=1;
        }

        int c=2;
        while (c<=2*i-1)
        {
            cout<<"*";
            c+=1;
        }
        
        int d=n-i+1;
        while (d>=1)
        {
            cout<<d;
            d-=1;
        }
        

        i++;
        cout<<endl;
    }
    
}