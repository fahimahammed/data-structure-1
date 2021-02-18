// Bubble sort
#include<stdio.h>
int main(){
    int array[]={3,5,1,4,2};
    int n, i, j, swap;
    n = sizeof(array)/sizeof(array[0]);
    printf("Original Array: \n");
    for(i=0; i<n; i++){
        printf(" %d ", array[i]);
    }
    for(i=0; i<n-1; i++){
        for(j=0; j< n-i-1; j++){
            if(array[j] > array[j+1]){
               swap = array[j];
               array[j] = array[j+1];
               array[j+1] = swap;
            }
        }
    }
    printf("\nSorted Array: \n");
    for(i=0; i< n; i++){
        printf(" %d ",array[i]);
    }
}
