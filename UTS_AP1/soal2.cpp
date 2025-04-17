#include <iostream>
using namespace std;

int main() 
{
    system("cls");
    string biner;
    int desimal,pangkat;
    cout<<"Input kode biner: ";cin>>biner; //input biner

    // cek input biner agar hanya 1 dan 0
    for (char digit : biner) {
        if (digit != '0' && digit != '1') {
            cout<<"pesan rusak!"<<endl;
            return 0;
        }
    }

    // Konversi manual biner ke desimal
    desimal = 0;
    pangkat = 1; // 2^0

    for (int i = biner.length()-1; i >= 0; --i) {
        if (biner[i] == '1') {
            desimal+=pangkat;
        }
        pangkat*=2;
    }

    cout << "Angka desimal dari biner " << biner << " adalah = " << desimal << endl;
    return 0;
}