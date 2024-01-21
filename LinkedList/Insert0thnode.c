#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
int data;
node*newnode,*head=0,*temp;
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
  printf("Enter your choice(0/1):");
  scanf("%d",&ch);
}  
}
node *insert0thNode(){
  int other=1;
  while (other==1)
  {
    newnode=(node*)malloc(sizeof(node));
    if(newnode==NULL){
      printf("\nInsertion fail!!\n");
      exit(0);
    }
    else{
    printf("Enter the newdata at bigining:");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=head;
    head=newnode; 
   printf("Do you insert any other node(0/1):");
   scanf("%d",&other);
  }
 }
  return head;
}
void printValue(){
   while(temp!=0){
    printf("%d ",temp->data);
    temp=temp->next;
  }
}
void main(){
getNode();
head=insert0thNode();
temp=head;
printValue();
}