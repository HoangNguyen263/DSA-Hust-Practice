/*
Viết chương trình tìm kiếm chuỗi con trong 1 chuỗi. 
Yêu cầu là tìm kiếm đếm một chuỗi con xem chuỗi con đó xuất hiện  
bao nhiêu lần trong một chuỗi.
Input:
Dòng 1: Chứa chuỗi con cần đếm.
Dòng 2: Chứa chuỗi lớn.
Ouput:
Số lần xuất hiện.
Ví dụ:
Input
te
dai hoc kinh te quoc dan
Output
1
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

struct Stack{
    char letter;
    struct Stack *next;
};
typedef struct Stack Stack;
Stack *top = NULL;

char str[MAX];

Stack *makenode(char s){
    Stack *t = (Stack*)malloc(sizeof(char));
    if (t == NULL) printf("Stack is full");
    t->letter = s;
    t->next = NULL;
    return t;
}

void push(char s){
    Stack *t = makenode(s);
    if (t == NULL) printf("Error");
    t->next = top;
    top = t;
}

char pop(){
    Stack *t = (Stack*)malloc(sizeof(Stack));
    t = top;
    char x = t->letter;
	top = top->next;
	free(t);
    return x;
}

int main(){
    char cstr[MAX];
    scanf("%s",cstr);
    getchar();
    fgets(str,MAX,stdin);
    int count = 0;

    char temp[MAX];
    /*Hàm strcmp() trong C được sử dụng để so sánh 2 chuỗi. 
    Nếu hàm strcmp(str1, str2) trả về 0 thì 2 chuỗi bằng nhau, 
    lớn hơn 0 thì chuỗi str1 lớn hơn chuỗi str2 
    và ngược lại nếu nhỏ hơn 0 thì chuỗi str1 nhỏ hơn str2.
    */

    int pos = strlen(str) - 1;
    while (pos >= 0){
        if (str[pos] != ' '){
            push(str[pos]);
            pos--;
        } else{
            int pos_temp = 0;
            while (top != NULL){
                temp[pos_temp] = pop();
                pos_temp++;
            }
            temp[pos_temp] = '\0';
            if (strcmp(cstr,temp) == 0) {
                count++;
           }
            pos--;
        }
    }
    int pos_temp = 0;
    while (top != NULL){
        temp[pos_temp] = pop();
        pos_temp++;
    }
    temp[pos_temp] = '\0';
    if (strcmp(cstr,temp) == 0) count++;
    printf("%d",count);
}