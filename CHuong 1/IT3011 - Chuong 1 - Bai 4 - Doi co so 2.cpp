//CPP 
#include <bits/stdc++.h> 

int main() 
{ 
    int n;
    scanf("%d",&n);
    int a[10];
    int res = n, i = 0,count = 0;
    if (n < 0) {
    	printf("0");
	} else {
		while (1) {
    	//printf("%d ",i);
        a[i] = res % 2;
        //printf("%d ",a[i]);
        res = res / 2;
        i++;
        if (res == 0) {
        	break;
        }
        count++;
        //printf("\n-------\n");
    } 
    //printf("\ncount is %d \n",count);
    for (i = count; i >= 0; i--) {
        printf("%d",a[i]);
    }
	}
    

}
