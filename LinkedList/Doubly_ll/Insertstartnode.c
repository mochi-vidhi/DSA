#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node *next;
 struct node *prev;
}node;
node *head=0,*newnode,*temp;
void createNode(){
    int ch=1;
    while(ch==1){
        newnode=(node*)malloc(sizeof(node));
        printf("Enter data in node:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp->prev=temp;
            temp=newnode;
        }
        printf("Enter your choice(0/1):");
        scanf("%d",&ch);
    }
}
void insert0thNode(){
    int other=1;
    while(other==1){
        newnode = (node*)malloc(sizeof(node));
        printf("Insert data in node:");
        scanf("%d",&newnode->data);
        newnode->next=head;
        newnode->prev=head->prev;
        head->prev=newnode;
        head=newnode;
        printf("Do you insert any other node(0/1):");
        scanf("%d",&other);
    }
}
void displayNode(){
    temp=head;
    while(temp!=0){
        printf(" %d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void main(){
    createNode();
    displayNode();
    insert0thNode();
    displayNode();
}