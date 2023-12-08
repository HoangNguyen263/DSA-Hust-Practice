#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
char f;
scanf("%c",&f);
getchar();
char m[1000];
gets(m);
int cnt = 0, i = 0;
while(m[i] != '\0') {
      if(m[i] == f)
         cnt++;
 
      i++;
   }
printf("\n%d",cnt);

return 0;
}

