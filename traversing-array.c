// Traversing array (Data Structure)

#include <stdio.h>
int main(){
    int Array[]={2,3,4,5,6,7};
    //int len = sizeof(Array)/sizeof(Array[0]);
    for(int i=0; i<sizeof(Array)/sizeof(Array[0]); i++){
        printf("%d\n",Array[i]);
    }
    return 0;
}
