#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *head=0,*temp,*tail,*newnode;
void getData(){
    int ch=1;
    while(ch==1){
        newnode = (node*)malloc(sizeof(node));
        printf("Enter the data of node:");
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
      printf("Enter your choice(0/1):");
      scanf("%d",&ch);
    }
}
void insert_end(){
    int other = 1;
    while (other ==1){
    newnode = (node*)malloc(sizeof(node));
    printf("\nInsert the end data:");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(head == tail){
        newnode->next = tail->next;
        tail->next = newnode;
    }
    else{
       newnode->next = tail->next;
        tail->next = newnode;
    }
    tail = newnode;
    printf("Enter your choice(0/1):");
    scanf("%d",&other);

}
}
void printData(){
    printf("\nThe circular linked list is: ");
    temp = head;
    do{
        printf("%d ->",temp->data);
        temp = temp->next;
    }while(temp!=head);
    printf("%d ",temp->data);
}
void main(){
    getData();
    printData();
    insert_end();
    printData();
}