#include <stdio.h>
int main(){
    int num;
    do{
        printf("ENTER YOUR NUMBER:\n");
        scanf("%d",&num);
        if(num%7 == 0){//if multiple of 7 break as modular thing means remainder
            break;
        }
     }while(1);//infinte loop
    printf("THANK YOU");
    
}