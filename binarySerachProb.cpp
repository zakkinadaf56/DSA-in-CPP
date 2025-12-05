#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//binary search
int binarySearch(vector<int>& arr,int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start +(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        //go to right part
        if (key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start +(end-start)/2;
    }
    return -1;
    
}

// 1st and last pos of an element in an sorted array

int firstOccurance(vector<int> &arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurance(vector<int> &arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

// final code

pair<int, int> firstAndLastPos(vector<int> &arr, int n, int key)
{
    pair<int, int> p;
    p.first = firstOccurance(arr, n, key);
    p.second = lastOccurance(arr, n, key);
    return p;
}

// peak index in mountain array

int peakIndexMountainArray(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}



// pivot index in an array
int pivotIndex(vector<int> &nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    int left = 0;
    int right = sum;
    for (int i = 0; i < nums.size(); i++)
    {
        right -= nums[i];
        if (left == right)
        {
            return i;
        }
        else
        {
            left += nums[i];
        }
    }
    return -1;
}

//pivot elemennt
int pivotNum(vector<int> arr,int n){
    int s=0;
    int e =n-1;
    int mid=s+(n-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        
    }
    return s;
    
}

// search in an roatated sorted array

int sortedRotatedArr(vector<int>& arr,int n,int k){
    int pivot=pivotNum(arr,n);
    //bs on second line
    if (k>=arr[pivot] && k<=arr[n-1])
    {
        return binarySearch(arr,pivot,n-1,k);
    }
    //bs on 1st line
    else{
        return binarySearch(arr,0,pivot-1,k);
    }

}

//sqrt using binary search

long long int bsForSqrt(int x){
    int s=0;
    int e=x;
    int mid=s+(e-s)/2;
    long long int ans=-1;
    while (s<=e)
    {
        long long int sqr=mid*mid;
        if (sqr==x)
        {
            return mid;
        }
        if (sqr>x)
        {
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    
    return ans;
}

int mySqrt(int x){
    return bsForSqrt(x);
}

double moreprecision(int n,int pre,int temp){
    double factor=1;
    double ans=temp;
    for (int i = 0; i <pre; i++)
    {
        factor/=10;
        for (double j = ans; j*j< n; j+=factor)
        {
            ans=j;
        }
        
    }
    return ans;
}

//book allocation problem 

bool isPossible(vector<int> arr,int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }
        else{
            studentCount+=1;
            if (studentCount>m || arr[i]>mid)
            {
                return false;
            }
            pageSum=arr[i];
        }
        
    }
    return true;
}

int allocateBooks(vector<int> arr,int n,int m){
    int s=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;

    while (s<=e)
    {
        if (isPossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

//painter partition problem 
bool isPossibleForPainters(vector<int> board,int n,int k,int mid){
    int painters=1;
    int boardPainted=0;

    for (int i = 0; i < n; i++)
    {
        if (boardPainted+board[i]<=mid)
        {
            boardPainted+=board[i];
        }
        else{
            painters+=1;
            if (painters>k || board[i]>mid)
            {
                return false;
            }
            boardPainted=board[i];
        }
        
    }
    return true;
}

int allocatePainters(vector<int> board,int k){
    int s=0;
    int sum=0;
    int n=board.size();
    for (int i = 0; i < n; i++)
    {
        sum+=board[i];
    }
    
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;

    while (s<=e)
    {
        if (isPossibleForPainters(board,n,k,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

//aggressive cow

bool isPossibleForCows(vector<int>& stalls,int k,int mid){
    int cowCount=1;
    int lastPos=stalls[0];
    for (int i = 0; i <stalls.size(); i++)
    {
        if (stalls[i]-lastPos>=mid)
        {
            cowCount++;
            if (cowCount==k)
            {
                return true;
            }
            
            lastPos=stalls[i];
        }
        
    }
    return false; 
}

int aggressiveCows(vector<int>& stalls,int k){
    sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=-1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if (isPossibleForCows(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    return ans;
}


int main()
{

    vector<int> even = {1, 2, 3, 3, 3, 3, 3, 3, 3, 5};
    // cout<<firstOccurance(even,10,3)<<" ";
    // cout<<lastOccurance(even,10,3);
    pair<int, int> p = firstAndLastPos(even, 10, 3);
    cout << "(" << p.first << "," << p.second << ")";
    cout<<mySqrt(36);
    int temp=bsForSqrt(37);
    cout<<"ans is "<<moreprecision(37,3,temp);
    return 0;
}