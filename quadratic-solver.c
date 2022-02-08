/***
quadratic-utils.c
program for getting different quadratic & quadratic solution forms
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define VER "0.1"

// function prototypes
float getFactoredForm(char **argv);
float getRoots(char **argv);
void printHelpDialog(char *argv0);

int main(int argc, char **argv) {
    if(argc == 1) {
        printHelpDialog(argv[0]);
    }
    while(argc > 1) {
        if((!strcmp(argv[1],"--help"))||(!strcmp(argv[1],"-h"))) {
            printHelpDialog(argv[1]);
            break;
        } else if (!strcmp(argv[1],"roots")) {
            getRoots(**argv);
            break;
        } else if (!strcmp(argv[1], "factoredform")) {
            getFactoredForm(**argv);
            break;
        } else {
            printf("Error: operation not supported.\n");
        }
    }
    // break brings us back to here
    return 0;
}

void printHelpDialog(char *argv0) {
        printf("--------------------------------------\n");
        printf("-------- quadratic-utils----v%s------\n", VER);
        printf("--------------------------------------\n");
        printf("OPTIONS:\n");
        printf("%s [operation] [a] [b] [c]\n", argv0);
        printf("--------------------------------------\n");
        printf("OPERATIONS:\n");
        printf("roots - get the roots of a quadratic\n");
        printf("factoredform - get the factored form of a quadratic\n");
        printf("--------------------------------------\n");
        return;
}

float getFactoredForm(char **argv) {
    float a=atof(argv[2]);
    float b=atof(argv[3]);
    float c=atof(argv[4]);
    float d;

    printf("ok, I got 'a = %f', 'b = %f', 'c = %f'. continuing.\n", a, b, c);

    // complete the b^2-4ac of the quadratic formula first
    d = b * b - 4 * a * c;

    if (a == 1) {
        if (d < 0) {
            printf("two complex roots found.\n");
            printf("factored form: y = (x + %.3f%+.3fi)(x + %.3f%+.3fi)\n", -(-b/(2*a),sqrt(-d)/(2*a)), -(-b/(2*a),-sqrt(-d)/(2*a)));
            return 0;
        } else if (d == 0) {
            printf("one repeated root found.\n");
            printf("factored form: y = (x + %.3f)(x + %.3f)\n", -(-b / (2 * a)), -(-b / (2 * a)));
            return 0;
        } else {
            printf("two real roots found\n");
            printf("factored form: y = (x + %.3f)(x + %.3f)\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (d * a));
        }
    } else {
        printf("operation not supported yet\n");
    }
    return 0;
}

float getRoots(char **argv) {        
    float a=atof(argv[2]);
    float b=atof(argv[3]);
    float c=atof(argv[4]);
    float d;

    printf("ok, I got 'a = %f', 'b = %f', 'c = %f'. continuing.\n", a, b, c);

    // complete the b^2-4ac of the quadratic formula first
    d = b * b - 4 * a * c;

    if (d < 0) {
        printf("two complex roots found.\n");
        printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
        printf(", %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));
        return 0;
    } else if (d == 0) {
        printf("one repeated root found.\n");
        printf("root: %.3f\n", -b / (2 * a));
        return 0;
    } else {
        printf("two real roots found\n");
        printf("roots: %.3f , %.3f\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (d * a));
    }
    return 0;
}
