#include <stdio.h> 

#define MAX 10000000
int m[MAX][MAX];

int C(int k, int n) {
    if (k == 0 || k == n) m[k][n] = 1;
    else {
        if(m[k][n] < 0){
            m[k][n] = C(k-1,n-1) + C(k,n-1);
        }
        
    }
    return m[k][n];
}
int main() { 
    int k,n;
    scanf("%d %d",&k,&n); 
    for(int i = 0; i <= n; i++)
    for(int j = 0; j <= n; j++)
    m[i][j] = -1;
    printf("%d",C(k,n));

}