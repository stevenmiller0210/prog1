#include <stdio.h>
#include <stdlib.h> 

void convert_to_absolute(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = abs(arr[i]); 
        }
    }
}

int main() {

    int numbers[] = {15, -7, 0, -42, 8, -1};
 
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("A tomb az eljaras elott:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    convert_to_absolute(numbers, size);

    printf("\nA tomb az eljaras utan:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}