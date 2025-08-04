#include <stdio.h>
int main(){
    int num;
    do{
        printf("ENTER YOUR NUMBER:\n");
        scanf("%d",&num);
        if(num%7 == 0){
            break;
        }
    }while(1);
    printf("THANK YOU");
    
}