#include<iostream>
using namespace std;

int main(){
    //cal

    // int n,m;
    // cin>>n;
    // cin>>m;
    // char op;
    // cin>>op;
    // switch (op)
    // {
    // case '+':
    //     cout<<m+n<<endl;
    //     break;
    // case '-':
    //     cout<<n-m<<endl;
    //     break;
    // case '*':
    //     cout<<m*n<<endl;
    //     break;
    // case '%':
    //     cout<<n%m<<endl;
    //     break;
    
    // default:
    //     cout<<"enter a valid opesation"<<endl;
    //     break;
    // }

    //hw
    // int amount;
    // cin>>amount;
    // int n=1;
    // int note=0;
    // switch (n)
    // {
    // case 1:
    //     note=amount/100;
    //     amount=amount-(100*note);
    //     cout<<note<<"Rs 100 notes"<<endl;
    // case 2:
    //     note=amount/50;
    //     amount=amount-(50*note);
    //     cout<<note<<"Rs 50 notes"<<endl;
    // case 3:
    //     note=amount/20;
    //     amount=amount-(20*note);
    //     cout<<note<<"Rs 20 notes"<<endl;
    // case 4:
    //     note=amount/10;
    //     amount=amount-(10*note);
    //     cout<<note<<"Rs 10 notes"<<endl;
    // case 5:
    //     note=amount/1;
    //     amount=amount-(1*note);
    //     cout<<note<<"Rs 1 notes"<<endl;

    // default:
    //     cout<<"enter a number"<<endl;
    //     break;
    // }
    int amount;
    cout<<"Enter amount"<<endl;
    cin>>amount;
    int n=1;
    int note=0;
    switch (n)
    {
    case 1:
        note=amount/100;
        amount=amount-(100*note);
        cout<<note<<" notes of 100"<<endl;
        
    case 2:
        note=amount/50;
        amount=amount-(50*note);
        cout<<note<<" notes of 50"<<endl;
        
    case 3:
        note=amount/20;
        amount=amount-(20*note);
        cout<<note<<" notes of 20"<<endl;

    case 4:
        note=amount/1;
        amount=amount-(1*note);
        cout<<note<<" notes of 1"<<endl;
        
        
    default:
        cout<<"Enter a valid number";
        break;
    }
}