#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    string nama_pegawai;
    int NIK, kenderaan;
    double gaji_pokok, tunjangan=0, uang_makan, transport;
    string jenis_kelamin, status_pernikahan, anak;
    
    cout<<"Please enter nama pegawai: ";
    cin>>nama_pegawai;
    cout<<"Please enter NIK: ";
    cin>>NIK;
    cout<<"Please enter gaji_pokok: ";
    cin>>gaji_pokok;
    cout<<"Please enter jenis_kelamin (L/P): ";
    cin>>jenis_kelamin;
    cout<<"Please enter status_pernikahan(N/Y): ";
    cin>>status_pernikahan;
    cout<<"Please enter anak(N/Y): ";
    cin>>anak;
    cout<<"Please enter kenderaan(0/1): ";
    cin>>kenderaan;
    cout<<"Please enter uang_makan: ";
    cin>>uang_makan;
    
    //output 1
    if(jenis_kelamin.compare("L")==0){
        if(status_pernikahan.compare("Y")==0){
            if(anak.compare("Y")==0)
               tunjangan = 0.1*gaji_pokok; //1 a)
            else
               tunjangan = 0.05*gaji_pokok; // 1 c)
        }
    }    
    if(jenis_kelamin.compare("P")==0){
        if(status_pernikahan.compare("Y")==0){
            if(anak.compare("Y")==0)
               tunjangan = 0.07*gaji_pokok; //1 a)
        }
    }
    cout<<"Tunjangan = Rs " << tunjangan<<endl;
    
    //output 2 
    cout<<"Uang makan = Rs " << uang_makan<<endl;
    
    //output 3 
    if(kenderaan==0)
        transport = 0.03*gaji_pokok;
    else if(kenderaan==1)
        transport = 0.02*gaji_pokok;
        else
        transport = 0;
    cout<<"Transport = Rs " << transport<<endl;
    
    // output 4
    double gaji_kotor = gaji_pokok + tunjangan + uang_makan + transport;
    cout<<"Gaji kotor =  Rs " << gaji_kotor <<endl;
    
    // output 5 
    double pajak = 0.7*gaji_pokok;
    cout<<"Pajak =  Rs " << pajak<<endl;
    
    //output 6 
    double gaji_bersih = gaji_kotor - pajak;
    cout<<"Gaji bersih  =  Rs " << gaji_bersih<<endl;
    
    return 0;
}
