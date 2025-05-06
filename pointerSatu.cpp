#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk Mahasiswa : " << nim << endl;
    }
};

int main ()
{
    mahasiswa mhs {1}; //object mhs
    mhs.showNim(); //Member Access Operator

}