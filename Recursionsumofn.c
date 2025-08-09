#include <stdio.h>
int sum(int n);
int main(){
    printf("sum of n natural numbers is %d",sum(5));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
     
    }
    int suminus1 = sum(n-1);
    int sumn = suminus1 + n;
    return sumn;

}