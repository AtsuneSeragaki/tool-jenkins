#include <iostream>
#include "plu_min.h"
#include "mul_div.h"

int main() {
    int a = 10;
    int b = 5;

    // a ‚Æ b ‚Ì’l‚ð•\Ž¦
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    // Žl‘¥‰‰ŽZŒ‹‰Ê
    std::cout << "‰ÁŽZ: " << add(a, b) << std::endl;
    std::cout << "Œ¸ŽZ: " << subtract(a, b) << std::endl;
    std::cout << "æŽZ: " << multiply(a, b) << std::endl;
    std::cout << "œŽZ: " << divide(a, b) << std::endl;

    return 0;
}