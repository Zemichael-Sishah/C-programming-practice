#include <stdio.h>

void test(int *x, int i){
    printf("address of x is %p\n", (void*)x);
    *x = i;
}


int main(void){
    int num = 0;
    int num2 = 8;
    printf("address of num is %p\n", (void*)&num);
    test(&num, num2);
    printf("num = %d\n", num);
    return 0;
}