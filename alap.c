#include<stdio.h>
#include<string.h>

void HELP(){
 printf("alap v1.1\n\n");
    printf("Usage: alap <template_id> [options]\n\n");
    printf("Available options:\n");
    printf("-h,         show this help\n");
    printf("-v,         version info\n");
    printf("--stdout,   don't create source file, print result to stdout\n\n");
    printf("Available templates:\n");
    printf("c          -C source code [main.c]\n");
    printf("java       -Java source code [Main.java]\n");
    printf("bash       -Bash source code [main.sh]");

}

int main(int argc, char *argv[]){
    const char version[] = "Current version: 1.0\n";
    char c[] = "#include <stdio.h>\n\nint main(){\n\nprintf(\"Hello world!\");\n\nreturn 0;\n}";
    char java[] = "public class Main {\n    public static void main(String[] args) {\n       System.out.println(\"Hello, World!\");\n    }\n}";
    char sh[] = "#!/bin/bash\n\necho \"Hello World\"";


    if(argc == 1){
        HELP();
    }
    else if(strcmp(argv[1],"-h")==0){
        HELP();
    }
    else if(strcmp(argv[1],"-v")==0){
        printf("%s",version);
    }

    if(argc == 2){
        if(strcmp(argv[1],"c")== 0){
            FILE *fout;
            if((fout = fopen("main.c","r")) != NULL){
                printf("Error: the file main.c is already exists\n");
                fclose(fout);
                return 1;
            }
            else{
                fout = fopen("main.c","w");
                fprintf(fout,"%s\n",c);
                printf("main.c was created\n");
                fclose(fout);
            }
        }
        else if(strcmp(argv[1],"java")==0){
            FILE *fout;
            if((fout = fopen("Main.java","r"))!= NULL){
                printf("Error, the file already exists!\n");
                fclose(fout);
                return 1;
            }
            else{
                fout = fopen("Main.java","w");
                fprintf(fout,"%s\n",java);
                printf("Main.java was created.\n");
                fclose(fout);
            }
        }
        else if(strcmp(argv[1],"sh")==0){
            FILE *fout;
            if((fout = fopen("main.sh","r")) != NULL){
                printf("The file already exists!\n");
                fclose(fout);
                return 1;
            }
            else{
                fout = fopen("main.sh","w");
                fprintf(fout,"%s\n",sh);
                printf("main.sh was created.\n");
                fclose(fout);
            }
        }
    }

    if(argc == 3){
        if(strcmp(argv[1],"c")==0 && (strcmp(argv[2],"--stdout"))==0){
            printf(c);
        }else if((strcmp(argv[1],"java")==0) && (strcmp(argv[2],"--stdout")==0)){
            printf(java);   
        }else if((strcmp(argv[1],"sh")==0) && (strcmp(argv[2],"--stdout")==0)){
            printf(sh);       
        }
    }


    return 0;
}