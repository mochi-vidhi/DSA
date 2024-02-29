#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}node;
node *head = 0,*temp,*newnode,*nextnode;
void Fibonacci(){
    int n;
    printf("Enter the lenght of fibonacci:");
    scanf("%d",&n);
    newnode = (node*)malloc(sizeof(node));
    newnode->data =0;
    newnode->next = 0,newnode->prev=0;
    nextnode = (node*)malloc(sizeof(node));
     nextnode->data = 1;
     head = newnode;
     head->next = nextnode;
     nextnode->prev = head; 
     temp = nextnode;
    if(n<2){
     printf("%d ->",head->data);
     printf("%d ->",temp->data);
    }
    else{
       printf("The fibonacci series is :");
      int store;
      printf("%d ->",head->data);
      printf("%d ->",temp->data);
      for(int i=2;i<=n;i++){
         store = head->data +temp->data;
         head->data = temp->data;
         temp->data = store;
         printf("%d ->",store);
      }
         printf("NULL\n");
 }
}
void main(){
    Fibonacci();
}