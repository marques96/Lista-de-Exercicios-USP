#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    int numero, quadrado;

    cin >> numero;

    while (numero != 0)
    {
        quadrado = numero * numero;
        
        cout << "Quadrado de "<< numero << " é " << quadrado << endl;
        
        cin >> numero;
    }

    return 0;
}