#include <iostream>
using namespace std;

int main () {

    int Tahun,Bulan,Hari;

        cout << "Masukan Angka Bilangan Pertama Bulat > 0 :"; //proses input 
        cin >> Tahun;//input cin ke variabel bilangan bulat

        cout << "Masukan Angka Bilangan Kedua Bulat > 0 :"; //proses input 
        cin >> Bulan;//input cin ke variabel bilangan bulat

        cout << "Masukan Angka Bilangan Kedua Bulat > 0 :"; //proses input 
        cin >> Hari;//input cin ke variabel bilangan bulat

    //kondisi
                if (Tahun,Bulan,Hari <= 1)
                {
                    cout << "Tidak Boleh Memasukan Angka Kurang Dari 1 " << endl; /* kondisi */
                    return 1;
                } 

    //proses

    /*
     1 tahun = 365 Hari
     1 Bulan = 30 hari
     */ 

    int hasilTahun = Tahun * 365;
    int hasilBulan = Bulan * 30;

    int allHasil = hasilTahun + hasilBulan + Hari;
    

    //Output hasil

    cout << " Yang anda input adalah : " << Tahun << " Tahun " << Bulan << " Bulan " << Hari << " Hari " << endl; // hasil bagi
    cout << " Total Hari : " << allHasil << endl; // hasil modulus

    return 0;
}