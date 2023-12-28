#include<stdio.h>

int x[10];
int N,M;
int T;

int check(int v,int k){
    if (k < N) return 1;
    return T + v == M;
}

void solution(){
    for (int i = 1; i <= N; i++) printf("%d ",x[i]);
    printf("\n");
}

void TRY(int k){
    for (int v = 1; v <= M - T -(N-k); v++){
        if ((check(v,k))){
            x[k] = v;
            T = T + x[k];
            if (k == N) solution();
            else TRY(k+1);
            T= T - x[k];
        }
    }
}

int main(){
    scanf("%d %d",&N,&M);
    T = 0;
    TRY(1);
    return 0;
}
