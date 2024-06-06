// You have been given a 9x9 2d integer matrix 'MAT' representing a Sudoku puzzle. The empty cells of the Sudoku are filled with zeros, and the rest of the cells are filled with integers from 1 to 9. Your task is to fill all the empty cells such that the final matrix represents a Sudoku solution.

// Note:
// A Sudoku solution must satisfy all the following conditions-
// 1. Each of the digits 1-9 must occur exactly once in each row.
// 2. Each of the digits 1-9 must occur exactly once in each column.
// 3. Each of the digits 1-9 must occur exactly once in each of the 9, 3x3 sub-grids of the grid.


#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row,int col,vector<vector<int>> &board,int val){
    for(int i=0;i<9;i++){
        // row check
        if(board[row][i]==val){
            return false;
        }

        // col check
        if(board[i][col]==val){
            return false;
        }

        // 3*3 matrix check
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val){
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<int>> &board){
    int n=board[0].size();

    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            // cell empty
            if(board[row][col]==0){
                for(int val=1;val<=9;val++){
                    if(isSafe(row,col,board,val)){
                        board[row][col]=val;
                        // recursive call  
                        bool ageSolutionPossible = solve(board);                                                                                                            ageSolutionPossible=solve(board);
                        if(ageSolutionPossible){
                            return true;
                        } 
                        else {
                            board[row][col] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void solveSudoku(vector<vector<int>> &sudoku)
{
	// Write your code here
    // No need to print the final sudoku
    // Just fill the values in the given matrix
    bool a=solve(sudoku);
}

int main() {
    vector<vector<int>> board ={{3, 0, 6, 5, 0 ,8 ,4 ,0 ,0},
{5 ,2, 0, 0, 0, 0, 0, 0, 0},
{0 ,8 ,7 ,0 ,0 ,0 ,0 ,3 ,1},
{0 ,0 ,3 ,0 ,1 ,0 ,0 ,8 ,0},
{9 ,0 ,0 ,8 ,6 ,3 ,0 ,0 ,5},
{0 ,5 ,0 ,0 ,9 ,0 ,6 ,0 ,0},
{1, 3 ,0 ,0 ,0 ,0 ,2 ,5 ,0},
{0 ,0 ,0 ,0 ,0, 0, 0, 7, 4},
{0 ,0 ,5, 2 ,0 ,6 ,3 ,0 ,0}};
    
    solveSudoku(board);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}