#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

//reverse an array from given position
vector<int> reverseAnArray(vector<int>& arr,int m){
    int s=m+1;
    int e=arr.size()-1;
    while (s<=e)
    {
     swap(arr[s],arr[e]);
     s++;
     e--;
    }
    return arr;
}

void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

//merge sorted array
void mergeTwoArays(int arr[],int n,int arr2[],int m,int arr3[]){
    int i=0 ,j=0,k=0;
    while (i<n && j<m)
    {
        if (arr[i]<arr2[j])
        {
            arr3[k]=arr[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    //copy 1st array element
    while (i<n){
        arr3[k]=arr[i];
        k++;
        i++;
    }
    //copy second array elemet 
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
        
    }
    
}

//merge
void merge(vector<int>& nums1,int m,vector<int> nums2,int n){
    int i=0 ,j=0,k=0;
    vector<int> ans;
    while (i<n && j<m)
    {
        if (nums1[i]<nums2[j])
        {
            ans[k]=nums1[i];
            k++;
            i++;
        }
        else{
            ans[k]=nums2[j];
            k++;
            j++;
        }
    }
    //copy 1st array element
    while (i<n){
        ans[k]=nums1[i];
        k++;
        i++;
    }
    //copy second array elemet 
    while(j<m){
        ans[k]=nums2[j];
        k++;
        j++;
    }
    nums1=ans;
    
}

//another approch for merge 
void merge(vector<int>& nums1,int m,vector<int> nums2,int n){
    for (int i = 0; i < n; i++)
    {
        nums1[m]=nums2[i];
        m++;
    }
    sort(nums1.begin(),nums1.end());

}

//move zeros
void moveZeros(vector<int>& nums){
    int nonZero=0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j]!=0)
        {
            swap(nums[j],nums[nonZero]);
            nonZero++;
        }
        
    }
    
}

//rotate array
void rotate(vector<int>& nums,int k){
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i+k%nums.size())]=nums[i];
    }
    //copy temp into actual vector
    nums=temp;
    
}

//find if sorted and rotated

bool sortedAndRotated(vector<int>& nums){
    int count=0;
    int n=nums.size();
    for (int i =1 ; i < nums.size(); i++)
    {
        if (nums[i-1]>nums[i])
        {
            count++;
        }
    }
    if(nums[n-1]>nums[0]){
        count++;
    }
    return count<=1; 
}

//sum of 2 arrays
vector<int> findSumofArrays(vector<int>& a,int n,vector<int>& b,int m){
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry =0;
    while (i>=0 && j>=0)
    {
        int val1=a[i];
        int val2=b[j];

        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    //first case
    while (i>=0)
    {
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    //2nd case
    while (j>=0)
    {
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    //3rd case
    while (carry!=0)
    {
       int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    reverse(ans.begin(),ans.end());
    return ans;

}

int main(){
    // vector<int> v;
    // v.push_back(11);
    // v.push_back(7);
    // v.push_back(3);
    // v.push_back(12);
    // v.push_back(4);

    // vector<int> ans=reverseAnArray(v,2);
    // print(ans);

    int arr[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};

    int arr3[8]={0};

    mergeTwoArays(arr,5,arr2,3,arr3);

    // print(arr3);

    return 0;
}

