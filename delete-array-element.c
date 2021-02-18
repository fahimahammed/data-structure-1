#include<stdio.h>
int main(){
    int array[]={1,2,3,4,5};
    int i, position = 3, n, j;
    n= sizeof(array)/sizeof(array[0]); //array length.

    printf("Before Delete array Element: \n");
    //print original array
    for(i=0; i<n; i++){
        printf("Array[%d]: %d \n", i, array[i]);
    }

    j =  n;
    j = j-1;
    for(i=position-1; i<j; i++){
        array[i]= array[i+1];
    }

    printf("\nAfter Delete Array Element: \n");

    //Print new array after delete a element.
    for(i=0; i<j; i++){
        printf("array[%d]: %d\n", i, array[i]);
    }
}
