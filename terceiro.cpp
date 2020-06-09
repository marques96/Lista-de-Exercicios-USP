#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    int n;
    int i = 0;
    int impar = 1;

    cout << "Digite o valor de N: ";
    cin >> n;

    while (i < n)
    {
        cout << impar << endl;
        impar = impar + 2;
        i++;
    }
    
    
    return 0;
}