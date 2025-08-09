#include <stdio.h>
void indi();
void fren();

int main(){
    char chr;
    printf("Enter your nationality indian(i) or french(f):\n");
    scanf("%c",&chr);
    if (chr == 'i'){
        indi();
    }
    else if(chr =='f'){
        fren();
    }
    else{
        printf("INVALID NATIONALITY");
    }
   
    return 0;
}


void indi(){
        printf("Namaste\n");
    }
    
    

void fren(){
        printf("Bonjour\n");
    }
    



