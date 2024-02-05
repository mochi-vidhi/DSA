#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node *next;
}node;
node *head,*temp,*newnode;
void getNode(){
 int ch=1;
 while(ch==1){
    newnode=(node*)malloc(sizeof(node));
    printf("Enter the node in linked list:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        head = newnode;
        temp = newnode;
    }
    else{
        temp->next=newnode;
        temp=temp->next;
    }
    printf("Enter your choice(0/1):");
    scanf("%d",&ch);
 }
}
void deleteendNode(){
    node *prev;
    if(head==0){
        printf("Linkled list is empty!!\n");
    }
    else{
    temp=head;
    while(temp->next!=0){
    prev=temp;
    temp=temp->next;
    }
    if(temp==head){
        head=0;
    }
    else{
        prev->next=0;
    }
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
    deleteendNode();
    printNode();
}