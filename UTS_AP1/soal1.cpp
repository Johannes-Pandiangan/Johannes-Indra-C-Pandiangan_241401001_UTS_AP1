#include<iostream>
using namespace std;

int main()
{   
    system("cls");
    int kode,i;
    cout<<"silahkan masukkan kode berupa bilangan bulat";
    cout<<"\nKode : ";cin>>kode; //input kode

    if (kode > 0 && (kode & (kode - 1)) == 0) {
        cout<<"ya"<<endl;
    } 
    //penjelasan: kode>0 -> memastikan bilangan adalah positif
    //            (kode & kode-1) == 0 -> memeriksa bilangan adalah bilangan 2 pangkat
    //contoh ya: 4 and 4-1                         contoh bukan: 5 and 5-1    
    //           4 and 3  ->1000 = 4                           5 and 4  ->1010 = 6       
    //                      0111 = 3  and                                 1001 = 5   and
    //                      0000 = 0                                      1000 = 4 (maka masuk ke bagian else)
    else {
        cout<<"bukan"<<endl;
    }
}