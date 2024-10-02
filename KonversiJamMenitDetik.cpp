#include <iostream>
using namespace std;

int main() {
    int detik, jam, menit, sisaDetik;

    cout << "Masukkan bilangan bulat > 0: ";
    cin >> detik;

    if (detik > 0) {
        jam = detik / 3600;
        menit = (detik % 3600) / 60;
        sisaDetik = detik % 60;

        cout << detik << " detik = " << jam << " jam " << menit << " menit " << sisaDetik << " detik" << endl;
    } else {
        cout << "Input harus lebih besar dari 0." << endl;
    }

    return 0;
}