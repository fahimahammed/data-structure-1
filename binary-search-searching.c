#include<stdio.h>
int main(){
    int array[100], temp, i, j, size, n, first, last, mid;

    printf("Enter your array size: ");
    scanf("%d", &size);
    printf("Enter your array elements: ");
    for(i=0; i<size; i++){
        scanf("%d", &array[i]);
    }

    for(i=0; i<size; i++){
        for(j = i+1; j < size; j++){
            if(array[i] > array[j]){
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
          }
        }
    }

    printf("\nAfter sorting the numbers in ascending order: ");
    for(i=0; i<size; i++){
        printf("%d ",array[i]);
    }

    printf("\n\nEnter your number that you want to find: ");
    scanf("%d", &n);

    first = 0;
    last = size - 1;
    mid = (first + last)/ 2;

    while(first <= last){
        if(array[mid]<n){
            first = mid + 1;
        }
        else if(array[mid] == n){
            printf("\nFound in index of %d\n", mid+1);
            break;
        }
        else if(array[last] == n){
            printf("\nFound in index of %d\n", last+1);
            break;
        }
        else{
            last = mid - 1;
        }
        mid = (first + last)/2;
    }
    if(first > last){
        printf("\nNot found!\n");
    }

    return 0;
}
