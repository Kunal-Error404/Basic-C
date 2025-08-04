#include <stdio.h>
int main(){
    int sum = 0;
    int num;
    printf("SUM OF HOW MANY NATURAL NUMBERS DO YOU WANT?");
    scanf("%d", &num);
    for(int i = 1;i<=num;i++){
        sum=sum + i;
    }
    printf("The sum of the first input natural numbers is: %d",sum);
    return 0;

    

}