#include<iostream>
using namespace std;

int main(){
    // int i=1;
    // int count=1;
    // int n;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         j++;
    //         count++;
    //     }
    // cout<<endl;
    // i++;
    // }
    int n;
    cin>>n;
    int count=1;
    int row=1;
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         cout<<"*";
    //         col++;
    //     }
    //     row++;
    //     cout<<endl;
    // }
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         cout<<count;
    //         col++;
    //         count++;
    //     }
    //     row++;
    //     cout<<endl;
    // }
    // while(row<=n){
        // int col=1;
        // int val=row;
        // while(col<=row){
            // cout<<row-col+1;     //cout<<row+col-1
            // val++;
            // col++;
        // }
        // row++;
        // cout<<endl;
    // }
    // while(row<=n){
    //     int col=1;
    //     while(col<=n){
    //         char c='A'+row-1;
    //         cout<<c;
    //         col++;
    //     }
    //     row++;
    //     cout<<endl;
    // }

    //     while(row<=n){
    //     int col=1;
    //     while(col<=n){
    //         char c='A'+col-1;
    //         cout<<c;
    //         col++;
    //     }
    //     row++;
    //     cout<<endl;
    // }

    // char start='A';
    // while(row<=n){
    //     int col=1;
    //     while(col<=n){
    //         cout<<start;
    //         start+=1;
    //         col++;
    //     }
    //     row++;
    //     cout<<endl;
    // }
    // while(row<=n){
    //     int col=1;
    //     while(col<=n){
    //         char c='A'+row+col-2;
    //         cout<<c;
    //         col++;
    //     }
    //     row++;
    //     cout<<endl;
    // }
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         char c='A'+row-1;
    //         cout<<c;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }
    // char start='A';
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         cout<<start;
    //         start+=1;
    //         col++;
    //     }
    //     row++;
    //     cout<<endl;
    // 
    // }

    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         char c=('A'+row+col-2);
    //         cout<<c;
    //         col++;
    //     }
    //     row++;
    //     cout<<endl;
    // }

    // while(row<=n){
    //     int col=1;
    //     char start=('A'+n-row);
    //     while(col<=row){
    //         cout<<start;
    //         start++;
    //         col++;
    //     }
    //     row++;
    //     cout<<endl;
    // }

    // while(row<=n){
    //     int space=n-row+1;
    //     while(space){
    //     cout<<"*";
    //     space--;
    //     }
    //     int col=1;
    //     while(col<=row){
    //         cout<<"*";
    //         col++;
    //     }
    //     row++;
    //     cout<<endl;

    // }
    // while(row<=n){
    //     int star=n-row+1;
    //     while(star){
    //     cout<<"*";
    //     star--;
    //     }
    // row++;
    // cout<<endl;
    // }

    //  while(row<=n){
    //     int col=1;
    //     while(col<row){
    //         cout<<" ";
    //         col++;
    //     }
    //     int space=n-row+1;
    //     while(space){
    //     cout<<row;
    //     space--;
    //     }
    //     row++;
    //     cout<<endl;
    //  }


    while(row<=n){
       int space=n-row;
       while(space){
        cout<<" ";
        space--;
       }
       int col=1;
       while(col<=row){
        cout<<col;
        col++;
       }
       int start=row-1;
       while(start){
        cout<<start;
        start--;
       }

       row++;
       cout<<endl;
    }

}