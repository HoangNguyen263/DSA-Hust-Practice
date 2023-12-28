#include<stdio.h>
#include<stdlib.h>

int n,a[100000],temp[100000];
typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *top = NULL;

Node *makenode(int x){
    Node *t = (Node *)malloc(sizeof(Node));
    t->data = x;
    t->next = NULL;
    return t;

}

void push(int x){
    Node *t = makenode(x);
    t->next = top;
    top = t;
}

int pop(){
    Node *t = (Node*)malloc(sizeof(Node));
    t = top;
    int x = t->data;
    top = t->next;
    free(t);
    return x;
}



int main(){
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int pos = 0;
    while (pos != n){
        push(a[pos]);
        pos++;
    }

    for (int i = 0; i < n; i++){
        temp[i] = pop();
    }

    for (int i = 0; i < n; i++){
        if (temp[i] != a[i]) {
            printf("0");
            break;
        }
        if (i == n-1 && temp[i] == a[i]){
            printf("1");
        }
    }
    
}