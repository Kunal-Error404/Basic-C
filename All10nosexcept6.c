#include <stdio.h>
int main(){
    int num;
    for(int i = 1;i<=10;i++){
        if(i == 6){
            continue;//if i had used break it would have terminated for and if both loops
        }
        printf("%d\n",i);
        
    }
    return 0;
}