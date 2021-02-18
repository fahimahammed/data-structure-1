//Binary search
#include<stdio.h>
int main()
{
   int n, middle, first, last, search, array[100];
   printf("Enter array size: ");
   scanf("%d",&n);
   printf("Enter array elements: ");
   for(int i=0; i<n; i++){
    scanf("%d",&array[i]);
   }
   printf("Enter a number to search: ");
   scanf("%d",&search);
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   while(first<=last){
    if(array[middle] < search){
        first = middle + 1;
    }
    else if(array[middle] == search){
        printf("%d is found at index: %d",search, middle+1);
        break;
    }
    else if(array[last]==search){
        printf("%d is found at index: %d",search, middle+1);
        break;
    }
    else{
        last = middle - 1;
    }
    middle = (first+last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
   return 0;
}
