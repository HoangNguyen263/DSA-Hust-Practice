#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int minOfInt = (-1) * pow(2,8*sizeof(int)-1);
int n,a[1000000];

/*Chia dãy thành 2 dãy con thì tổng dãy con lớn nhất có thể ở dãy bên
trái, hoặc ở dãy bên phải hoặc là 1 phần dãy bên trái + 1 phần dãy bên phải
Do đó, với dãy con lớn nhất bên trái thì xét từ high -> low
với dãy con bên phải thì xét thì low -> high
*/

// đệ quy 5/6 test case
int maxLeft(int low, int high){
    int sum = 0, maxSum = minOfInt;
    for (int i = high; i >= low; i--){
        sum += a[i];
        if (maxSum < sum) maxSum = sum;
    }
    return maxSum;
}

int maxRight(int low, int high){
    int sum = 0, maxSum = minOfInt;
    for (int i = low; i <= high; i++){
        sum += a[i];
        if (maxSum < sum) maxSum = sum;
    }
    return maxSum;
}

int max(int a, int b){
    int max = a;
    if (max <= b) return b;
    else return max;
}

int maxSub(int low, int high){
    if (low == high) return a[low];
    else {
        int mid = (low + high) / 2;
        int Left = maxLeft(low,mid);
        int Right = maxRight(mid+1,high);
        int maxSub = Left + Right;
        return max(maxSub,max(Left,Right));
    }
}

/*quy hoach dong 6/6 test case:Gọi s[i] là trọng lượng dãy con lớn nhất của dãy a1,a2,...ai
s[1]=a[1]
s[i]=max{ai,s[i-1]+ai}*/
int quy_hoach_dong(int a[],int n){
    int s[n];
    s[0]=a[0];
    int maxsum=a[0];
    for (int i=1;i<=n-1;i++) {
        if (s[i-1]+a[i]>a[i]) {
            s[i]=s[i-1]+a[i];
        } else s[i]=a[i];
        if (s[i]>maxsum) maxsum=s[i];
    } 
    return maxsum;
}

int main(){
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("%d",maxSub(0,n-1));

}