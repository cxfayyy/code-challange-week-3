#include <iostream>
using namespace std;

int main () {

    int bilbulA; //deklarasi bilangan bulat A dengan type data Intiger
    int bilbulB; //deklarasi bilangan bulat B dengan type data Intiger
    cout << "Masukan Angka Pertama Bilangan Bulat :"; //proses input 
    cin >> bilbulA;//input cin ke variabel bilbulA
    
    cout << "Masukan Angka Kedua Bilangan Bulat :"; //proses input 
    cin >> bilbulB;//input cin ke variabel bilbulA


    cout << " Hasil Penjumlahan 2 Bilangan Bulat Adalah : " << bilbulA + bilbulB << endl; // hasil penjumlahan
    cout << " Hasil Pengurangan 2 Bilangan Bulat Adalah : " << bilbulA - bilbulB << endl; // hasil pengurangan
    cout << " Hasil Perkalian 2 Bilangan Bulat Adalah : " << bilbulA * bilbulB << endl; // hasil perkalian
    cout << " Hasil Pembagian 2 Bilangan Bulat Adalah : " << bilbulA / bilbulB << endl; // hasil pembagian
    


    return 0;
}