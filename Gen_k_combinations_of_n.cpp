#include<stdio.h>
int n,m;
int x[1000];
int check(int v,int k){
    if (x[k-1] < v) return 1;
    else return 0;
}

void solution(){
    for(int i = 1; i <= m; i++)
    printf("%d ",x[i]);
    printf("\n");
}

void TRY(int k){
    for (int v = 1; v <= n; v++){
        if (check(v,k)){
            x[k] = v;
            if (k==m) solution();
            else TRY(k+1);
        }
    }
}

int main(){
    scanf("%d %d",&m,&n);
    TRY(1);
}