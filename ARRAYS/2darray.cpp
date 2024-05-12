#include <bits/stdc++.h>
using namespace std;
void rowiseSum(int arr[][5],int rows){
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}
bool findKey(int arr[][5], int rows, int key){
    
    for (int i = 0; i < rows; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j]==key)
            {
                return true;
            }
            
        }
        
    }
    return false;
}
int maximum(int arr[][5], int rows){
    int max=INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        
        for (int j = i+1; j < 5; j++)
        {
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
        
    }
    return max;
}
int minimum(int arr[][5], int rows)
{
    int min = INT_MAX;
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
void transpose(int arr[][5],int rows,int transpose[][5]){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // swap(arr[i][j],arr[j][i]);
            transpose[i][j]=arr[j][i];
        }
        
    }
    
}
void printArray(int arr[][5],int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
int main() {
    int rows,cols=5;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    
    int array[rows][5];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>array[i][j];
        }
        
    }
    // rowiseSum(array,rows);
    // int key;
    // cout<<"enter the value to find"<<endl;
    // cin>>key;
    // if (findKey(array,rows,key))
    // {
    //     cout<<"Found key"<<endl;
    // }
    // else
    // {
    //     cout<<"Key not found"<<endl;
    // }
    // cout<<"minimum "<<minimum(array,rows);
    // cout<<"Maximum "<<maximum(array,rows); 
    printArray(array,rows);
    int trans[rows][5];
    transpose(array,rows,trans);
    printArray(trans,rows);

return 0;
}