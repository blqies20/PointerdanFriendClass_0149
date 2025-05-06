#include <iostream>
using namespace std;

class PersegiPanjang
{
public: //akses modifier
    int panjang, lebar;

public:
    void input()
    {
        cout << "Masukkan Panjang : ";
        cin >> panjang;
        cout << "Masukkan Lebar : ";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }

    Lingkaran ol;
};

class Lingkaran
{
public:
    int jarijari;

    void input()
    {
        cout << "Masukkan Jari-Jari : ";
        cin >> jarijari;
    }

    int luasLingkaran(int r)
    {
        return 3.14 * r *r;
    }

};

int main ()
{
    PersegiPanjang objekPp; //membuat object
    Lingkaran ol;

    cout << "Masukkan Panjang : ";
    cin >> objekPp.panjang;

    cout << "Masukkan Lebar : ";
    cin >> objekPp.lebar;

    cout << "Luas Persegi Panjang : " << objekPp.luasPp(objekPp.panjang, objekPp.lebar) << endl;
}