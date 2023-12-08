#include <bits/stdc++.h> 
int fibonacci(int n) {
    if (n == 1) {
        return 0;
    } 
    else if (n == 2) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() 
{ 
    int n;
    scanf("%d",&n);
    if (n == 0)
    printf("0");
    else {
        for (int i = 1; i <= n; i++) {
            printf("%d ",fibonacci(i));
        }
    }
    

} 
