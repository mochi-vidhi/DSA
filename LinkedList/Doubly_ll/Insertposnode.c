#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node * next;
 struct node * prev;
}node;
node * head = 0,*temp,*newnode;
void insertPos(){
    int pos,i=1,ch=1,count = 0;
    while(ch==1){
    newnode = (node*)malloc(sizeof(node));
    printf("Insert data in node:");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = 0;
    printf("Enter the positon:");
    scanf("%d",&pos);
    if(pos<0 ||pos>count){
        printf("Invalid position:");
    }
    else if(pos==1){
        newnode->next = head;
        newnode->prev = head->prev;
        head->prev = newnode;
        head = newnode; 
           
    }
    else if(pos>1){  
        temp = head;
        while(i<pos-1){
           temp = temp->next;   
           i++;
        }
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
        newnode->prev = temp;
        
    }
    else if(pos==0){
        if(head == 0){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
    count++;
    printf("Enter your choice:(0/1)");
    scanf("%d",&ch);
}
}
void printNode(){
   temp = head;
   while(temp!=0){
    printf(" %d -> ",temp->data);
    temp = temp->next;
   }
   printf("NULL\n");
}
void main(){
    insertPos();
    printNode();
}