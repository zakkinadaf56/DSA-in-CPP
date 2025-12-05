#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin>>n;

    // if (n>0){
    //     cout<<"N is positive"<<endl;
    // }
    // else{
    //     cout<<"N is negative"<<endl;

    // }
    // int a, b;
    // cout << "Enter the value of a" << endl;
    // cin >> a;
    // cout << "Enter the value of b" << endl;
    // cin >> b;

    // if (a > 0)
    // {
    //     cout << "Number is positive" << endl;
    // }
    // else if (a < 0)
    // {
    //     cout << "Number is negative" << endl;
    // }
    // else
    // {
    //     cout << "Number is zero" << endl;
    // }
    char ch;
    cin >> ch;
    if (ch>='a' && ch<='z')
    {
        cout<<"This is lower case";
    }
    else if (ch>='A' && ch<='Z')
    {
        cout<<"This is upper case";
    }
    else{
        cout<<"This is a number";
    }
    
    

}