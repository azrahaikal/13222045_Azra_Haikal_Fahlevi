#include <iostream>
using namespace std;

void kuadratkan(int* angka){
    (*angka) = (*angka)*(*angka);
}

int main(){
    int angka = 5;
    cout << "Nilai awal angka adalah " << angka << endl;

    kuadratkan(&angka);
    cout << "Nilai angka setelah di-kuadrat-kan adalah " << angka << endl;

    return 0;
}