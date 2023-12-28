#include<stdio.h>

int mark[100];
int pos_mark = 1;
int check(int n, int m,int a[],int b[]){
    if (n != m) return 0;
    else {
        int pos = 0;
        int len = n - 1;
        while (pos != len){
            if (a[pos] != b[pos]) return 0;
            pos++;
        }
        return 1;
    }
}

void input(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[1000],b[1000];
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);
    for (int j = 0; j < m; j++) scanf("%d",&b[j]);
    mark[pos_mark]=check(n,m,a,b);
    
}

int main(){
    int T;
    scanf("%d",&T);
    int temp = T;

    while(T != 0){
        input();
        pos_mark++;
        T--;
    }
    

    for (int i = 1; i <= temp; i++) printf("%d\n",mark[i]);

}