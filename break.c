#include <stdio.h>

int main(){
    int n=0;
    do{
        printf("the value is %d\n",n);
        if(n==9){
            break;
        }
        n++;
    }while(n<10);
    return 0;
}