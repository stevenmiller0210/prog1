#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        return 1;
    }

    int capacity = 10;
    int size = 0;
    int *numbers = malloc(capacity * sizeof(int));

    int num;
    while (fscanf(file, "%d", &num) == 1) {
        if (size >= capacity) {
            capacity *= 2;
            numbers = realloc(numbers, capacity * sizeof(int));
        }
        numbers[size++] = num;
    }
    fclose(file);

    qsort(numbers, size, sizeof(int), compare);

    for (int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }

    free(numbers);
    return 0;
}