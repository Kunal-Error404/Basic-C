#include <stdio.h>
int main() {
    char chr;
    printf("ENTER YOUR ALPHABET:");
    scanf("%c", &chr);
    if (chr>='a' && chr<='z'){
        printf("SMALL");
    }
    else if (chr>='A' && chr<='Z'){
        printf("CAPITAL");
    }
    else {
        printf("NOT A VALID ALPHABET");
    }
return 0;
}