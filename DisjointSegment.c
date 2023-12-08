#include<stdio.h>
#define N 10000000
typedef struct Segment{
    int a,b;
}Segment;

Segment s[N];
int n;
int ans;

void input(){
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        scanf("%d%d",&s[i].a,&s[i].b);
    }
}

void solve(){
    for (int i = 1; i <= n-1; i++){
        for (int j = i+1; j <= n; j++){
            if (s[i].b > s[j].b){
                Segment temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    int last = -100000000;
    ans = 0;

    for (int i = 1; i <= n; i++){
        if (s[i].a > last){
            ans += 1;
            last = s[i].b;
        }
    }
    printf("%d",ans);
}

int main(){
    input();
    solve();
    return 0;
}