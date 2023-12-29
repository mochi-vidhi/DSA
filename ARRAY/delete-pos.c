//Delete element at specific position 
#include<stdio.h>
#define ub 50
void main(){
    int size,pos;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter Element [%d] ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nArray size[%d]:",size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter position to delete element:");
    scanf("%d",&pos);
    for(int i=pos-1;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("\nUpdated Array size [%d]: ",size);
     for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
