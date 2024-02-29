#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}node;
node *head = 0,*temp,*newnode;
void getData(){
    int ch =1;
    while(ch==1){
        newnode = (node*)malloc(sizeof(node));
        printf("Enter the data in node:");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        if(head==0){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Enter your choice(0/1):");
        scanf("%d",&ch);
    }
}
void displayNode(){
    int sum =0,count=0;
    float avg;
    temp=head;
    while(temp!=0){
        printf(" %d -> ",temp->data);
        sum += temp->data;
        temp=temp->next;
        count++;
    }
    avg = sum/count;
    printf("NULL\n");
    printf("The sum of all node is %d\n",sum);
    printf("The average of all node is %f",avg);
}
void main(){
    getData();
    displayNode();
}