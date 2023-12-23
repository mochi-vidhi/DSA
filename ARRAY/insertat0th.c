#include<stdio.h>
#define ub 50
void main(){
   int new_element,size,arr[ub];
   printf("Enter the size of array:");
   scanf("%d",&size); 
   if(size<ub){
   for(int i=0;i<size;i++){
    printf("Element [%d]:",i);
    scanf("%d",&arr[i]);
   }
   for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
   }
   printf("\n");
   size++;
   printf("size is %d\n",size);
   if(size<ub){
   printf("Insert new element:");
   scanf("%d",&new_element);
   for(int i=size-1;i>=0;i--){
      arr[i+1]=arr[i];
   }
    arr[0]=new_element; 
    printf("\nUpdated array is \n");
    for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
   }
}
}
}
