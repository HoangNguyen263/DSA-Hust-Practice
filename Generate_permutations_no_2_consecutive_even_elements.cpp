#include<stdio.h>

int n;
int x[1000], mark[1000];

void printSolution(){
    for (int i = 1; i <= n; i++){
        printf("%d ",x[i]);
    }
    printf("\n");
}

int check(int v,int k){
    if (mark[v] == 0 && (v % 2 != 0 || x[k] % 2 != 0)) return 1;
    else return 0;
}

void TRY(int k){
    for (int v = 1; v <= n; v++){
        if (v % 2 == 0) x[0] = 1;
        else x[0] = 2;
        if (check(v,k-1)){
            x[k] = v;
            mark[v] = 1;
            if (k == n) printSolution();
            else TRY(k+1);
            mark[v] = 0;
        }
    }
}

int main(){
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) mark[i] = 0;
    TRY(1);
}