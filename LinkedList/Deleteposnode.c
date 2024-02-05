#include<stdio.h>
#include<stdlib.h>
#include"delete0thnode.h"
void deleteposNode(){
    int pos,i=1;
    printf("\nEnter the position:");
    scanf("%d",&pos);
    node *nextnode;
    if(pos<=count){
    if(pos<=0){
        printf("\nInvalid condition!!");
    }
    else if(pos==1){
        delete0thNode();
    }
    else{
    if(head==0){
        printf("Linkled list is empty!!\n");
    }
    else{
    temp=head;
    while(i<pos-1){
    temp=temp->next;
    i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}
}
}
else{
   printf("\nDeletetion is not possible!!");
   printf("\nPosition is grater than length of linked list!!\n");
}
}
void main(){
    getNode();
    printNode();
    deleteposNode();
    printNode();
}
