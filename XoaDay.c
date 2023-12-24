#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
int a[MAX],b[MAX];

void print(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}

void rotate(int a[],int n){
    int temp = a[0];
    //a[n-1] = a[0]; 
    for (int i = 0; i < n-1; i++){
        a[i] = a[i+1];
    }
    a[n-1] = temp;
}

void deleteArray(int a[], int b[], int n){
    
}

int main(){
    //int n;
    //scanf("%d",&n);
    /*for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(int j = 0; j < n; j++){
        scanf("%d",&b[j]);
    }*/
}