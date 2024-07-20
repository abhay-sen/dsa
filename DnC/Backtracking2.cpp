/*
question ka naam  h rat in a maze
mere paas ek rat h aur ek maze h jisko merko sources se destination tak pahuchana h and mere paas maze mei ek table h jisme 0,1 h jaha pe 0 jo h uske upar rat nhi jaa sakta but rat sirf 1 wale pe move kar sakte h 
mere paas char movements h jisme woh ya toh left jayega ya right ya upar ya neeche
iske alawa kuch nhi
isko bhi mai recursion and back tracking se samjhunga jisme mai ek case sambhalta hu baaki recursion dekh lega
*/
#include <bits/stdc++.h>
using namespace std;
bool isSafe(int x,int y,int row,int col,int arr[3][3],vector<vector<bool>> & visited){
    if(((x>=0&&x<row)&&(y>=0&&y<col))&&(arr[x][y]==1)&&(visited[x][y]==false)){
        return true;
    }
    else{
        return false;
    }
}
void solveMaze(int arr[3][3],int row,int col,int i,int j,vector<vector<bool>>& visited,vector<string>& path,string output){
    //base case
    if(i==row-1&&j==col-1){
        path.push_back(output);
        return;
    }
    // down movement i+1,j
    if(isSafe(i+1,j,row,col,arr,visited)){
        visited[i+1][j]=true;
        solveMaze(arr,row,col,i+1,j,visited,path,output+'D');
        visited[i+1][j]=false;
    }
    //left i,j-1
    if (isSafe(i , j-1, row, col, arr, visited))
    {
        visited[i ][j-1] = true;
        solveMaze(arr, row, col, i , j-1, visited, path, output+'L');
        visited[i ][j-1] = false;
    }
    //right i,j+1
    if (isSafe(i , j+1, row, col, arr, visited))
    {
        visited[i ][j+1] = true;
        solveMaze(arr, row, col, i, j+1, visited, path, output+'R');
        visited[i ][j+1] = false;
    }
    //up i-1,j
    if (isSafe(i -1, j, row, col, arr, visited))
    {
        visited[i -1][j] = true;
        solveMaze(arr, row, col, i -1, j, visited, path, output+'U');
        visited[i -1][j] = false;
    }
}
int main() {
    int maze[3][3]={{1,0,0},{1,1,0},{1,1,1}};
    int row=3;
    int col=3;
    if(maze[0][0]==0) cout<<"No path exists";
    vector<vector<bool>> visited(row,vector<bool>(col,false));
    visited[0][0]=true;

    vector<string> path;
    string output="";
    solveMaze(maze,row,col,0,0,visited,path,output);
    cout<<"printing the result"<<endl;
    for(auto i : path ){
        cout<<i<<" ";
    }
    if(path.size()==0) cout<<"no path exists";
return 0;
}