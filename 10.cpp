#include<iostream>
using namespace std;

int iseven(int num){
    if(num&1){
        return 0;
    }
    return 1;
}

int power(int a,int b){
    int ans=1;
    for (int i = 0; i < b; i++)
    {
        ans=ans*a;
    }
    return ans;
    
}

int factorial(int n){
    int ans=1;
    for (int i = 1; i <= n; i++)
    {
        ans=ans*i;

    }
    return ans;
}

int nCr(int n,int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int ans=num/denom;
    return ans;
}

int fibo(int n){
    int a=0;
    int b=1;

    if (n==0)
    {
        return 0;
    }

    else if (n==1)
    {
        return 1;
    }
    
    for (int i = 2; i <n-1 ; i++)
    {
        int next=a+b;
        a=b;
        b=next;
    }
    return (a+b);
}

int isprime(int num){
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
    
}

int ap(int n){
    int ans=(3*n+7);
    return ans;
}



int setbits(int n){
    int bits ,total=0;
    while (n!=0)
    {
        bits=n&1;
        total=total+bits;
        n>>=1;
    }
    return total;
}

int totalbits(int a,int b){
    int ans=setbits(a)+setbits(b);
    return ans;
}

int  main(){
    // int a,b;
    // cin>>a;
    // cin>>b;
    // int val=power(a,b);
    // cout<<val;
    // return 0;
    // int num;
    // cin>>num;
    // if (iseven(num))
    // {
        //     cout<<"Number is even";
        // }
        // else{
            
        //     cout<<"Number is odd";
        // }
    
    // int n,r;
    // cin>>n>>r;
    // cout<<"Answer is "<<nCr(n,r);

    //prime
    // int n;
    // cin>>n;
    // if (isprime(n))
    // {
    //     cout<<n<<" is a prime number";
    // }
    // else{
        
    //     cout<<n<<" is not a prime number";
    // }
    
    
    // fibo
    // int num;
    // cin>>num;
    // cout<<"fibo series "<<fibo(num);

    //ap
    // int n;
    // cin>>n;
    // cout<<"Nth term is "<<ap(n);

    //set bits total
    int a,b;
    cin>>a>>b;
    cout<<"Toal bits in a and b are  "<<totalbits(a,b);


}
