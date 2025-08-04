#include <stdio.h>
int main(){
    int num;
    printf("Enter the number of natural numbers you want to print:");
    scanf("%d",&num);
    int i = 1;//decleration of counter
    while(i<=num){//condition
        printf("%d\n",i);
        i++;//updation
    }
    return 0;
}