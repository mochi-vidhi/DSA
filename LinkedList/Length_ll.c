#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node *next;
}node;
node *head=0,*temp,*newnode;
void getNode(){
    int count=0;
    int ch=1;
    while(ch==1){
        newnode =(node*)malloc(sizeof(node));
        printf("Enter the data in linked list:");
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
        printf("Enter your choice(0/1):");
        scanf("%d",&ch);
    }
    //print length of linked list
   printf("\nThe length of linked list is %d\n",count);
}
void printNode(){
    int count=0;
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
}