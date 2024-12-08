#include<iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;


struct JadwalBus{
	string tujuan;
	string jadwal;
	double harga;
};

JadwalBus bus[] = {{"Jakarta ke Bandung","08:00 WIB",100000},{"Jakarta ke Yogyakarta","10:00 WIB",200000},{"Jakarta ke Surabaya","20:00 WIB",300000}};


void hitung_total(double& harga,int org,double naik ){
	double pajak = 0.05;
	double diskon = 0.10;
	double hargadiskon = 0;
	double harga1 = (harga * org) * naik;
	double harga2 = harga1 + (harga * org);	
	if(org >= 5){
		hargadiskon = harga2 * diskon;
	}
	double harga3 = harga2 + (harga2 * pajak) - hargadiskon; 
	harga = harga3;
	
}
string  kode_pemesanan() {
     string huruf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
     string angka = "0123456789";
    string kode_pemesanan = "";

    srand(time(0)); 

    for (int i = 0; i < 8; ++i) {
        if (rand() % 2 == 0) {
            kode_pemesanan += huruf[rand() % huruf.length()];
        } else {
            kode_pemesanan += angka[rand() % angka.length()];
        }
    }

    return kode_pemesanan;
}
void cetak_ringkasan (JadwalBus kereta, double& harga, int org,string kelas, string nama){
cout << "===============================================================" << endl;
cout << "===============================================================" << endl;
cout << "Ringkasan Pemesanan : " << endl;
cout << "Nama             : " << nama << endl;
cout << "Tujuan           : " << kereta.tujuan << endl;
cout << "Kelas            : " <<kelas << endl;
cout << "Jumlah Tiket     : " << org << endl;
cout << "Total Pembayaran : Rp." << fixed << setprecision(0) << harga << endl;
cout << "Kode Pemesanan   : "  << kode_pemesanan() << endl;
cout << "===============================================================" << endl;

}

void pilih_jadwal(JadwalBus bis, string nama){
    cout << "===============================================================" << endl;
	int x = 0;
	string kelas;
	double harga = bis.harga;
	int org = 0;
	cout << "Pilih Kelas Tiket: " << endl;
	cout << "1. Ekonomi" << endl;
	cout << "2. Bisnis (+20%)" << endl;
	cout << "3. VIP (+50%)" << endl;
	cout << "Pilih yang mana: ";
	cin >> x;
	while(x <= 0 || x >= 4){
		cout << "Mohon Maaf  Pilihan ada tidak ada list!" << endl;
		cout << "Pilih Kelas Tiket: ";
		cin >> x;
	}
	cout << "===============================================================" << endl;
	cout << "===============================================================" << endl;
	if(x == 1){
		kelas = "Ekonomi";
		cout << "Berapa tiket: ";
		cin >> org;
		while(org <= 0){
			cout << "Mohon Maaf Tiket dilang kurang dari 1 !" << endl;
			cout << "Berapa tiket: ";
			cin >> org;
		}
		hitung_total(harga,org,0);
		cetak_ringkasan(bis, harga, org,kelas,nama);
		
		
	}else if(x == 2){
		kelas = "Bisnis";
			cout << "Berapa tiket: ";
		    cin >> org;
	    	while(org <= 0){
			cout << "Mohon Maaf Tiket dilang kurang dari 1 !" << endl;
			cout << "Berapa tiket: ";
			cin >> org;
		}
		hitung_total(harga,org,0.2);
		cetak_ringkasan(bis, harga, org,kelas,nama);

	}else if(x==3){
		kelas = "VIP";
		cout << "Berapa tiket: ";
		cin >> org;
		
		while(org <= 0){
			cout << "Mohon Maaf Tiket dilang kurang dari 1 !" << endl;
			cout << "Berapa tiket: ";
			cin >> org;
		}
		hitung_total(harga,org,0.5);
		cetak_ringkasan(bis, harga, org,kelas,nama);
	}
	
}

void tampilkan_jadwal(){
	cout << "===============================================================" << endl;
	cout << "Selamat Pagi Mas/Mbak" << endl;
	string nama;
	cout << "Masukan Nama : ";
	getline(cin, nama);
	cout << "===============================================================" << endl;
	cout << "===============================================================" << endl;
    cout << "Daftar Tujuan dan Jadwal:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". " << bus[i].tujuan << " - Rp ";
		if(bus[i].harga == 100000){
			cout << "100.000" << " (" << bus[i].jadwal << " WIB)" << endl;
		}if(bus[i].harga == 200000){
			cout << "200.000" << " (" << bus[i].jadwal << " WIB)" << endl;
		}if(bus[i].harga == 300000){
			cout << "300.000" << " (" << bus[i].jadwal << " WIB)" << endl;
		}
    }
    int pil;
    cout << "Silahkan! pilih yang mana : ";
    cin >> pil;
	while(pil <= 0 || pil >= 4){
		cout << "Mohon Maaf  Pilihan ada tidak ada list!" << endl;
		cout << "Pilih Kelas Tiket: ";
		cin >> pil;
	}
    cout << "===============================================================" << endl;
    if(pil == 1){
    	pilih_jadwal(bus[0],nama);
	}else if(pil == 2){
		pilih_jadwal(bus[1],nama);
	}else if(pil == 3){
		pilih_jadwal(bus[2],nama);
	}
}


int main (){
	tampilkan_jadwal();
}
