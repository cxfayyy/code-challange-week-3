#include <iostream>
using namespace std;

int main () {

    int bilbul;
    cout << "Masukan Angka Bilangan Bulat > 0 :"; //proses input 
    cin >> bilbul;//input cin ke variabel celcius

    //kondisi
    if (bilbul <= 1)
    {
        cout << "Tidak Boleh Memasukan Angka Kurang Dari 1 " << endl; /* code */
        return 1;
    }
    
    //proses
    // diketahui rumus luas lingkaran
    // luas = phi x r2
    // keliling = 2 x phi x r
    // phi = 3,14

    const double phi = 3.14;
    //Luas
    double luas = phi * bilbul * bilbul;
    //Keliling
    double keliling = 2 * phi * bilbul;

    //Output hasil

    cout << " Hasil Luas Lingkaran  : " << luas <<  endl; // hasil Celcius
    cout << " Hasil Keliling Lingkaran  : " << keliling << endl; // hasil Farenheit
    


    return 0;
}