#include <stdio.h>

void calculate(int *x, int *y, int *sum) {
    *sum = *x + *y;
}

int main() {

    int a, b, result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    calculate(&a, &b, &result);

    printf("The sum of %d and %d is: %d\n", a, b, result);

    return 0;
}

void calculate(int *x, int *y, int *sum){
    *sum = *x + *y;
}

int main(){
    int a, b, result;

    printf("Enter two number\n");
    scanf("%d %d", &a, &b);

    calculate(&a, &b, &result);

    printf("Sum of %d and %d is : %d\n", a,b, result);
    return 0;
}
