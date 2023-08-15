#include <stdio.h>

int main ()
{
    char op;
    double a, b;
    scanf("%lf %c %lf", &a,&op, &b);

    if (op == '+') {
        printf("%lf", a + b);
    }
    else if (op == '-') {
        printf("%lf", a - b);
    }
    else if (op == '*') {
        printf("%lf", a * b);
    }
    else if (op == '/') {
        if (b != 0) {
            printf("%lf", a / b);
        }
    }
    return 0;
}
