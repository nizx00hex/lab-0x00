#include<stdio.h>


int main() {
    const int i = 10;
    // i = 10;  // error: assignment of read-only variable ‘i’
    int *ptr = (int *)(&i);  // pointer to i
    printf("([BEFORE CHANGING]*ptr = &i) : %d\n(address of ptr: [%p]),\n  (address of i: [%p])\n", *ptr, ptr, &i);  // 10
    *ptr = 99;  // modifies i through the pointer (undefined behavior in C, but often works in practice)
    // ptr++;
    printf("([AFTER CHANGING]*ptr = &i) : %d\n(address of ptr: [%p]),\n  (address of i: [%p])\n", *ptr, ptr, &i);  // 99

    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;  // points to arr[0]

    printf("(*p): %d\n", *p);      // 10
    printf("(*(p+1)): %d\n", *(p+1));  // 20  — moves 4 bytes forward
    printf("(*(p+2)): %d\n", *(p+2));  // 30  — moves 8 bytes forward

    p++;           // advance pointer by sizeof(int) = 4 bytes
    printf("(*p): %d\n", *p);      // 20

    // Pointer difference
    int *a = &arr[0];
    int *b = &arr[4];
    printf("(address of b: [%p])\n(address of a: [%p])\n(subtracted b - a : [%ld])\n", b, a, b - a);  // 4  (not 16!) -> (arr[0]: 1000 - arr[4]: 1016 = 16 / 4 = 4);
    // difference is in ELEMENTS, not bytes
}
