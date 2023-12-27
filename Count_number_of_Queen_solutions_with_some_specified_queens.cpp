#include <bits/stdc++.h> 

int board[1000][1000];
int N,K = 0;
int countSolution = 0;
int mark[1000]; // mark[i] là toạ độ cột trên hàng i
int x[1000];//x[i] là toạ độ cột trên hàng i

void input(){
    scanf("%d",&N);
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            scanf("%d ",&board[i][j]);
        }
    }
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
        if (board[i][j] == 1) {
                K++;
                mark[i] = j;
        }
}

void solution(int fK){
    int i = 1;
   while (fK != 0 && i <= N){
    if (x[i] == mark[i]) fK--;
    i++;
   }
   if (fK == 0) countSolution++;
   else return;
}
int check(int v, int k){
    for (int i = 1; i < k; i++){
		
		if (v==x[i]) return 0;
		
		if (abs(v-x[i])==abs(k-i)) return 0; 
	}
	return 1;
}

void TRY(int row){
    for (int v = 1; v <= N; v++){
        if (check(v,row) == 1){
            x[row]=v;
            if (row==N) solution(K);
            else TRY(row+1);
        }
    }
}

int main(){
    input();
    TRY(1);
    printf("%d",countSolution);

}