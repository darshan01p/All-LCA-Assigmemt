#include <stdio.h>

int main() {
    int a = 25;
    unsigned int b = 300;
    char c = 'Z';
    float f = 5.75f;
    double d = 123.456789;
    long int li = 123456789L;
    char str[] = "Hello C";

    printf("Integer: %d\n", a);
    printf("Unsigned: %u\n", b);
    printf("Character: %c\n", c);
    printf("Float: %f\n", f);
    printf("Double: %lf\n", d);
    printf("Long int: %ld\n", li);
    printf("String: %s\n", str);

    printf("Hex: %x\n", a);
    printf("Octal: %o\n", a);
    printf("Address: %p\n", (void *)&a);
    printf("Percent: %%\n");

    return 0;
}