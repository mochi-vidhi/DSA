#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
node *head,*newnode,*temp;
void getNode(){
   int ch=1;
   while(ch==1){
   newnode = (node*)malloc(sizeof(node));
   printf("Enter the node in linked list:");
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
   printf("Enter your choice(0/1):");
   scanf("%d",&ch);
}
}
void delete0thNode(){
    if(head==0){
        printf("Linked list is empty!!\n");
    }
    else{
    //node delete from linked list
     temp=head;
     head=temp->next;
     //node delete from memory
     free(temp);
    }
}
void printNode(){
    temp=head;
    while(temp!=0){
      printf("%d -> ",temp->data);
      temp=temp->next;
    }
    printf("NULL\n");
}
void main(){
     getNode();
     printNode();
     delete0thNode();
     printNode();
}