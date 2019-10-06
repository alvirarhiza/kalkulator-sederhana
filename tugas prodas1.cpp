#include <iostream>
#include <cmath>
using namespace std;
void petunjuk();
main ()
{
petunjuk(); //tampilkan petunjuk
double Hasil;
double x;
double y;
char op;
char jwb;
cout << "Masukan x = ";
cin >> x;

do
{
//jika angka yang mau di hitung masih nol
if (x == 0) {
cout << "Masukan x = ";
cin >> x;
}
cout << "Operasi : ";
cin >> op;
switch(op)
{
case 'c' : x = 0;
break;
case '+' : cout << "Masukan y : ";
cin >> y;
Hasil = x + y;
cout << "Jumlahnya adalah :" << Hasil << endl;
x = Hasil;

break;
case '-' : cout << "Masukan y : ";
cin >> y;
Hasil = x - y;
cout << "Hasilnya adalah : " << Hasil << endl;
x = Hasil;

break;
case '*' : cout << "Masukan y : ";
cin >> y;
Hasil = x * y;
cout << "Hasilnya adalah : " << Hasil << endl;
x = Hasil;

break;
case '/' : cout << "Masukan y : ";
cin >> y;
Hasil = x / y;
cout << "Hasilnya adalah : " << Hasil << endl;
x = Hasil;

break;
}
cout << "Apakah penghitungan mau dilanjutkan(Y/T) \n";
cin >> jwb;
}
while (jwb == 'Y' || jwb == 'y');
return 0;
}
void petunjuk()
{
cout << "Nama	: Alvira Rhiza Ridwani\n";
cout << "Nim	: 19051397007\n";
cout << "Prodi	: D4 Manajemen Informatika\n";
cout << "-------|Universitas Negeri Surabaya|-------\n";
cout << "==================================================\n";
cout << "\t\tPROGRAM KALKULATOR SEDERHANA\t\t\n";
cout << "'+'= Penjumlahan \n";
cout << "'-'= Pengurangan \n";
cout << "'*'= Perkalian \n";
cout << "'/'= Pembagian \n";
cout << "==================================================\n";
}
