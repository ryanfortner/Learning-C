/***
quadratic-solver.c
simple quadratic equation solver
in the form of ax^2+bx+c
***/

#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, d;
    
    printf("standard-form quadratic solver\n");
    printf("enter a, b and c: ");
    scanf("%f%f%f",&a,&b,&c);
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