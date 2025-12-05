#include<iostream>
using namespace std;

int search(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
    }
    return 0;

    
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void reverse(int arr[],int size){
    int l=0;
    int r=size-1;
    while(l<=r)
    { 
        // arr[l]=arr[r];
        swap(arr[l],arr[r]);
        l++;
        r--;
        
    }
    
}
void alternate(int arr[],int size){
    for (int i = 0; i <=size; i+=2)
    {
        int temp=arr[i+1];
        if (i+1<size)
        {
            // swap(arr[i],arr[i+1]);
            arr[i+1]=arr[i];
            arr[0]=temp;
        }
        
    }
    
    
}


int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if (found)
    {
        cout<<"Key is present at" <<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }

    int brr[10]={10,9,8,7,6,5,4,3,2,1};
    int crr[5]={1,2,3,4,5};

    alternate(brr,10);
    reverse(crr,5);

    printArray(brr,10);
    printArray(crr,5);

    
}