//C++ 
#include <bits/stdc++.h> 
using namespace std;
#define N 9
 
// Function to check if the solution
// of sudoku puzzle is valid or not
bool isValidSudoku(int m[][9])
{
 
    // Stores unique value
    // from 1 to N
    bool unique[N + 1];
 
    // Traverse each row of
    // the given array
    for (int i = 0; i < N; i++) {
 
        // Initialize unique[]
        // array to false
        memset(unique, false,
               sizeof(unique));
 
        // Traverse each column
        // of current row
        for (int j = 0; j < N;
             j++) {
 
            // Stores the value
            // of board[i][j]
            int Z = m[i][j];
 
            // Check if current row
            // stores duplicate value
            if (unique[Z]) {
                return false;
            }
            unique[Z] = true;
        }
    }
 
    // Traverse each column of
    // the given array
    for (int i = 0; i < N; i++) {
 
        // Initialize unique[]
        // array to false
        memset(unique, false,
               sizeof(unique));
 
        // Traverse each row
        // of current column
        for (int j = 0; j < N;
             j++) {
 
            // Stores the value
            // of board[j][i]
            int Z = m[j][i];
 
            // Check if current column
            // stores duplicate value
            if (unique[Z]) {
                return false;
            }
            unique[Z] = true;
        }
    }
 
    // Traverse each block of
    // size 3 * 3 in board[][] array
    for (int i = 0; i < N - 2;
         i += 3) {
 
        // j stores first column of
        // each 3 * 3 block
        for (int j = 0; j < N - 2;
             j += 3) {
 
            // Initialize unique[]
            // array to false
            memset(unique, false,
                   sizeof(unique));
 
            // Traverse current block
            for (int k = 0; k < 3;
                 k++) {
 
                for (int l = 0; l < 3;
                     l++) {
 
                    // Stores row number
                    // of current block
                    int X = i + k;
 
                    // Stores column number
                    // of current block
                    int Y = j + l;
 
                    // Stores the value
                    // of board[X][Y]
                    int Z = m[X][Y];
 
                    // Check if current block
                    // stores duplicate value
                    if (unique[Z]) {
                        return false;
                    }
                    unique[Z] = true;
                }
            }
        }
    }
 
    // If all conditions satisfied
    return true;
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int m[9][9];
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                scanf("%d ",&m[i][j]);
            }
        }
        a[i] = isValidSudoku(m);
    }
    for (int i = 0; i < n; i++){
        printf("%d\n",a[i]);
    }

}
