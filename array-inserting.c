// Array element insertion..

#include<stdio.h>
int main(){
    int array[]={2,3,4,5,6};
    int i=0, n, j, item = 50, position = 3 ;

    n = sizeof(array)/sizeof(array[0]); //Array length
    printf("Before insertion:\n");

    //print original array.
    for(i=0; i<n; i++){
        printf("Array[%d]: %d \n",i, array[i]);
    }

    printf("\nAfter insertion: \n");
    j = n;
    j ++;
    for (i = j-1; i>=position; i--){
        array[i]=array[i-1];
    }
    array[position-1] = item;  //Item added in array

    //print update array
    for(i=0; i<=n; i++){
        printf("array[%d]: %d\n",i,array[i]);
    }
}
