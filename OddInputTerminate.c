#include <stdio.h>
int main(){
    int num;
    do{
        printf("Enter your number:\n");
        scanf("%d",&num);
        if(num%2 != 0){
            break;
        }
    
    }while(1);
    return 0;
}