//CPP 
#include <bits/stdc++.h> 
int UCLN(int a,int b) {
	if (a < 0) {
        a = -1 * a;
    }
    if (b < 0) {
        b = -1 * b;
    }
    if (a % b == 0) {
        return b;
    } else {
        int k = a % b;
        return UCLN(b,k);
    }
}

int main() 
{ 
    int a,b;
    scanf("%d %d",&a,&b);
    int ucln,bcnn;
    //tim uoc chung lon nhat
    if (a == b) {
        ucln = a;
        printf("%d ",ucln);
    } else if (a == 0) {
    	ucln = b;
    	printf("%d ",ucln);
	} else if (b == 0) {
    	ucln = a;
    	printf("%d ",ucln);
	} else if (a < b) {
        ucln = UCLN(b,a);
        printf("%d ",ucln);
    } else {
        ucln = UCLN(a,b);
        printf("%d ",ucln);
    }
    printf("\n");
    // tim boi chung nho nhat
    if (ucln == 0) {
        printf("0");
    } else {
    	if (a < 0 || b < 0) {
    		bcnn = -1 * a * b / ucln;
		} else bcnn = (a * b) / ucln;
        
        printf("%d ",bcnn);
    }
    

}
