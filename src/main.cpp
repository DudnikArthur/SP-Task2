#include <cstdio>
#include "calculator.h"

int main() {
    constexpr int a = 20;
    constexpr int b = 16;
    printf("Add: %d + %d = %d\n", a, b, Add(a, b));
    printf("Sub: %d - %d = %d\n", a, b, Sub(a, b));
    return 0;
}