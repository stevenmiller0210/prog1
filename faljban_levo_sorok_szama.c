#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Hiba! Adja meg egy szöveges állomány nevét!\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        fprintf(stderr, "Hiba! A %s nevű file-t nem sikerült megnyitni!\n", argv[1]);
        return 1;
    }

    int lines = 0;
    int ch;
    
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }

    fclose(file);
    
    printf("%d\n", lines);

    return 0;
}