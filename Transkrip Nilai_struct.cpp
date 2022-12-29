// IP Mahasiswa - Menggunakan Struct dan gotoxy()

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>

using namespace std;

// Fungsi Nilai Huruf dan Bobot
void hurufBobot(float nilaiAngka, char &nilaiHuruf, int &bobot) {
	if (nilaiAngka >= 81 && nilaiAngka <= 100) {
		nilaiHuruf = 'A';
		bobot = 4;
	}
	else if (nilaiAngka >= 61 && nilaiAngka < 81) {
		nilaiHuruf = 'B';
		bobot = 3;
	}
	else if (nilaiAngka >= 41 && nilaiAngka < 61) {
		nilaiHuruf = 'C';
		bobot = 2;
	}
	else if (nilaiAngka >= 21 && nilaiAngka < 41) {
		nilaiHuruf = 'D';
		bobot = 1;
	}
	else if (nilaiAngka < 21) {
		nilaiHuruf = 'E';
		bobot = 0;
	}
}

// Fungsi Jumlah Indeks
// Nonvoid karena mengembalikan nilai
int jumlahIndeks(int sks, int bobot) {
	return sks * bobot;
}

// Fungsi Indeks Prestasi
float ip(int totalIndeks, int totalSks) {
	return (float) totalIndeks / totalSks;
}

// Fungsi untuk mendapatkan posisi Console Cursor
COORD getConsoleCursorPosition(HANDLE hConsoleOutput) {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hConsoleOutput, &csbi);
	return csbi.dwCursorPosition;
}

// Fungsi untuk mengatur posisi Console Cursor
void gotoxy(int x, int y) {
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD posisi;
	
	posisi.X = x;
	// Posisi Y ditentukan oleh posisi Y dari Console Cursor
	posisi.Y = getConsoleCursorPosition(hConsoleOutput).Y;
	
	SetConsoleCursorPosition(hConsoleOutput, posisi);
}

int main() {
	// Deklarasi Variabel
	char nama[50], nim[15];
	string jurusan;
	int n, totalSksSeluruh = 0, totalIndeks = 0, sksWajib = 0, sksPilihan = 0, sksKonsent =0;
	float indeksPrestasi;
	
	const string TAHUN_AKADEMIK = "2022/2023";
	const string SEMESTER = "Ganjil";
	
	// Deklarasi Struct
	struct matakuliah {
		string kodeMk, namaMk, sifat;
		float nilaiAngka;
		char nilaiHuruf;
		int sks, bobot, indeks;
	};
	
	cout << "================================================================" << endl;
	cout << "|              Input Identitas & Nilai Mata Kuliah             |" << endl;
	cout << "================================================================" << endl;
	cout << endl;
	
	// Input Identitas
	cout << "Nama                 : "; gets(nama);
	cout << "NIM                  : "; gets(nim);
	cout << "Jurusan              : "; getline(cin, jurusan);
	cout << endl;
	cout << "Jumlah Mata Kuliah   : "; cin >> n;
	cout << endl;
	
	// Deklarasi Struct of Array
	matakuliah matkul[n];
	
	for (int i = 0; i < n; i++) {
		// Input Nilai
		cout << "----------------------------------------------------------------" << endl;
		cout << ">> Mata Kuliah ke-" << i + 1 << endl;
		cout << endl;
		cout << "Kode Mata Kuliah     : "; cin >> matkul[i].kodeMk;
		cin.sync();
		cout << "Nama Mata Kuliah     : "; getline(cin, matkul[i].namaMk);
		cout << "Sifat Mata kuliah    : " << endl;
		cout << "1. Wajib " <<endl;
		cout << "2. Pilihan " <<endl;
		cout << "3. Konsentrasi " <<endl;
		cout << "Pilih Sifat          : "; cin >> matkul[i].sifat;
		cout << "Jumlah SKS           : "; cin >> matkul[i].sks;
		cout << "Nilai Angka          : "; cin >> matkul[i].nilaiAngka;
		cout << endl;
		
		if(matkul[i].sifat == "1")
		{
			matkul[i].sifat = "Wajib";
			sksWajib += matkul[i].sks;
		}
		else if(matkul[i].sifat == "2")
		{
			matkul[i].sifat = "Pilihan";
			sksPilihan += matkul[i].sks;
		}
		else if(matkul[i].sifat == "3")
		{
			matkul[i].sifat = "Konsentrasi";
			sksKonsent =+ matkul[i].sks;
		}

		// Proses Nilai
		hurufBobot(matkul[i].nilaiAngka, matkul[i].nilaiHuruf, matkul[i].bobot);
		matkul[i].indeks = jumlahIndeks(matkul[i].sks, matkul[i].bobot);
		
		totalSksSeluruh += matkul[i].sks;
		totalIndeks += matkul[i].indeks;
		
		// Output Nilai
		cout << "Nilai Huruf          : " << matkul[i].nilaiHuruf << endl;
		cout << "Bobot Nilai          : " << matkul[i].bobot << endl;
		cout << "Total Nilai (Indeks) : " << matkul[i].indeks << endl;
		cout << endl;
	}
	
	// Hitung Indeks Prestasi
	indeksPrestasi = ip(totalIndeks, totalSksSeluruh);
	
	// Final Output
	cout << endl;
	cout << endl;
	cout << "=================================================================================" << endl;
	cout << "|                                KARTU HASIL STUDI                              |" << endl;
	cout << "|                          UNIVERSITAS AMIKOM YOGYAKARTA                        |" << endl;
	cout << "=================================================================================" << endl;
	cout << endl;
	cout << "Nama    : " << nama;
	gotoxy(38, 0); cout << "TAHUN AKADEMIK : " << TAHUN_AKADEMIK << endl;
	cout << "NIM     : " << nim;
	gotoxy(38, 0); cout << "Semester       : " << SEMESTER << endl;
	cout << "Jurusan : " << jurusan << endl;
	cout << endl;
	
	cout << "==================================================================================" << endl;
	cout << "| NO. | KODE  |            MATA KULIAH           |     SIFAT     | SKS |  NILAI  |" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	
	for (int i = 0; i < n; i++) {
		cout << "|  " << i+1;
		gotoxy(6, 0); cout << "| " << matkul[i].kodeMk;
		gotoxy(14, 0); cout << "| " << matkul[i].namaMk;
		gotoxy(49, 0); cout << "| "<< matkul[i].sifat;
		gotoxy(65, 0); cout << "|  " << matkul[i].sks;
		gotoxy(73, 0); cout << "|   " << matkul[i].nilaiHuruf;
		gotoxy(81, 0); cout << "|" << endl;
	}
	
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "|                                              JUMLAH SKS WAJIB |";
	gotoxy(73, 0); cout << 	sksWajib;
	gotoxy(81, 0); cout << "|" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "|                                            JUMLAH SKS PILIHAN |";
	gotoxy(73, 0); cout << sksPilihan;
	gotoxy(81, 0); cout << "|" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "|                                        JUMLAH SKS KONSENTRASI |";
	gotoxy(73, 0); cout << sksKonsent;
	gotoxy(81, 0); cout << "|" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "|                                        JUMLAH SKS KESELURUHAN |";
	gotoxy(73, 0); cout << totalSksSeluruh;
	gotoxy(81, 0); cout << "|" << endl;
	cout <<"----------------------------------------------------------------------------------" << endl;
	cout << "|                                               INDEKS PRESTASI |";
	gotoxy(73, 0); cout << setiosflags(ios::fixed) << setprecision(2) << indeksPrestasi;
	gotoxy(81, 0); cout << "|" << endl;
	cout << "==================================================================================" << endl;
	cout << endl;
	cout << endl;
	
	getch();
	return 0;
}