#include "iostream"
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();

    int numeroentero = 15;
    float flotante = 10.23;
    double decimal = 5.23425;
    char letra = 'j';

    cout << numeroentero << endl;
    cout << flotante << endl;
    cout << decimal << endl;
    cout << letra << endl;

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Tiempo de ejecución: " << duration.count() << " microsegundos" << endl;

    return 0;
}
