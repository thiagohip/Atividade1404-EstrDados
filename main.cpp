#include <iostream>
#include <numbers.h>

using namespace std;

int main()
{
    srand(time(NULL));
    Numbers n;
    n.fillVetI();
    n.fillVetP();
    cout << "Vetor de números pares:\n";
    n.showVetP();
    cout << "Vetor de números ímpares:\n";
    n.showVetI();
    n.ordem(n.vetI);
    n.ordem(n.vetP);
    cout << "Vetor de números pares ordenados:\n";
    n.showVetP();
    cout << "Vetor de números ímpares ordenados:\n";
    n.showVetI();
    n.fillMat();
    cout << "Matriz:\n";
    n.showMat();
    return 0;
}
