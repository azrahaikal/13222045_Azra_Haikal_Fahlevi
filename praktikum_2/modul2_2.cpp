#include <iostream>
using namespace std;

double rataRata(double* array1D, int ukuranArray){
    double sum = 0.0;
    for(int i=0; i<ukuranArray;i++){
        sum = sum+(*array1D);
        (array1D)++;
    }
    cout << "sum = " << sum << endl;
    double n = ukuranArray;
    double mean = sum/n; 
    return mean;
}

int main(){
    double myArray[5] = {5.1, 5.0, 5.0, 5.0, 5.0};
    double* myPointer = myArray;

    double mean = rataRata(myArray, 5);

    cout << "Rata-rata adalah " << mean << endl;

    return 0;
}