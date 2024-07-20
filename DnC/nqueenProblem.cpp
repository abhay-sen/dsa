#include <bits/stdc++.h>
using namespace std;
unordered_map<int,bool> rowCheck;
unordered_map<int,bool> upperleftDiagonal;
unordered_map<int, bool> lowerleftDiagonal;
void printSolution(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<< endl;
        
    }
    cout<<endl<<endl;
}
bool isSafe(int row,int col,vector<vector<char>> board,int n){
    //check karna h kya current cell pe rakh sakta hu ya nhi merko yeh check karna padega ab.
    // int i=row;
    // int j=col;
    // //check in row
    // while(j>=0){
    //     if(board[i][j]=='Q'){
    //         return false;
    //     }
    //     j--;
    // }
    // //check upper left diagonal
    // i=row;
    // j=col;
    // while(i>=0&&j>=0){
    //     if (board[i][j] == 'Q')
    //     {
    //         return false;
    //     }
    //     i--;j--;
    // }
    // //checking bottom left diagonal
    // i=row;
    // j=col;
    // while(i<n&&j>=0) {
    //     if (board[i][j] == 'Q')
    //     {
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }
        if(rowCheck[row]==true){
            return false;
        }
        if(upperleftDiagonal[col-row]==true) return false;
        if(lowerleftDiagonal[col+row]==true) return false;
    //yaha tak pahucha mtlb kahi mhi mila merko 
    return true;
}
void solve(vector<vector<char>> board,int col,int n){
    //base case
    if(col>=n){
        printSolution(board,n);
        return;
    }
    //ek case solve karna h baaki recursion sambhalega
    for (int row = 0; row < n; row++)
    {
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';//rakh do at a index
            rowCheck[row]=true;
            upperleftDiagonal[col-row]=true;
            lowerleftDiagonal[row+col]=true;
            solve(board,col+1,n);//next ke liye try karo idhar se
            board[row][col]='-';//wapis se hata do back tracking
            rowCheck[row] = false;
            upperleftDiagonal[col - row] = false;
            lowerleftDiagonal[row + col] = false;
        }
    }
    

}
int main() {
    int n=8;
    vector<vector<char>> board(n,vector<char>(n,'-'));
    int col=0;
    solve(board,col,n);
return 0;
}