#include<iostream>
using namespace std;

int main()
{
    system("cls");
    string mantra;
    int i,jmlhvokal;
    char huruf;

    cout<<"Masukkan Mantra: "; getline (cin,mantra);//input mantra

    i=0;
    jmlhvokal=0;
    // Perulangan untuk memeriksa tiap karakter dalam mantra
    while (i < mantra.length()) {
        huruf = mantra[i]; // ambil karakter ke-i
        if (huruf=='a'||huruf=='i'||huruf=='u'||huruf=='e'||huruf=='o'||
            huruf=='A'||huruf=='I'||huruf=='U'||huruf=='E'||huruf=='O') {
            jmlhvokal++;
        }
        i++;
    }

    // Output berdasarkan hasil
    if (jmlhvokal > 0) {
        cout << "Kekuatan mantra: "<< jmlhvokal<<" vokal"<<endl;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal."<<endl;
    }
}
