#include <iostream>
using namespace std;
/* Tugas ke 2 pemrograman lanjut, dikerjakan oleh
Mohammad Arbi Yoganata/21104410073/Teknik Informatika B/Pemrograman Lanjut
Menentukan Luas lingakaran yang diarsir*/

int main(){
	
	//variabel
	float la, lb,lc ,r;
	const float phi=3.14;
	
	//penghitungan Luas Lingkaran
	cout<<"Tentukan luas bidang yang diarsir\n";
	cout<<"==================================\n";
	cout<<"Hitung Luas Lingkaran A\nMasukan jari jari : ";cin>>r;
	la = phi*r*r;
	cout<<"Luas lingkaran A => "<<la<<endl;
	cout<<"Hitung Luas Lingkaran B\nMasukan jari jari : ";cin>>r;
	lb = phi*r*r;
	cout<<"Luas lingkaran B => "<<lb<<endl;
	cout<<"Hitung Luas Lingkaran C\nMasukan jari jari : ";cin>>r;
	lc = 22*r*r/7;
	cout<<"Luas lingkaran C => "<<lc<<endl;	
	cout<<"==================================\n\n";
	//penghitungan Luas Lingkaran yang diarsir
	cout<<"==================================\n";
	cout<<"Luas yang diarsir\n";
	cout<<"Luas Yang diarsir bidang A  adalah "<<la<<endl;
	cout<<"Luas Yang diarsir bidang C-B adalah "<<lc-lb<<endl;
	cout<<"=================================="<<endl;	
}