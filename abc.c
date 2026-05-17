#include <stdio.h>

void feltolt_abecevel(char tomb[]) {
    
    for (int i = 0; i < 26; i++) {
        tomb[i] = 'a' + i; 
    }
}

int main() {
    char abece[26]; 

    feltolt_abecevel(abece);

    printf("A feltoltott tomb tartalma:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c ", abece[i]);
    }
    printf("\n");

    return 0;
}