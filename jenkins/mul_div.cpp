#include "mul_div.h"

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        return 0.0; // ŠÈˆÕ“I‚Èƒ[ƒœZ‘Îô
    }
    return static_cast<double>(a) / b;
}