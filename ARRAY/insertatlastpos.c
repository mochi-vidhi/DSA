#include<stdio.h>
#define ub 50
void main(){
   int new_element,size;
   printf("Enter the size of array:");
   scanf("%d",&size);
   int arr[size];
   for(int i=0;i<size;i++){
    printf("Element [%d]:",i);
    scanf("%d",&arr[i]);
   }
   for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
   }
   printf("\n");
   size++;
   printf("Insert new element:");
   scanf("%d",&new_element);
   arr[size-1]=new_element;
   printf("\nUpdated array is \n");
    for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
   }
}
