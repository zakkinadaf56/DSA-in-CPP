#include<iostream>
#include <vector>
using namespace std;

//searching
bool isPresent(int arr[][4],int target,int row,int col){
    for (int row = 0; row <3 ; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col]==target)
            {
                return 1;
            }
            
        }
        
    }
    return 0;
}

//row and colum sum
void printRowSum(int arr[][3],int row,int col){
    for (int row = 0; row <3 ; row++)
    {
        int sum=0;
        for (int col = 0; col < 3; col++)
        {
            sum=sum+arr[row][col];
        }
        cout<<sum <<" ";
    }
    
}

void printColSum(int arr[][3],int row,int col){
    for (int col = 0; col < 3; col++)
    {
        int sum=0;
        for (int row = 0; row <3 ; row++)
        {
            sum=sum+arr[row][col];
        }
        cout<<sum <<" ";
    }
    
}

//largest row sum

int largestRowSum(int arr[][3],int row ,int col){
    int maxi=INT16_MIN;
    int rowIndex=-1;
    for (int row = 0; row <3 ; row++)
    {
        int sum=0;
        for (int col = 0; col < 3; col++)
        {
            sum=sum+arr[row][col];
        }
        cout<<sum <<" ";
        if (maxi<sum)
        {
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"tre maximum sum is"<<maxi<<endl;
    return rowIndex+1;
}

//print ike a wave (wave print prob)
vector<int> wavePrint(vector<vector<int>> arr,int nRows,int nCols){
    vector<int> ans;
    for (int col = 0; col < nCols; col++)
    {
        if (col&1)
        {
            //odd index
            for (int row = nRows-1; row >= 0; row--)
            {
                // cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
            
        }
        else{
            //0 and even index
            for (int row = 0; row < nRows; row++)
            {
                // cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
            
        }
        
    }
    return ans;

}

//spiral print
vector<int> spiralPrint(vector<vector<int>> &matrix){
    vector<int> ans;
    int row=matrix.size();
    int col=matrix[0].size();

    int count=0;
    int total=row*col;
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;
    
    while (count<total)
    {
        //print starting row
        for (int index =startingCol;count<total && index <= endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        
        //print ending col
        for (int index =startingRow;count<total && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
        
        //ending row
        for (int index =endingCol;count<total && index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
        
        //starting col
        for (int index =endingRow;count<total && index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

//rotate 90 degree
void rotate90Degree(vector<vector<int>> matrix){
    int nRow=matrix.size();
    int nCol=matrix[0].size();
    for (int row = 0; row < nRow; row++)
    {
        for (int col = 0; col < nCol; col++)
        {
            swap(matrix[row][col],matrix[col][row]);
        }
        
    }
    for (int i = 0; i < nRow; i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
    
}

//search 2d matrix usng binar search
bool searchMatrix(vector<vector<int>> matrix,int target){
    int row=matrix.size();
    int col =matrix[0].size();
    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        int element=matrix[mid/col][mid%col];
        if (element==target)
        {
            return 1;
        }
        if (element>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}

//search 2d matrix 2(column wise sorted)
bool searchMatrix2(vector<vector<int>> matrix,int target){
    int row=matrix.size();
    int col=matrix[0].size();
    int rowIndex=0;
    int colIndex=col-1;
    while (rowIndex<row && colIndex>=col)
    {
        int element=matrix[rowIndex][colIndex];
        if (element==target)
        {
            return 1;
        }
        if (element<target)
        {
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;
}

int main(){
    int arr[3][3];

    //input
    for (int row = 0; row <3 ; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin>>arr[row][col];
        }
        
    }

    //output
    // for (int row = 0; row <3 ; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {
    //         cout<<arr[row][col];
    //     }
    //     cout<<endl;
    // }
    
    //enter the element to search
    int target;
    cin>>target;

    // if (isPresent(arr,target,3,4))
    // {
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not found";
    // }
    
    cout<<"MAx row is "<<largestRowSum(arr,3,3)<<endl;

    return 0;
}