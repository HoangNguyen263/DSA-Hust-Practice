#include<stdio.h>
#include<stdlib.h>
/*
#define MAX 1000000
int *a;
int mark[MAX][MAX] = {0};
int sumQuery(int i, int j){
    if (i == j) {
        mark[i][j] =  *(a+i);
    }
    if (mark[i][j] == 0){
        if (mark[i][j] != 0){
            return mark[i][j];
        } 
        mark[i][j] = *(a+i) + sumQuery(i+1,j);
    }
    return mark[i][j];
}

void print(int k, int s[]){
    for (int i = 0; i < k; i++){
        printf("%d\n",s[i]);
    }
}

int main(){
    int n,k;
    scanf("%d",&n);
    a = (int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++){
        scanf("%d",(a+i));
    }
    scanf("%d",&k);

    int *sum = (int *)malloc(k*sizeof(int));
    int i,j;
    for (int p = 0; p <= k-1; p++){
        scanf("%d %d",&i,&j);
        i = i - 1; j = j - 1;
        sum[p] = sumQuery(i,j);
    }

    print(k,sum);

    free(a);
    free(sum);

    
}

*/
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

