#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node *next;
}node;
int count=0;
node *head=0,*newnode,*temp;
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
  count++;
  printf("Do you want to insert any other node(0/1):");
  scanf("%d",&ch);
}
printf("\nThe length of linked list is :%d\n",count);
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
