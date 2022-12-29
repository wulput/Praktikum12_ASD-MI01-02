#include <iostream>
#include <conio.h>

using namespace std;

int harga_rumah, luas_rumah, diskon, total_bayar, jenis, harga=3000000;

void hitung()
{
	harga_rumah = harga*luas_rumah;
	total_bayar = harga_rumah-diskon;
}

int main()
{
	
	cout<< "\n \t\t\t\t\t PROGRAM MENGHITUNG HARGA RUMAH ";
	cout<< "\n _____________________________________________________________________________________________________________________";
	cout<< endl;
	
	
	cout<< "\n Harga / meter  : " << harga;
	cout<< "\n Luas Rumah \t: "; cin>> luas_rumah;
	
	cout<< "\n Jenis Pembayaran Yang Kami Tawarkan : ";
	cout<< "\n 1. Cash ";
	cout<< "\n 2. Cicilan 6X " << endl;
	cout<< "\n Masukkan Jenis Pembayaran Yang Anda Pilih : "; cin>> jenis;
	
	if (jenis == 1 )
	{
		diskon=(luas_rumah*harga)*0.1;
		//cout<< "\n Diskon yang Anda peroleh :"; cin>> diskon;
	}
	else (jenis == 2 );
	{
		diskon=(luas_rumah*harga)*0.05;
		//cout<< "\n Diskon yang Anda Peroleh : "; cin>> diskon;
	}
	
	hitung();
	
	cout<< "\n";
	cout<< "\n Rincian Perhitungannya Bisa Anda Lihat Di Bawah Ini : " << endl;
	
	cout<< "\n Harga Rumah \t\t  : " << harga << " * " << luas_rumah << " = " << harga_rumah;
	cout<< "\n Diskon Yang Anda Peroleh : " << diskon;
	cout<< "\n Total Yang Harus Dibayar : " << harga_rumah << " - " << diskon << " = " << total_bayar;
	
	cout<< endl;
	cout<< "\n\n\n \t\t\t\t\t\t TERIMAKASIH ";
	
	getch();
}
