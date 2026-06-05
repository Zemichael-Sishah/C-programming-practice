#include <stdio.h>
#define SIZE 10


void push(int *top, int *status, int num){
    printf("enter push\n");
    printf("top is %d \n", *top);
    printf("status is %d \n", *status);
    if(*status != 0){
        *top++;
        printf("top is now %d after *top++\n", *top);
    }
    (*status)++;
    printf("status is now %d after (*status)++ \n", *status);
    *top = num;
    printf("clear");
}

int pop(int *top, int *status){
    printf("enter pop\n");
    printf("top is %d \n", *top);
    printf("status is %d \n", *status);
    int temp = *top;
    printf("temp is %d\n", temp);
    *top = 0;
    *top--;
    printf("top is now %d after *top--\n", *top);
    (*status)--;
    printf("status is now %d after (*status)-- \n", *status);
    printf("number popped %d\n", temp);
    return temp;

}

int check(int status){
    printf("status check %d\n", status);
    if(status >= SIZE || status < 0){
        printf("status break\n");
        return 1;
    }
    return 0;
}

int main(void){
    int status = 0;
    int arr[SIZE];
    char x = 'c';
    int *up = &arr[0];
    printf("up is now %d\n", *up);
    do{
        printf("\n\n\nchoose an operation:\na)pop\nb)push\nc)done\n");
        scanf(" %c", &x);
        if(check(status)){
            break;
        }

        switch(x){
            case 'a':
                printf("case a\n");
                if(status != 0){
                    pop(up, &status);
                }
                break;
            case 'b':
                printf("case b");
                char num;
                printf("number to add");
                scanf("%d", &num);
                push(up, &status, num);
                printf("arr on top is %d, status is %d, and up is %d\n", arr[status], status, *up);
                break;
            default:
                continue;
                
        }

    }while(x != 'c');

    printf("terminated");

    return 0;
}