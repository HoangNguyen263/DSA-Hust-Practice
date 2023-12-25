/*
Description
Given an integer n, write a program that generates all binary sequences without consecutive 11 in a lexicographic order.
Input
Line 1: contains an integer n (1 <= n <= 20)
Output
Write binary sequences in a lexicographic order, each sequence in a line
Example
Input
3
Output
000
001
010
100
101
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
    if (v + x[k-1] < 2) return 1;
    return 0;
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
