#include <stdio.h>
#define SIZE 10


void push(int *top, int *status, int num){
    if(*status != 0){
        *top++;
    }
    (*status)++;
    *top = num;
}

int pop(int *top, int *status){
    int temp = *top;
    *top = 0;
    *top--;
    (*status)--;
    printf("number popped %d\n", temp);
    return temp;

}

int check(int status){
    if(status >= SIZE || status < 0){
        return 1;
    }
    return 0;
}

int main(void){
    int status = 0;
    int arr[SIZE];
    char x = 'c';
    int *up = &arr[0];
    printf("hjfsfvbljhvafjlh  %d\n", arr[8]);
    do{
        printf("choose an operation:\na)pop\nb)push\nc)done\n");
        scanf(" %c", &x);
        if(check(status)){
            break;
        }

        switch(x){
            case 'a':
                if(status != 0){
                    pop(up, &status);
                }
                break;
            case 'b':
                char num;
                printf("number to add");
                scanf("%d", &num);
                push(up, &status, num);
                break;
            default:
                continue;
                
        }

    }while(x != 'c');

    printf("terminated");

    return 0;
}