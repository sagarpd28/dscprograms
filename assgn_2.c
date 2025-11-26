#include <stdio.h>

int main() {

    int a;
    int b;

    printf("Enter a first number :");
    scanf("%d", &a);

    printf("Enter a second number:");
    scanf("%d", &b);
    
    int result;

    // Arithmatic operators
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    // Relational operators
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n\n", a != b);

    //logical operators
    printf("(a > b) && (b > 0) = %d\n", (a > b) && (b > 0));
    printf("(a < b) || (b > 0) = %d\n", (a < b) || (b > 0));
    printf("!(a == b)          = %d\n\n", !(a == b));

    //Assignment operators
    result = a;
    printf("result += b  = %d\n", result += b);
    result = a;
    printf("result -= b  = %d\n", result -= b);
    result = a;
    printf("result *= b  = %d\n", result *= b);
    result = a;
    printf("result /= b  = %d\n", result /= b);
    result = a;
    printf("result %%= b = %d\n\n", result %= b);

   //Increment or decrement operators
    int x = 10;
    printf("x = %d\n", x);
    printf("++x = %d\n", ++x); // pre-increment
    printf("x++ = %d\n", x++); // post-increment
    printf("x = %d\n\n", x);

    //Bitwise operators
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a    = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);

    //conditional operators
    result = (a > b) ? a : b;
    printf("Greater value = %d\n", result);

    return 0;
}
