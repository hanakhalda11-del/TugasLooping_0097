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

bool isPrima(int n)
{
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

