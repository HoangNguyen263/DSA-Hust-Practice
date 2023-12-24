/*
Xếp N quân hậu vào một bàn cờ sao cho không có 2 quân hậu nào "ăn nhau" (cùng hàng, cùng cột, cùng đường chéo).
Đầu vào: Số nguyên N
Đầu ra gồm nhiều hàng, mỗi hàng là một dãy số có ý nghĩa là giá trị hàng của các quân hậu từ cột 1 đến cột N.
Mô hình hoá:
- x [1, . . ., n ] trong đó x [ i ] là
hàng của quân hậu xếp trên
cột i , với mọi i = 1, …, n
- Thuộc tính P
• x [ i ] != x [ j ], với mọi 1 <= i < j  n
• x [ i ] + i != x [ j ] + j, với mọi 1 <= i < j <= n
• x [ i ] – i != x [ j ] - j , với mọi 1 <= i < j <= n
*/
#include<stdio.h>
#define MAX 100
int n;
int x[MAX];

void printSolution(){
    for (int i = 1; i <= n; i++){
        printf("%d",x[i]);
    }
    printf("\n");
}

int check(int v, int k){
    for(int i = 1; i <= k-1; i++) {
        if(x[i] == v) return 0;
        if(x[i] + i == v + k) return 0;
        if(x[i] - i == v - k) return 0;
        }
    return 1;
}

void Try(int k){
    for(int v = 1; v <= n; v++) {
        if(check(v,k)) {
            x[k] = v;
            if(k == n) printSolution();
            else Try(k+1);
        }
    }
}


int main(){
    
    scanf("%d",&n);
    Try(1);
}