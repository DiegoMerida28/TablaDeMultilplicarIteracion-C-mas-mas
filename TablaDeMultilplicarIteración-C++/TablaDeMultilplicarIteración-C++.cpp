#include <iostream>

int main() {
    int numero;

    std::cout << "Ingresa un número para generar la tabla de multiplicar: ";
    std::cin >> numero;

    std::cout << "Tabla de multiplicar del " << numero << ":\n";

    for (int i = 1; i <= 10; i++) {
        int resultado = numero * i;
        std::cout << numero << " x " << i << " = " << resultado << std::endl;
    }

    return 0;
}