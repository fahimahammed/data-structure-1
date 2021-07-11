#include<stdio.h>
int main(){
    int array[100], i, n, size;

    printf("Enter your Array size: ");
    scanf("%d", &size);
    printf("Enter your array elements: ");
    for(i = 0; i< size; i++){
        scanf("%d", &array[i]);
    }

    printf("\nEnter your number that you want to find: ");
    scanf("%d",&n);
    for(i=0; i<=10; i++){
        if(array[i]==n)
            break;
    }
    if(i<size){
        printf("\nFound in index of %d\n", i+1);
    }
    else{
        printf("\nNot found\n");
    }

    return 0;
}
