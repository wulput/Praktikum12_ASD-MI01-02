#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;

int main()
{
	string nama, nik;
	bool jk, sp, kendaraan;
	int gaji_pokok, uang_makan, tunjangan, transport, gaji_kotor, pajak, gaji_bersih;
	
	cout<< "\n ====================================================================================================================== ";
	cout<< "\n  \t\t\t\t\t PROGRAM MENGHITUNG GAJI KARYAWAN \t\t\t\t\t\t\t\t\t\t\t\t\t ";
	cout<< "\n ====================================================================================================================== " <<endl <<endl;
	
	cout<< "\n \t\t\t\t\t\t DATA DIRI KARYAWAN ";
	cout<< "\n \t\t\t\t ______________________________________________ " <<endl <<endl;
	
	cout<< "\n NAMA KARYAWAN \t\t\t\t\t : "; getline(cin,nama);
	cout<< " NIK \t\t\t\t\t\t : "; cin >> nik;
	cout<< " JENIS KELAMIN ( P = 0 / L = 1) \t\t : "; cin >> jk;
	cout<< " STATUS PERNIKAHAN ( Single = 0 / Menikah = 1 )  : "; cin >> sp;
	cout<< " KENDARAAN ( Motor = 0 / Mobil = 1 ) \t\t : "; cin >> kendaraan;
	
	cout<<endl;
	cout<< "\n\n \t\t\t\t\t PENGHITUNGAN GAJI KARYAWAN ";
	cout<< "\n \t\t\t\t ______________________________________________ " <<endl <<endl;
		
	cout<< "\n GAJI POKOK \t\t\t = "; cin >> gaji_pokok;
	cout<<endl;
	cout<< " UANG MAKAN \t\t\t = "; cin >> uang_makan;
	
	
// Tunjangan dengan 2 syarat yang harus dipenuhi yaitu Dia harus laki" dan sudah menikah 
// Jika kedua syarat tersebut tidak terpenuhi maka dia tidak akan mendapatkan tunjangan	
	cout<< "\n TUNJANGAN \t\t\t = ";
	if (jk == 1 && sp == 1)
	{
		tunjangan=500;
		cout<< " 500 ";	
	}
	else 
	{
		tunjangan=0;
		cout<< " 0 ";
	}
	
	cout<< endl;
	
	// Syarat untuk transport yaitu jika kendaraannya mobil maka memndapatkan uang transport sebesar 1000
	// jika kendaraannya motor maka mendapatkan uang transport sebesar 500
	cout<< "\n TRANSPORT \t\t\t = ";
	if ( kendaraan == 1)
	{
		transport=1000;
		cout<< " 1000 ";
	}
	else if ( kendaraan == 0)
	{
		transport=500;
		cout<< " 500 ";
	}
	else
	{
		transport=0;
		cout<< " 0 ";
	}
	
	cout<< endl;
	
	//konstanta
	gaji_kotor= ( gaji_pokok+tunjangan+uang_makan+transport );
	pajak = (0.05*gaji_kotor);
	gaji_bersih = (gaji_kotor-pajak);
	
	
	cout<< "\n GAJI KOTOR \t\t\t = " << gaji_pokok << " + " << tunjangan << " + " << uang_makan << " + " << transport << " \t\t\t = " << gaji_kotor <<endl;
	cout<< "\n PAJAK \t\t\t\t = " << " 0.05 * " << gaji_kotor << " \t\t\t\t = " << pajak <<endl;
	cout<< "\n GAJI BERSIH  \t\t\t = " << gaji_kotor << " - " << pajak << " \t\t\t\t = "<< gaji_bersih <<endl;
	
	
	
	
	getch();
}

