// Insert new element at specific position 
#include<stdio.h>
#define ub 50
void main(){
    int new_element,size,pos;
    printf("Enter the size of array:-");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
       printf("Enter Element [%d]:",i);
       scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
       printf("[%d] %d\n",i,arr[i]);
    }
    size++;
    printf("\nEnter position element to be inserted:");
    scanf("%d",&pos);
    if(pos<0 || pos>size+1){
        printf("Invalid position!!\n");
        printf("Insertion is not posible!!\n");
    }
    else{
        printf("\nInsert new element:");
        scanf("%d",&new_element);
        for(int i=size-1;i>=pos-1;i--){
          arr[i+1]=arr[i];
        }
        arr[pos-1]=new_element;
        printf("\nUpdated array is:\n");
        for(int i=0;i<size;i++){
        printf("[%d]  %d\n",i,arr[i]);
        }
    }   
}