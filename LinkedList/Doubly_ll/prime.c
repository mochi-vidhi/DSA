#include<stdio.h>
#include<stdlib.h>
typedef struct node{
   int data;
   struct node *next;
   struct node *prev;
}node;
node *head =0,*temp,*newnode;
void primeNum(){
    int flag =0,i=2,count=0;
    newnode = (node*)malloc(sizeof(node));
    printf("Enter the data in node:");
    scanf("%d",&newnode->data);
     newnode->next = 0;
     newnode->prev = 0;
     head = newnode;
     count = newnode->data;
    while(i<count/2){
        if(count%2==0){
            flag =1;
            break;
        }
    }
    if(flag==0){
        printf("The number is prime %d",head->data);
    }
    else{
     printf("The number is  not prime %d",head->data);
    }

}
void main(){
    primeNum();
   
}
