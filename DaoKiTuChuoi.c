#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000000
char s[MAX];

struct Stack {
    char letter;
    struct Stack *next;
};
typedef struct Stack Stack;
Stack *top = NULL;

Stack *makeNode(char s){
    Stack *t = (Stack*)malloc(sizeof(char));
    t->letter = s;
    t->next = NULL;
    return t;
}

void push(char s){
    Stack *t = makeNode(s);
	if (t == NULL) printf("Stack is full");
	else{
		t->next = top;
		top = t;
	}

}

char pop(Stack *s){
    Stack *t = (Stack*)malloc(sizeof(Stack));
	if (top == NULL){
		printf("Stack is empty");
		exit(0);
	} else{
		t = top;
        char x = t->letter;
		top = top->next;
		free(t);
        return x;
	}
}

int length(char s[]){
    int l = 0;
    for (int i = 0; s[i] != '\0'; i++){
        l = l+1;
    }
    return l-1;
}

int main(){
    fgets(s,MAX,stdin);
    int pos = length(s) - 1;
    char temp[MAX];
    int pos_temp = 0;

    int first_pos= 0;
    while(1){
        if (s[first_pos] == ' ') break;
        else first_pos++;
    }

    while (pos >= 0){
        if (s[pos] != ' '){
            push(s[pos]);
            pos--;
        } 
        else{
            while (top != NULL) {
                temp[pos_temp] = pop(top);
                //printf("%d %s\n",pos_temp,temp);
                pos_temp++;
                
            }
            temp[pos_temp] = ' ';
            pos--;
            pos_temp++;
        }
    }
    while (top != NULL) {
                temp[pos_temp] = pop(top);
                //printf("%d %s\n",pos_temp,temp);
                pos_temp++;
    }
    printf("%s",temp);
}