#include <stdio.h>
#include <math.h>
float circ(float radii);
float sq (float side);
float rect(float a, float b);
int main(){
    printf("circle:%f",circ(2));
    printf("square:%f",sq(16));
    printf("rectangle:%f",rect(4,2));
    return 0;

}

float circ(float radii){
    return 3.14*radii*radii;
}
float sq(float side){
    return side*side;
}
float rect(float a, float b){
    return a*b;
}