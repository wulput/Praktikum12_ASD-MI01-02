#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int luas_tanah, luas_bangunan, kelebihan_tanah, harga_kelebihan, harga_jual, diskon, harga_bayar;
	bool tipe_rumah;
	
	cout<< "\n \t\t\t\t PROGRAM MENGHITUNG HARGA RUMAH DENGAN 2 TIPE RUMAH ";
	cout<< "\n ______________________________________________________________________________________________________________________ ";
	cout<< endl << endl;
	
	cout<< "\n TIpe Rumah Yang Kami Sediakan Yaitu : ";
	cout<< "\n 1. Tipe Camelia ";
	cout<< "\n 2. Tipe Melati " << endl;
	cout<< "\n Masukkan Tipe Rumah : "; cin>> tipe_rumah;
	cout<< endl;

	cout<< "\n Masukkan Luas Tanah Yang Anda Inginkan : "; cin >> luas_tanah;
	
	cout<< "\n Pilihan Luas Bangunan Untuk Tipe Camelia : ";
	cout<< "\n 1. Dengan Luas Bangunan 36 m2 ";
	cout<< "\n 2. Dengan Luas Bangunan 45 m2 ";
	cout<< "\n 3. Dengan Luas Bangunan 60 m2 ";
	cout<< endl;
	
	cout<< "\n Pilihan Luas Bangunan Untuk Tipe Melati : ";
	cout<< "\n 1. Dengan Luas Bangunan 60 m2 ";
	cout<< "\n 2. Dengan Luas Bangunan 80 m2 ";
	cout<< "\n 3. Dengan Luas Bangunan 100 m2 ";
	cout<< endl;
	
	cout<< "\n Masukkan Luas Bangunan Yang Anda Pilih : "; cin>>luas_bangunan; 
	
	if (tipe_rumah == 1) 
	{
		kelebihan_tanah = luas_tanah-90;
		harga_kelebihan = kelebihan_tanah*1000000;
		harga_jual = 500000000+harga_kelebihan;
		
		if (luas_bangunan == 36)
		{
			diskon = harga_jual*0.02;
		}
		else if (luas_bangunan == 45)
		{
			diskon = harga_jual*0.05;
		}
		else if (luas_bangunan == 60)
		{
			diskon = harga_jual*0.07;
		}
		
	}
	else if (tipe_rumah == 2)
	{
	
		kelebihan_tanah = luas_tanah-120;
		harga_kelebihan = kelebihan_tanah*1500000;
		harga_jual = 900000000+harga_kelebihan;
		
		if (luas_bangunan == 60)
		{
			diskon = harga_jual*0.05;
		}
		else if (luas_bangunan == 80)
		{
			diskon = harga_jual*0.07;
		}
		else if (luas_bangunan == 100)
		{
			diskon = harga_jual*0.09;
		}
	}
	else
	{
		cout<< "\n Maaf Kami Hanya menyediakan 2 Tipe Rumah ";
	}
	
	
	harga_bayar = harga_jual-diskon;
	
	cout<< "\n\n";
	cout<< "\n Berikut Perhitungannya Secara Rinci : ";
	cout<< endl;
	
	cout<< "\n Kelebihan Tanah \t\t\t : " << kelebihan_tanah << " m2 " ;
	cout<< "\n Harga Kelebihan Tanah \t\t\t : " <<" Rp. " << harga_kelebihan;
	cout<< "\n Harga Jual \t\t\t\t : " << " Rp. 500000000 " << " + " << " Rp. " << harga_kelebihan << " = " << "Rp. " << harga_jual;
	cout<< "\n Diskon \t\t\t\t : " << " Rp. " << diskon;
	cout<< "\n Harga Bayar \t\t\t\t : " << " Rp. " << harga_jual << " - " << " Rp. " << diskon << "  = " << " Rp. " << harga_bayar;
	
	cout<< "\n\n";
	cout<< "\n \t\t\t\t Terimakasih Telah Menggunakan Program Ini ";
	cout<< endl;
	
	getch();
	
}
