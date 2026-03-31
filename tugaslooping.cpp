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

bool isFibonacci(int n)
{
    if (n < 0) return false;
    int a = 0;
    int b = 1;
    while (b < n)
    {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return (b == n || n == 0);
}

void tampilkanHasil(bool hasil, string jenis)
{
    if (hasil)
    {
        cout << "hasil: " << angka << " adalah bagian dari " << jenis << "." << endl;
    } else
    {
        cout << "hasil: " << angka << " bukan bagian dari " << jenis << "." << endl;
    }
}

int main()
{
    while (true) 
    {
        tampilkanMenu();

        switch (pilihan)
        {
            case 1:
                inputAngka();
                tampilkanHasil(isPrima(angka), "bilangan prima");
                break;
            case 2:
                inputAngka();
                tampilkanHasil(isFibonacci(angka), "deret fibonacci");
                break;
            case 0:
                cout << "keluar dari program." << endl;
                return 0;
            default:
                cout << "pillihan tidak valid. coba lagi" << endl;
                break;
        }
    }
    return 0;
}