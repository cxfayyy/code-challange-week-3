#include <iostream>
using namespace std;

int main () {

    int bilbulA,bilbulB;
    cout << "Masukan Angka Bilangan Pertama Bulat > 0 :"; //proses input 
    cin >> bilbulA;//input cin ke variabel bilangan bulat
    cout << "Masukan Angka Bilangan Pertama Bulat > 0 :"; //proses input 
    cin >> bilbulB;//input cin ke variabel bilangan bulat

    //kondisi
    if (bilbulA,bilbulB <= 1)
    {
        cout << "Tidak Boleh Memasukan Angka Kurang Dari 1 " << endl; /* kondisi */
        return 1;
    } 

    //proses

    /*
     BilBulA / BilBulB
     Modulus Dari BilbulA / BilBulB
     */ 

    double hasilBagi = bilbulA / bilbulB;
    double hasilModulus = bilbulA % bilbulB;
    

    //Output hasil

    cout << " Hasil Bagi Dari 2 Bilangan Bulat: " << hasilBagi << endl; // hasil bagi
    cout << " Hasil Sisa Bagi Dari 2 Bilangan Bulat: " << hasilModulus << endl; // hasil modulus

    return 0;
}