//Linear search..

#include<stdio.h>
int main(){
    int array[100], i, n, findNum;

    printf("Enter Array Size: ");
    scanf("%d",&n);
    printf("Enter Array Element: ");
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Enter a number to search: ");
    scanf("%d", &findNum);

    for(i=0; i<n; i++){
        if(array[i]==findNum)
            break;
    }
    if(i<n){
        printf("Element found at index: %d",i);
    }
    else{
        printf("Element not found.");
    }
}
