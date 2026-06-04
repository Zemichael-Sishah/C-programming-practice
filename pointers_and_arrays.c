#include <stdio.h>
#define SIZE sizeof(arr)/sizeof(arr[0])
void move(int *p){
    int *q = p + 4;
    
    printf("q is %d\n", *q);
}


int main(void){
    int arr[] = {1,2,3,4,5,6};
    /*int *x = &arr[0];
    move(x);
    printf("x is %d\n", *x);
    printf("arr at 0 is %d\n", arr[0]);
    */

    for( int *p = &arr[0]; p < &arr[SIZE - 1]; p++){
        printf("arr at %d is %d\n", p - &arr[0], *p);
    }
    return 0;
}