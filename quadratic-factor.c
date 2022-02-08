/***
quadratic-factor.c
find the factored form of standard-form quadratic equations
***/

#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, d;
    
    printf("factored form generator for standard-form quadratics\n");
    printf("enter a, b and c: ");
    scanf("%f%f%f",&a,&b,&c);
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
