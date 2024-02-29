#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}node;
node *head =0,*temp,*tail,*newnode;
void  createNode(){
 int ch=1;
  while(ch==1){
    newnode=(node*)malloc(sizeof(node));
    printf("Enter data in node:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    //if we create first node 
    if(head==0){
        head=newnode;
        temp=newnode;
        tail=newnode;
    }
    //creating other nodes 
    else{
        temp->next = newnode;
        newnode->prev = temp;
        temp=newnode;
        tail=newnode;
    }
    printf("Do you want to Enter node(0/1):");
    scanf("%d",&ch);
  }
 
}
void insertLastNode(){
    int other=1;
    while(other==1){
    newnode = (node*)malloc(sizeof(node));
    printf("Insert data in node:");
    scanf("%d",&newnode->data);  
    newnode->next = 0;
    tail->next = newnode;
    newnode->prev=tail;
    tail = newnode; // always points to last node
    printf("Do you want to insert node(0/1):");
    scanf("%d",&other);
    }
}
void displayNode(){
    temp=head;
    while(temp!=0){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void main(){
  createNode();
  displayNode();
  insertLastNode();
  displayNode();
}