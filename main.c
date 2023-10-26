#include <stdio.h>

int main() {
    int i, j;
    char str[] = "hello";
    int length = 0;
    
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c", str[i]);
        }
        printf("\n");
    }
    
    return 0;
}