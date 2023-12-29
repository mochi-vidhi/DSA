//Delete element at end position 
#include<stdio.h>
#define ub 50
void main(){
    int size;
    printf("Enter size of Array :");
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
    size--;
    printf("\nUpdated Array size [%d]: ",size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}