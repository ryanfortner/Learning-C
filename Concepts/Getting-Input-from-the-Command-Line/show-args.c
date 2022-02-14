#include <stdio.h>

int main(int argc, char **argv) {
    if(argc == 1) {
        printf("no arguments given on the command-line.\n");
        printf("usage: %s <argument1> <argument2> ... <argumentN>\n", argv[0]);
        return 0;
    }
    printf("argument count: [%d]\n", argc);

    for(int i = 0; i < argc; i++) {
        if(i == 0) {
            printf("executable = [%s]\n", argv[i]);
        } else {
            printf("argument %d = [%s]\n", i, argv[i]);
        }
    }
}