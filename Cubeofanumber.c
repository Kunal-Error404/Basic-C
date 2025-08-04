#include <stdio.h>
int main(){
    float a; // defining variable
    printf("Enter the side of the cube:/n");
    scanf("%f",&a);//taking input
    float cube = a*a*a;// storing function in a variable
    printf("Cube of the number is: %f",cube);
    return 0;
    
}