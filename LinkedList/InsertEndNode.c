#include<stdio.h>
#include<stdlib.h>
typedef struct node{
   int data;
   struct node *next;
}node;
node*newnode,*head=0,*temp;
int data;
void getNode(){
   int ch=1;
  while(ch==1){
  newnode=(node*)malloc(sizeof(node));
  printf("Enter the data in node:");
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
  printf("Do you want to insert any other node(0/1):");
  scanf("%d",&ch);
}
}
void printNode(){
    temp=head;
    while(temp!=0){
    printf("%d ",temp->data);
    temp=temp->next;
 }
}
node *insertEndNode(){
    int other=1;
    while(other==1){
           newnode=(node*)malloc(sizeof(node));
             printf("Enter the newdata in node:");
             scanf("%d",&newnode->data);
             newnode->next=0;
             temp=head;
             while(temp->next!=0){
              temp=temp->next;
             }
             temp->next=newnode;
            printf("Do you want to insert any other node(0/1):");
            scanf("%d",&other); 
          }
           return head;
    }
void main(){
  getNode();
  insertEndNode();
  printNode();
}