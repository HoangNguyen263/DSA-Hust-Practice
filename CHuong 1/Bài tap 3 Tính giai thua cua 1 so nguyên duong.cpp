#include <bits/stdc++.h> 
long long giaithua(int n) {
	long long res = 1;
    if (n == 0)
    res = 1;
    else 
    res = 1ll * n * giaithua(n-1);
    return res;
}

int main() 
{ 
int n;
scanf("%d",&n);
printf("%lld",giaithua(n));

return 0;
}
