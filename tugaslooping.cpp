#include <iostream>
using namespace std;

int angka;
int pilihan;

void tampilkanMenu() 
{
    cout << "\n===== MENU UTAMA =====" << endl;
    cout << "1. cek bilangan prima" << endl;
    cout << "2. cek bilangan fibonacci" << endl;
    cout << "0. keluar" << endl;
    cout << "pilih menu" << endl;
    cin >> pilihan;
}

void inputAngka()
{
    cout << "masukkan angka yang ingin dicek =";
    cin >> angka;
}

