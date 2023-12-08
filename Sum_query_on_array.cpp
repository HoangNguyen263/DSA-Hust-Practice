/*
Description
Given a sequence of integers a1,a2, . . ., an
Perform a sequence of queries sum(i,j) which computes the sum ai + a(i+1) 
+ ... + aj
Input
Line 1: a positive integer n (1 <= n <= 1000000)
Line 2: the sequence a1,a2, . . ., an (1 <= ai <= 200)
Line 3: a positive integer K (1 <= K <= 1000000)
Line i + 3 (i = 1, 2, ..., K): contains 2 integers i and j (1 <= i <= j <= n) represents 
the information about the ith query
Output
Line i (i = 1,...,K) writes the result of the ith query
Example
Input
5
10 3 9 6 2 
6
2 5
2 4
2 3
2 4
1 4
2 3
Output
20
18
12
18
28
12
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000
int a[MAX], mark[MAX];

int sumQuery(int i, int j){
    return mark[j] - mark[i-1];
}

void print(int k, int s[]){
    for (int i = 0; i < k; i++){
        printf("%d\n",s[i]);
    }
}

int main(){
    int n,k;
    scanf("%d",&n);

    for (int i = 0; i < n; i++){
        scanf("%d",(a+i));
    }
    scanf("%d",&k);

    int *sum = (int *)malloc(k*sizeof(int));
    int i,j;
    mark[0] = a[0];
    for (int p = 1; p < n; p++){
        mark[p] = mark[p-1] + a[p];
    }
    for (int p = 0; p <= k-1; p++){
        scanf("%d %d",&i,&j);
        i = i - 1; j = j - 1;
        sum[p] = sumQuery(i,j);
    }

    print(k,sum);

    
}

