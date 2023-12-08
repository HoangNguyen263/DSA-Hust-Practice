#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s[30];
    fgets(s,30,stdin);
    int count = 0, i = 0;
    while (s[i] != '\0'){
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        i++;
    }
    printf("%s",s);
}