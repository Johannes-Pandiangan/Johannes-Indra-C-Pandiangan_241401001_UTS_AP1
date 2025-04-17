#include<iostream>
using namespace std;

int main()
{
    system("cls");
    string nama, nim, status1, status2, status3;
    int ap, pds, so;

    cout<<"Nama mahasiswa: "; getline(cin,nama); //input nama
    cout<<"NIM :"; cin>>nim; //input nim
    cout<<"Nilai Mata Kuliah: "<<endl; //input 3 nilai matkul
    cout<<"  Algoritma dan Pemograman   : ";cin>>ap;
    cout<<"  Probabilitas dan Statistika: ";cin>>pds;
    cout<<"  Sistem Operasi             : ";cin>>so;

    //menentukan status kelulusan
    status1 = (ap >= 60) ? "Lulus" : "Tidak lulus. Silahkan Ulangi di tahun depan!";
    status2 = (pds >= 60) ? "Lulus" : "Tidak lulus. Silahkan Ulangi di tahun depan!";
    status3 = (so >= 60) ? "Lulus" : "Tidak lulus. Silahkan Ulangi di tahun depan!";

    //menampilkan status kelulusan dan nilai rata-rata
    cout<<"\n========== Hasil Penilaian =========="<<endl;
    cout<<"  Algoritma dan Pemograman   : "<<status1<<endl;
    cout<<"  Probabilitas dan Statistika: "<<status2<<endl;
    cout<<"  Sistem Operasi             : "<<status3<<endl;
    cout<<"Nilai Rata-rata semester ini: "<<float(ap+pds+so)/3;//menghitung nilai rata-rata
}