#include <stdio.h>

int main(){
    int i=0,n=5,factorial=1;
    for(i=1;i<=n;i++){
        factorial *=i;
    }
    printf("factorial is %d is %d\n",n,factorial);
    return 0;
}