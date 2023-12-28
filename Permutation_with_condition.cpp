#include<stdio.h>
#include<stdlib.h>
#define MAX 15

int x[MAX],n;
int countSolution = 0;

//mang de danh dau xem v da xuat hien truoc do chua
int m[] = {0};

void solution(){
    int i;
    
	for (i = 1; i <= n; i++){
        printf("%d %d||",x[i],i);
	}
   
    countSolution++;
     printf("%d\n",countSolution);
}

void Try(int k){
	for (int v = 1; v <= n; v++){
		if (!m[v]){
			x[k] = v;
			m[v] = 1;//danh dau

            int res;
            if (v % k == 0 || k % v == 0){
                res = 1;
            } else res = 0;

            if (res == 0) {
                m[v] = 0;
                
            }
			else if (k == n) solution();
			else Try(k+1);
			m[v] = 0;//khoi phuc
            
		}
	}
}

int main(){
    scanf("%d",&n);
	Try(1);
    printf("%d",countSolution);
}
