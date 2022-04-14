#include <iostream>

int main() {
    float arr[15];
    for (int i = 0; i < 15; i++) {
        std::cin >> arr[i];
    }

    std::cout << "До сортировки: ";
    for (int i = 0; i < 15; i++) {
        std::cout << arr[i] << "  ";
    }

    float temp;
    for (int i = 0; i < 15; i++) {
        for (int j = 14; j >= i + 1; j--) {
            if (arr[j] < arr[j-1]) {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    std::cout << "\nПосле сортировки: ";
    for (int i = 0; i < 15; i++) {
        std::cout << arr[i] << "  ";
    }

}
