#include <bits/stdc++.h> 
#include <math.h>

int main() 
{ 
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double d = b * b - 4 * a * c;
    if (d < 0)
    printf("VO NGHIEM");
    else if (a == 0 && b == 0 && c == 0)
    printf("VO SO NGHIEM");
    else if (d == 0)
    printf("%lf",-b / (2 * a));
    else if (d > 0)
    printf("%lf %lf",(-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));

}
