#include <stdio.h>
#define PROGEXECNAME "./c-alculator"
#define VER "0.0.1"
#define NAME "c-alculator"

void help() {
	printf("\e[1m%s version %s built on %s.\e[0m\n", NAME, VER, __TIMESTAMP__);
	printf("\e[Usage:\e[0m %s [num1] [operation] [num2]\n", PROGEXECNAME);
	printf("\e[Operations:\e[0m +, -, x, /.  x=*\n");
}

//using argv[2][0] or *argv[2] is the same
int main (int argc, char **argv)
{
    if(argc>1) {
		if(!strcasecmp(argv[1], "--help")||!strcasecmp(argv[1], "-h")) {
			help();
			return 0;
		}
	}
    int arg1, arg2;
    if (argc == 4)
    {
        sscanf (argv[1], "%d", &arg1);
        sscanf (argv[3], "%d", &arg2);
        if (argv[2] == '+') printf ("%d\n", arg1 + arg2);
        if (argv[2] == '-') printf ("%d\n", arg1 - arg2);
        if (argv[2] == 'x') printf ("%d\n", arg1 * arg2);
        if (*argv[2] == '/') printf ("%d\n", arg1 / arg2);
    }
    return 0;
}