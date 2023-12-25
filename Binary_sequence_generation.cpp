/*
Given an integer n, write a program that generates all the binary sequences of length n in a lexicographic order.
Input
Line 1: contains an integer n (1 <= n <= 20)
Output
Write binary sequences in a lexicographic ordder, eac sequence in a line

Example
Input
3
Output
000
001
010
011
100
101
110
111
*/
#include<stdio.h>
#define MAX 20
int n,x[MAX];
void printSolution(){
    for(int i = 0; i < n; i++){
        printf("%d",x[i]);
    }
    printf("\n");
}

int check(int v,int k){
    return 1;
}

void TRY(int k){
    for (int v = 0; v <= 1; v++){
        if (check(v,k)==1){
            x[k] = v;
            if (k==n-1) printSolution();
            else TRY(k+1);
        }
    }
}

int main(){
    scanf("%d",&n);
    TRY(0);
}