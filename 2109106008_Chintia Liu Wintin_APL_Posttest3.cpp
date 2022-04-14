//Standard Library C++
#include <iostream>

//Standard Library C++
using namespace std;

//Prosedur atau Fungsi untuk menampilkan tampilan awal program
void intro()
{
    cout<<"========================================================================="<<endl;
	cout<<"                             Program JaKator                             "<<endl;
    cout<<"========================================================================="<<endl;
    cout<<"                         Jago bersama Kalkulator                         "<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
}

//Prosedur atau Fungsi untuk menampilkan jenis operasi hitung yang tersedia
void jenis_operasi()
{
    cout<<"Silahkan Pilih Jenis Operasi Hitung"<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"5. Hasil Bagi"<<endl;
}

//Prosedur atau Fungsi untuk menampilkan jumlah variabel yang tersedia
void jumlah_variabel()
{
    cout<<"Silahkan Pilih Jumlah Variabel yang ingin dihitung"<<endl;
    cout<<"1. Perhitungan dengan 2 Variabel"<<endl;
    cout<<"2. Perhitungan dengan 3 Variabel"<<endl;
}

//Fungsi untuk menghitung operasi penjumlahan yang terdiri dari 2 variabel
int tambah (int x, int y)
{
    return x + y;
}

//Fungsi Overloading untuk menghitung operasi penjumlahan yang terdiri dari 3 variabel
int tambah (int x, int y, int z)
{
    return x + y + z;
}

//Fungsi untuk menghitung operasi pengurangan yang terdiri dari 2 variabel
int kurang (int x, int y)
{
    return x - y;
}

//Fungsi Overloading untuk menghitung operasi pengurangan yang terdiri dari 3 variabel
int kurang (int x, int y, int z)
{
    return x - y - z;
}

//Fungsi untuk menghitung operasi perkalian yang terdiri dari 2 variabel
int kali (int x, int y)
{
    return x * y;
}

//Fungsi Overloading untuk menghitung operasi perkalian yang terdiri dari 3 variabel
int kali (int x, int y, int z)
{
    return x * y * z;
}

//Fungsi untuk menghitung operasi pembagian yang terdiri dari 2 variabel
float bagi (float x, float y)
{
    return x / y;
}

//Fungsi Overloading untuk menghitung operasi pembagian yang terdiri dari 3 variabel
float bagi (float x, float y, float z)
{
    return x / y / z;
}

//Fungsi untuk menghitung operasi hasil bagi atau sisa bagi yang terdiri dari 2 variabel
int mod (int x, int y)
//mod = modulus atau modulo merupakan nama lain dari hasil bagi atau sisa bagi
{
    return x % y;
}

//Fungsi Overloading untuk menghitung operasi hasil bagi atau sisa bagi yang terdiri dari 3 variabel
int mod (int x, int y, int z)
//mod = modulus atau modulo merupakan nama lain dari hasil bagi atau sisa bagi
{
    return x % y % z;
}

int main()
{
    //Pendeklarasian
    //jumlah = inputan user terhadap jumlah variabel
    //operasi = inputan user terhadap jenis operasi hitung yang ingin dijalankan
    int jumlah, operasi;

    //x = Varibel 1
    //y = Variabel 2
    //z = Variabel 3
    int x, y, z;

    //Pendeklarasian untuk perulangan
    char ulang = 'y';

    //Pemanggilan Fungsi atau Prosedur void_intro
    intro();

    //Perulangan dengan menggunakan while
    while (ulang == 'y')
    {
        //Pemanggilan Fungsi atau Prosedur void_jenis_operasi
        jenis_operasi();
        cout<<"\nMasukkan Jenis Operasi Hitung yang ingin dijalankan [1, 2, 3, 4, atau 5] : ";
        cin>>operasi;
        cout<<"========================================================================="<<endl;

        //Pemanggilan Fungsi atau Prosedur void_jumlah_variabel
        jumlah_variabel();
        cout<<"\nMasukkan Jumlah Variabel Sesuai Menu yang tersedia [1 / 2] : "; 
        cin>>jumlah;
        cout<<"========================================================================="<<endl;

        //Percabangan if else dalam mengelompokkan jumlah variabel ke dalam beberapa kondisi
        if (jumlah == 1)
        {
            cout<<"Masukkan Angka untuk Variabel 1 : ";
            cin>>x;
            cout<<"Masukkan Angka untuk Variabel 2 : ";
            cin>>y;
            cout<<"========================================================================="<<endl;

            //Percabangan if else dalam mengelompokkan jenis operasi hitung ke dalam beberapa kondisi
            if (operasi == 1)
            {
                tambah(x, y);
                cout<<"Hasil dari "<<x<<" + "<<y<< " adalah "<<tambah(x, y)<<endl;
            }
            else if (operasi == 2)
            {
                kurang(x, y);
                cout<<"Hasil dari "<<x<<" - "<<y<< " adalah "<<kurang(x, y)<<endl;
            }
            else if (operasi == 3)
            {
                kali(x, y);
                cout<<"Hasil dari "<<x<<" * "<<y<< " adalah "<<kali(x, y)<<endl;
            }
            else if (operasi == 4)
            {
                bagi(x, y);
                cout<<"Hasil dari "<<x<<" / "<<y<< " adalah "<<bagi(x, y)<<endl;
            }
            else if (operasi == 5)
            {
                mod(x, y);
                cout<<"Hasil dari "<<x<<" % "<<y<< " adalah "<<mod(x, y)<<endl;
            }
            else
            {
                cout<<"Mohon Maaf Jenis Operasi Hitung Tidak Tersedia"<<endl;
            }
            cout<<"========================================================================="<<endl;
        }
        else if (jumlah == 2)
        {
            cout<<"Masukkan Angka untuk Variabel 1 : ";
            cin>>x;
            cout<<"Masukkan Angka untuk Variabel 2 : ";
            cin>>y;
            cout<<"Masukkan Angka untuk Variabel 3 : ";
            cin>>z;
            cout<<"========================================================================="<<endl;
            if (operasi == 1)
            {
                tambah(x, y, z);
                cout<<"Hasil dari "<<x<<" + "<<y<<" + "<<z<<" adalah "<<tambah(x, y, z)<<endl;
            }
            else if (operasi == 2)
            {
                kurang(x, y, z);
                cout<<"Hasil dari "<<x<<" - "<<y<<" - "<<z<<" adalah "<<kurang(x, y, z)<<endl;
            }
            else if (operasi == 3)
            {
                kali(x, y, z);
                cout<<"Hasil dari "<<x<<" * "<<y<<" * "<<z<< " adalah "<<kali(x, y, z)<<endl;
            }
            else if (operasi == 4)
            {
                bagi(x, y, z);
                cout<<"Hasil dari "<<x<<" / "<<y<<" / "<<z<< " adalah "<<bagi(x, y, z)<<endl;
            }
            else if (operasi == 5)
            {
                mod(x, y, z);
                cout<<"Hasil dari "<<x<<" % "<<y<<" % "<<z<< " adalah "<<mod(x, y, z)<<endl;
            }
            else
            {
                cout<<"Mohon Maaf Jenis Operasi Hitung Tidak Tersedia"<<endl;
            }
            cout<<"========================================================================="<<endl;
        }
        else 
        {
            cout<<"Mohon Maaf Jumlah Variabel Tidak Tersedia di Kalkulator ini"<<endl;
            cout<<"========================================================================="<<endl;
        }
        cout<<"Ingin Menghitung Kembali [y / t] : ";
        cin>>ulang;
        cout<<"========================================================================="<<endl;
    }
    cout<<"                               Terima Kasih                              "<<endl;
    cout<<"=========================================================================";
}