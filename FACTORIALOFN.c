#include <stdio.h>
int main(){
    int num;
    int prod = 1;
    printf("ENTER THE NO. WHOSE FACTORIAL YOU WANT DISPLAYED:\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        prod=prod*i;

    }
    printf("factorial of given number is %d",prod);
    return 0;
}