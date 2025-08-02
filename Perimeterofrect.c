#include <stdio.h>
/*a = length
b= breadth
p=perimeter
*/
int main() {
    float a,b;
printf("Enter Lenght of Rectangle:/n");
scanf("%f",&a);
printf("Enter breadth of Rectangle:/n");
scanf("%f",&b);
float p = 2*(a+b);
printf("Perimeter of rectangle is:%f",p);
return 0;
}