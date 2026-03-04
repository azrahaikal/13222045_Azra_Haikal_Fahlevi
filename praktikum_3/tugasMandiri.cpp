#include <iostream>
#include <iomanip>

class RekeningBank{
    private:
    double saldo;

    public:
    RekeningBank(double firstSaldo){
        saldo = firstSaldo;
    }

    void setor(double setoran){
        saldo = saldo+setoran;
        std::cout<< "saldo Anda sekarang adalah " << saldo << std::endl;
    }

    void tarik(double narik){
        if(saldo-narik < 0){
            std::cout<<"penarikan gagal!" << std::endl;
        }
        else{
            saldo = saldo - narik;
            std::cout<<"Sisa saldo Anda adalah " << saldo << std::endl;
        }
    }
};

int main(){
    RekeningBank myRekening(2710.0);
    myRekening.setor(0.0);
    myRekening.setor(6);
    myRekening.setor(0.05);
    myRekening.tarik(2710.0);
    myRekening.tarik(1.0);
    myRekening.tarik(4545);

    return 0;
}