#include<stdio.h>
int n;
int a[1000000];

int main(){
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    scanf("%d",&a[i]);
    int oddNum = 0, evenNum = 0;
    //count odd and even numbers
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0) evenNum++;
        else oddNum++;
    }
    printf("%d %d",oddNum,evenNum);
}