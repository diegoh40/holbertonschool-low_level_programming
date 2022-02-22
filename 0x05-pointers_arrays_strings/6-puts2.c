#include <stdio.h>
#include "main.h"


/**
 * puts - function that prints every other character of a string
 * @s - string
 * @i - count 
 * Retur: 0
 */
int main(void) {
    char* str = "0123456789";
    char s[40] = "";

    for(int i = 0; i < strlen(str); i+=2){
        putchar(str[i]);
        s[i/2]=str[i];
    }
    return 0;
}
