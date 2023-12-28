#include<stdio.h>

int a[100],x[100];
int n,m;
int t,r;
int solution = 0;

int check(int v,int k){
    if (k < n) return 1;
    return t + a[n] * v == m;
}

void TRY(int k){
    for (int v = 1; v <= (m-t-r)/a[k];v++){
        if (check(v,k)){
            x[k] = v;
            t = t + a[k]*x[k];
            r = r - a[k+1];
            if (k==n) solution++;
            else TRY(k+1);
            t = t - a[k]*x[k];
            r = r + a[k+1];
        }
    }
}

int main(){
    scanf("%d %d",&n,&m);
    t = 0; r = 0;
    for (int i = 1; i <= n; i++) scanf("%d",&a[i]);
    for (int i = 2; i <=n; i++) r = r + a[i];
    TRY(1);
    printf("%d",solution);
}