#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *head=0,*temp,*newnode,*tail;
void getData(){
    int ch=1;
    while(ch==1){
    newnode = (node*)malloc(sizeof(node));
    printf("Enter the data in node:");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(head==0){
        head = newnode;
        temp = newnode;
        tail = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
        tail = newnode;
    }
    temp->next = head;
    printf("Enter the data in  node(0/1):");
    scanf("%d",&ch);
}
}
void insertData(){
    int other = 1;
    while(other==1){
    newnode = (node*)malloc(sizeof(node));
    printf("\nEnter the data in node:");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(head==0){
        head = newnode;
        newnode->next = newnode;
        temp = newnode; 
    }
    else{
          newnode->next = head;
          
          //Second method
        //   temp = head;
        //   while(temp->next!=head){
        //     temp = temp->next;
        //   }
         head = newnode;       
         tail->next = head;

    }
    printf("Enter your choice(0/1):");
    scanf("%d",&other);
}
}
void printData(){
    temp = head;
    do{
        printf("%d ->",temp->data);
        temp = temp->next;
    }while(temp!=head);
    printf("%d ",temp->data);
}
void main(){
    // getData();
    // printData();
    insertData();
    printData();
}