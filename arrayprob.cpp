#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void alternate(int arr[], int size)
{
    for (int i = 0; i <= size; i += 2)
    {
        int temp = arr[i + 1];
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}

int dupli(int arr[], int n)
{
    int ans = 0;
    // xoring all array elements
    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
    }
    // xoring [1,n-1]
    for (int i = 1; i < n; i++)
    {
        ans ^= i;
    }

    return ans;
}

vector<int> dupli2(vector<int> &nums)
{
    // vector<int> ans;
    // int temp=0;
    // int c=0;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; i < n; j++)
    //     {
    //         if (arr[i]==arr[j])
    //         {
    //             ans[c]=i;
    //             c++;
    //         }

    //     }

    // }
    // return ans;
    if (nums.empty())
        return {};
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[abs(nums[i]) - 1] < 0)
            ans.push_back(abs(nums[i]));
        nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
    }
    return ans;
}

// intersaction oof two arrays
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> ans;

    for (int i = 0; i < nums1.size(); i++)
    {
        int element = nums1[i];

        for (int j = 0; j < nums2.size(); j++)
        {
            if (element < nums2[j])
                break;

            if (element == nums2[j])
            {
                ans.push_back(element);
                nums2[j] = -1;
                break;
            }
        }
    }
    return ans;
}

// optimum sol using two pointer sol
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            if (ans.empty() || ans.back() != nums1[i])
            {
                ans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

//pair sum
vector<vector<int>> pairSum(vector<int> & arr,int s){
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; i < arr.size(); i++)
        {
            if (arr[i]+arr[j]==s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
            
        }
        
    }
    sort(ans.begin(),ans.end());
    return ans;
}

//triplet with given sum


//
void sortOne(int arr[],int n){
    int left=0;
    int right=n-1;
    while (left<=right)
    {
        if (arr[left]==0)
        {
            left++;
        }
        else if (arr[right]==1)
        {
            right--;
        }
        else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
}

void sortOneTwo(int arr[],int n){
    int left=0;
    int mid=0;
    int right=n-1;
    while (mid<=right)
    {
        if (arr[mid]==0)
        {
            swap(arr[left],arr[mid]);
            left++;
            mid++;
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[right]);
            right--;
        }
        
        
    }
    
}

int main()
{
    int brr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int crr[5] = {1, 2, 3, 1, 2};
    vector<int> drr = {2, 3, 1, 6, 3, 6, 2};

    int dup[5] = {1, 2, 3, 4, 3};

    // alternate(brr,10);
    // alternate(crr,5);

    // printArray(brr,10);
    // printArray(crr,5);

    //   int ans=  dupli2(dup,6);
    //   cout<<ans;
    // dupli2(dup,6);
    cout << unique(crr, 5) << endl;
    cout << dupli(dup, 5);
    dupli2(drr);
}