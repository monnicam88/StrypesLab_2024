#include <iostream>

int main() {
    const double EXCHANGE_RATE_LEVA_TO_EURO = 1.95583;
    double leva = 0.0, euro = 0.0;

    std::cout << "Input monetary amount in leva: ";
    std::cin >> leva;
    std::cout << "The monetary amount exchanged in euro is: " << (leva / EXCHANGE_RATE_LEVA_TO_EURO) << std::endl;

    return 0;
}