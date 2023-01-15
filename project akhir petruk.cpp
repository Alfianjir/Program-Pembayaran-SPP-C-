#include <iostream>
using namespace std;

#define fteti 1200000 //KONSTANTA
#define fti 1200000 //fakultas teknologi industri
#define ftsp 1200000 //fakultas teknik sipil dan perencanaan
#define ftmk 1200000 //fakultas teknologi mineral dan kelautan

int main() //Program Utama
{
    int pilihan, i;

    menu:
    do //Perulangan
    {
        cout <<"================================"<<endl; // Tampilan Menu
        cout <<"\t PEMBAYARAN SPP"<<endl;
        cout <<"================================"<<endl;
        cout <<"\t MENU"<<endl;
        cout <<"--------------------------"<<endl;
        cout <<"| 1. SPP"<<endl;
        cout <<"| 2. OUT"<<endl;
        cout <<"--------------------------"<<endl;
        cout <<"================================"<<endl;

        cout <<"Masukkan Pilihan (1-2) : "; cin>>pilihan;
        cout <<endl;

        switch(pilihan) //Pemilihan
        {
            case 1: //Pemilihan
                mulai:
                    int fakultas, jumlahbln, totalbyr, byr, kembali; //Tipe Data
                    int arr[5]={5}; //Array
                    const char* jenisfk1; //Konstanta
                    char bayarlagi; //Tipe Data

                    cout <<"============================================="<<endl; //Tampilan Mulai
                    cout <<"\t PEMBAYARAN SPP"<<endl;
                    cout <<"1. Fakultas Teknik Elektro Teknik Informatika"<<endl;
                    cout <<"2. Fakultas Teknologi Industri"<<endl;
                    cout <<"3. Fakultas Teknik Sipil dan Perencanaan"<<endl;
                    cout <<"4. Fakultas Teknologi Mineral dan Kelautan"<<endl;
                    cout <<"============================================="<<endl;

                    cout <<"Pilih Pembayaran"<<endl<<endl;
                    cout <<"Fakultas (1-4)  : "; cin>>fakultas;
                    cout <<"Number Of Month : "; cin>>jumlahbln;
                    cout <<endl;
                    cout <<"================================"<<endl;

                    if (fakultas==1) //Pemilihan
                    {
                        totalbyr=jumlahbln*fteti;
                        jenisfk1="Fakultas Teknik Elektro Teknik Informatika";
                    }
                    else if (fakultas==2) //Pemilihan
                    {
                        totalbyr=jumlahbln*fti;
                        jenisfk1="Fakultas Teknologi Industri";
                    }
                     else if (fakultas==3) //Pemilihan
                    {
                        totalbyr=jumlahbln*ftsp;
                        jenisfk1="Fakultas Teknik Sipil dan Perencanaan";
                    }
                     else if (fakultas==4) //Pemilihan
                    {
                        totalbyr=jumlahbln*ftmk;
                        jenisfk1="Fakultas Teknologi Mineral dan Kelautan";
                    }
                    else //Pemilihan
                    {
                        cout <<"Nomer Yang Anda Masukkan Salah"<<endl<<endl;
                        goto mulai;
                    }

                    cout <<"Fakultas        : "<<fakultas<<endl;
                    cout <<"Number Of Month : "<<jumlahbln<<endl;
                    cout <<"--------------------------------"<<endl;
                    cout <<"Total Bayar     : Rp. "<<totalbyr<<endl;
                    cout <<"Bayar           : Rp. "; cin>>byr;
                    cout << endl;
                            kembali=totalbyr-byr;
                    cout <<"Kembali : Rp. "<<kembali<<endl<<endl;

                    cout <<"Transaction Again? [Y/T] : ";
                    cin >> bayarlagi;
                        if(bayarlagi=='Y' || bayarlagi=='y')
                            {goto mulai;}
                        if(bayarlagi=='T' || bayarlagi=='t')
                            {goto menu;}
                break;


        }

    }
    while(pilihan!=2); //Perulangan
}
