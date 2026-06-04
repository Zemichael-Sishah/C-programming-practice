#include <stdio.h>

void move(int *p){
    p += 4;
    printf("p is %d\n", *p);
}


int main(void){
    int arr[] = {1,2,3,4,5,6};
    int *x = &arr[0];
    move(x);
    printf("x is %d\n", *x);
    printf("arr at 0 is %d\n", arr[0]);
    return 0;
}