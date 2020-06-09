#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    int n, soma = 0, i = 1;

    cin >> n;

    while (i <= n)
    {
        soma = soma + i;
        i++;
    }

    cout << "Soma dos " << n << " primeiros positivos é: " << soma << endl;

    return 0;
}