#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
}node;
node *head = 0,*temp,*newnode,*tail;
void getData(int n){
    int i=1;
    while(i<=n){
        newnode = (node*)malloc(sizeof(node));
        printf("Enter data in node %d:",i);
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
        i++;
    }
}
void insertFirstnode(){
    newnode = (node*)malloc(sizeof(node));
    printf("Insert data in first node:");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(head==0){
        head = newnode;
        newnode->next = newnode;
        temp = newnode;
    }
    else{
    newnode->next = head;
     head = newnode;
    tail->next = head;
    }
}
void insert_last(){
    newnode = (node*)malloc(sizeof(node));
    printf("Enter the data in last node:");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(head==tail){
    newnode->next = tail->next;
    tail->next= newnode;
    
    }
    else{
        newnode->next = tail->next;
        tail->next = newnode;
    }
    tail = newnode;
}
void insert_pos(int n){
  int pos,i =1,op=1;
  while(op==1){
   printf("\n==============================\n");
   printf("Available node is: %d\n",n);
   printf("You insert node in the range of(1 to %d):\n",n+1);
   printf("Enter the position:");
   scanf("%d",&pos);
   if(pos<=0 || pos>n){
    printf("Invalid position!!\n");
   }
   else{
      if(pos==1){
        insertFirstnode();
      }
      else if(pos==n){
        insert_last();
      }
      else if(pos>1){
        newnode = (node*)malloc(sizeof(node));
        printf("Insert node in data %d:",pos);
        scanf("%d",&newnode->data);
        newnode->next = 0;
        temp = head;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
       newnode->next = temp->next;
       temp->next = newnode;
      }
   }
   n++;
    printf("Do you want to insert other node(0/1):");
    scanf("%d",&op);
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
    int n;
    printf("How many nodes You want to Create:");
    scanf("%d",&n);
    getData(n);
    printData();
    insert_pos(n);
    printData();
}
