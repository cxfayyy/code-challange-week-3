#include <iostream>
using namespace std;

int main () {

    int celcius;
    cout << "Masukan Angka Bilangan Bulat Untuk Konversi C -> F :"; //proses input 
    cin >> celcius;//input cin ke variabel celcius
    
    //proses
    // diketahui ( °C × 9/5) + 32 = °F
    double hasil1 = celcius * 1.8 + 32;

    cout << " Suhu Celcius  : " << celcius <<" °C "<< endl; // hasil Celcius
    cout << " Suhu Farenheit  : " << hasil1 << " °F "<< endl; // hasil Farenheit
    


    return 0;
}