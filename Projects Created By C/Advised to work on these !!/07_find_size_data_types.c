#include <stdio.h>
int main() {
    int intSize;
    float floatSize;
    char charSize;
    double doubleSize;

    intSize = sizeof(int);
    floatSize = sizeof(float);
    charSize = sizeof(char);
    doubleSize = sizeof(double);

    printf("Size of int: %d bytes\n", intSize);
    printf("Size of float: %d bytes\n", floatSize);
    printf("Size of char: %d byte\n", charSize);
    printf("Size of double: %d bytes\n", doubleSize);

    return 0;
}
/*Size of int: 4 bytes
Size of float: 4 bytes
Size of char: 1 byte
Size of double: 8 bytes
*/