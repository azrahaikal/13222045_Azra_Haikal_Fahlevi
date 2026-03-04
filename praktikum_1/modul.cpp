#include <iostream>
using namespace std;

int main(){
    float sum = 0.0;
    float input;
    bool adaPositif = 0;
    for(int i=0; i<5; i++){
        cout << "Masukkan angka ke-" << i+1 << ": ";
        cin >> input;

        if(input > 0.0){
            cout << "itu angka positif" << endl;
            sum = sum + input;
            adaPositif = 1;
        }
        else if(input == 0.0){
            cout << "itu angka nol" << endl;
        }
        else{
            cout << "itu angka negatif" << endl;
        }
    }

    if(adaPositif){
        cout << "Jumlah angka positif adalah " << sum << endl;
    }
    else{
        cout << "Tidak ada angka positif yang di-input." << endl;
    }

    return 0;
}