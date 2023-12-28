#include<stdio.h>
int test;

int check(int a[], int size){
    for (int i = 0; i < size; i++){
        if (a[i] == 0) return 0;
        else if (a[i] > size) return 0;
    }
    int count[1000000] = {0};
    for (int i = 0; i < size; i++){
        int target = a[i];
        if (a[i]==target) count[a[i]]++;
        if (count[a[i]] == 2) return 0;
              
    }
    return 1;
}

void input(){
    int n;
    scanf("%d",&n);
    int a[1000000];
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);
    test = check(a,n);

}

int main(){

        input();
        printf("%d\n",test);

}
