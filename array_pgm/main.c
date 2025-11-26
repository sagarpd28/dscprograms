#include <stdio.h>
#include "array.h"

int main() {

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    readArray(arr, n);
    displayArray(arr, n);

    return 0;
}
