#include <stdio.h>

int main(){
    int i=1,sum=0,n=10;
    do 
    {
        sum +=i;
        printf("the value is %d\n",sum);
        i++;
    }while(i<=n);
    return 0;
}