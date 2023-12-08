//C/C++ 
#include <stdio.h> 

int main() 
{ 
    int m,n;
    int a[1000][1000];
    scanf("%d %d",&m,&n);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            sum += a[i][j];
        }
    }
    printf("%d",sum);

}
