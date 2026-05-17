#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        fprintf(stderr, "Nem adtál meg egyetlen szót sem!\n");
        return 1;
    }

    size_t min_len = strlen(argv[1]);
    for (int i = 2; i < argc; i++) {
        size_t current_len = strlen(argv[i]);
        if (current_len < min_len) {
            min_len = current_len;
        }
    }

    for (int i = 1; i < argc; i++) {
        if (strlen(argv[i]) == min_len) {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}