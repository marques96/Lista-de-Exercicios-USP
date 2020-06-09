#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(int argc, const char **argv)
{
    int numero, expoente, resultado;

    cout << "Entre com um inteiro: " << endl;
    cin >> numero;
    cout << "Entre com o expoente: " << endl;
    cin >> expoente;

    if (expoente > 0)
    {
        resultado = pow(numero, expoente);
    }
    else
    {
        cout << "Entre com um expoente não negativo" << endl;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}