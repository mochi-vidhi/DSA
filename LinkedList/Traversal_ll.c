#include<stdio.h>
#include<stdlib.h>
typedef struct node{
   int data;
   struct node *next;
}node;
void insertNode(node *temp){
    while(temp!=0){
    printf("%d ",temp->data);
    temp=temp->next;
 }
}
void main(){
  node *newnode,*temp;
  node *head=0;
  int ch=1;
  while(ch==1){
    newnode=(node*)malloc(sizeof(node));
    printf("Enter the data of node:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Enter Your choice (0/1):");
    scanf("%d",&ch);
  }
  temp=head;
  insertNode(temp);
}
