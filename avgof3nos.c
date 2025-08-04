#include <stdio.h>
int main(){
    float n1,n2,n3;
    printf("Enter the three numbers:/n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    float avg = (n1+n2+n3)/3;
    printf("The average of three numbers is:%f",avg);
    return 0;
}
