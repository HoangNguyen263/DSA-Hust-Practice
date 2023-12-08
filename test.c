#include<stdio.h>
int myfunc(int n) {
    if (n < 10) return n;
    else{
        int a = n / 10;
        int b = n % 10;
        return myfunc(a+b);
    }
}

int main(){
    printf("%d",myfunc(748));
}