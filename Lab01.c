#include <stdio.h>

int digi(int a, int b){
    int r = 1, p = b;
    while (a >= p) {
        r = r + 1;
        p = p * b;
    }
    return r;
}

int main(void)
{
    // Zadanie 1
    // printf("Patryk Mendelewski\nIndeks: 167653\n");
    // Zadanie 2
    // printf("%s\n", "Expected output: 50.000000 (double)");
    // printf("%f\n", (double)(50/13*13 + 50%13));
    // printf("%s\n", "Expected output: 62 (unsigned octal)");
    // printf("%o\n", (unsigned)(50/13*13 + 50%13));
    // printf("%s\n", "Expected output: 32 (unsigned hexadecimal)");
    // printf("%x\n", (unsigned)(50/13*13 + 50%13));
    // Zadanie 3
    // int x, y;
    // printf("%s\n", "Enter two integers:");
    // scanf("%d %d", &x, &y);
    // printf("%d\n", x/y*y + x%y);
    // Zadanie 4
    // int x;
    // scanf("%d", &x);
    // if( x < 0 ) {
    //    x = -x;
    // }
    // printf("%d\n", x);
    // Zadanie 5
    // float a, b, c;
    // printf("%s\n", "Enter three integers:");
    // scanf("%f%f%f", &a, &b, &c);
    // if (a > b + c || b > a + c || c > a + b) {
    //     printf("%s\n", "Cannot form a triangle");
    // } else {
    //     printf("%s\n", "Can form a triangle");
    // }
    // Zadanie 6
    // int x, y;
    // printf("Enter a number and a base of numeric system:\n");
    // scanf("%d%d", &x, &y);
    // printf("%d\n", digi(x, y));
    // Zadanie 7
    int n, i = 0, sum = 0, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9;
    scanf("%d", &n);
    while (i < n && i < 10) {
        int v;
        scanf("%d", &v);
        switch (i) {
            case 0: x0 = v; break;
            case 1: x1 = v; break;
            case 2: x2 = v; break;
            case 3: x3 = v; break;
            case 4: x4 = v; break;
            case 5: x5 = v; break;
            case 6: x6 = v; break;
            case 7: x7 = v; break;
            case 8: x8 = v; break;
            case 9: x9 = v; break;
        }
        sum += v;
        i = i + 1;
    }
    printf("%d\n", sum);
    i = i - 1;
    while (i >= 0) {
        switch (i) {
            case 9: printf("%d ", x9); break;
            case 8: printf("%d ", x8); break;
            case 7: printf("%d ", x7); break;
            case 6: printf("%d ", x6); break;
            case 5: printf("%d ", x5); break;
            case 4: printf("%d ", x4); break;
            case 3: printf("%d ", x3); break;
            case 2: printf("%d ", x2); break;
            case 1: printf("%d ", x1); break;
            case 0: printf("%d ", x0); break;
        }
        i = i - 1;
    }
    return 0;
}

