
#include <iostream>
int main() {
    try {
        int x = 10;
        int y = 0;
        int z = x / y;
    } catch (std::exception& e) {
        std::cout << "hyhy" << std::endl;
        std::cout << e.what() << std::endl;
    }

    return 0;
} 