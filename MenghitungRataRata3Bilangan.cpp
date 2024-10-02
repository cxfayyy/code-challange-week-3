#include <iostream>
using namespace std;

int main () {

    int angak1,angka2,angka3; //deklarasi bilangan bulat 
    cout << "Masukan Angka Pertama Bilangan Bulat :"; //proses input 
    cin >> angak1;//input cin ke variabel angka1
    cout << "Masukan Angka Kedua Bilangan Bulat :"; //proses input 
    cin >> angka2;//input cin ke variabel angka2
    cout << "Masukan Angka Ketiga Bilangan Bulat :"; //proses input 
    cin >> angka3;//input cin ke variabel angka3
    
    double hasiljum = angak1 + angka2 + angka3;

    cout << " Hasil Rata-Rata 3 Bilangan Bulat Adalah : " << hasiljum / 3 << endl; // hasil penjumlahan
    


    return 0;
}