// insertion at begining using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
#define ub 50
void main(){
  int *ptr,new_element,size;
    printf("Enter the size:-");
    scanf("%d",&size);
    ptr = (int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
      printf("Element [%d]:",i);
      scanf("%d",&ptr[i]);
    }
    for(int i=0;i<size;i++){
      printf("%d ",ptr[i]);
    }
    printf("\n");
    size++;
    printf("Insert new element:");
    scanf("%d",&new_element);
    for(int i=size-1;i>=0;i--){
      ptr[i+1]=ptr[i];
    }
    ptr[0]=new_element;
    printf("Updated array is :\n");
    for(int i=0;i<size;i++){
      printf("%d ",ptr[i]);
    }
}

