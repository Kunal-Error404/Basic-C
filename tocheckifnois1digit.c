#include <stdio.h>
int main(){
    int n1;
    printf("Enter the number:");
    scanf("%d",&n1);
    // printf("%d",0<=n1 && n1<10); WHY ERROR !!!!!!!!!!!!
    printf("%d",0 <= n1 < 10);
/*
=> 0 MEANS ITS NOT ONE DIGIT
=> 1 MEANS ITS ONE DIGIT
*/
}