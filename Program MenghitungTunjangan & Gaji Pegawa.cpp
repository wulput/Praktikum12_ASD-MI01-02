#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	system (" color b ") ;
	string nama, nik, jk, sp, anak;
	bool kendaraan;
	int kode_gol, gaji_pokok, uang_makan, tunjangan, transport, gaji_kotor, pajak, gaji_bersih;

	cout<< "\n\t\t\t\t =========================================================" <<endl;
	cout<< "\n\t\t\t\t ||\t PROGRAM MENGHITUNG TUNJANGAN DAN GAJI PEGAWAI \t ||" <<endl;
	cout<< "\n\t\t\t\t =========================================================" <<endl <<endl<<endl;
	
	cout<< "\n\t\t\t DATA DIRI PEGAWAI ";
	cout<< "\n __________________________________________________________ " << endl;
	
	cout<< "\n NAMA PEGAWAI \t\t\t\t\t :"; getline(cin,nama);
	cout<< "\n NIK \t\t\t\t\t\t : "; cin >> nik;
	cout<< "\n JENIS KELAMIN ( Perempuan = P / Laki-laki = L)  : "; cin >> jk;
	cout<< "\n STATUS PERNIKAHAN ( Single = N / Menikah = Y) \t : "; cin >> sp;
	cout<< "\n ANAK ( Belum Memiliki = N / Memiliki = Y) \t : "; cin >> anak;
	cout<< "\n KENDARAAN ( Motor = 0 / Mobil = 1) \t\t : "; cin >> kendaraan;
	cout<< "\n KODE GOLONGAN ( 1 - 4 ) \t\t\t : "; cin >> kode_gol;
	cout<< endl <<endl;
	

// switch case yaitu untuk menetukan pilihan yang nilainya sudah pasti
	
	switch (kode_gol) 
	{
		case 1:
		{
			gaji_pokok = 1500000 ;
			uang_makan = 15000 ;
		//	cout<< "\n Gaji Pokok = Rp. 1.500.000 ";
			break ;
		}
		case 2: 
		{
			gaji_pokok = 2000000;
			uang_makan = 20000;
		//	cout<< "\n Gaji Pokok = Rp. 2.000.000 ";
			break;
		}
		case 3: 
		{
			gaji_pokok = 2500000;
			uang_makan = 25000;
		//	cout<< "\n Gaji Pokok = Rp. 2.500.000 ";
			break;
		}
		case 4:
		{
			gaji_pokok = 3000000;
			uang_makan = 30000 ;
		//	cout<< "\n Gaji pokok = Rp. 3.000.000 ";
			break;
		}
		default:
			cout<< "\n  MAAF kode Golongan Hanya 1 Sampai 4 :) ";
			break;
	}
	cout<< endl;
		
	cout<< "\n\t\t TAMPILKAN PERHITUNGANNYA ";
	cout<< "\n _____________________________________________________________________" << endl <<endl;
	
	cout<< "\n GAJI POKOK \t\t\t : " << " Rp. " << gaji_pokok <<endl ;
	cout<< "\n UANG MAKAN \t\t\t : " << " Rp. " << uang_makan <<endl;
	
	
	// percabangan bersarang (if dalam if) 
	// jika tipe data yang kita gunakan adalah string dan char maka penulisannya seperti di bawah ini 
	// "L" "Y" "N" harus dideklarasikan terlebih dahulu dengan cara kita beri tanda " ( petik dua)
	// menentukan nilai tunjangan : 
	
	
	if(jk == "L")
	{
        if(sp == "Y")
		{
            if(anak == "Y")
			{
               tunjangan = 0.1*gaji_pokok; 
           }
           if(anak == "N")
		   {
			tunjangan = 0.005*gaji_pokok;	
			}
        }
	}
    if(jk == "P")
	{
        if(sp == "Y")
		{
            if(anak == "Y")
			{
			 tunjangan = 0.07*gaji_pokok; 
			}
              
        }
    }
	
	
	cout<< "\n TUNJANGAN \t\t\t : " << tunjangan <<endl;
	
	
	// untuk kendaraan kita menggunakan if else if karena memiliki 2 statement
	// jika statements pertama tidak sesuai maka ia akan melanjutkan ke statements ke 2  
	
	if (kendaraan == 0)
	{
		transport = 0.002*gaji_pokok; 
	}
	else if(kendaraan == 1)
	{
		transport = 0.003*gaji_pokok;
	}
	else
	{
		transport = 0;
	}
	
	cout<< "\n TRANSPORT \t\t\t : " << transport <<endl;
	
	
	gaji_kotor = gaji_pokok+tunjangan+uang_makan+transport;
	cout<< "\n GAJI KOTOR \t\t\t : " << gaji_pokok << "\t + \t" << tunjangan << "\t + \t" << uang_makan << "\t + \t" << transport << "\t = " << gaji_kotor;
	cout<< endl;
	
	
	pajak = 0.007*gaji_kotor;
	cout<< "\n PAJAK \t\t\t\t : " << " 0.007 \t * \t " << gaji_kotor << "\t\t\t\t = " << pajak <<endl;
	
	
	gaji_bersih = gaji_kotor-pajak;
	cout<< "\n GAJI BERSIH \t\t\t : " << gaji_kotor << "\t - \t" << pajak << "\t\t\t\t\t = " << gaji_bersih;
	cout<< endl <<endl <<endl;
	
	
	cout<< "\n\t\t\t\t  TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI  ";
	cout<< "\n\t\t\t\t\t\t SEMOGA BERMANFAAT  ";
	
	getch();
	
	
}
