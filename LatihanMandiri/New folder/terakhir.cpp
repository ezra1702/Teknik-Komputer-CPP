#include<iostream>

using namespace std;

struct JadwalBus{
	string tujuan;
	string jadwal;
	double harga;
};
void tampilkan_jadwal(){
JadwalBus bus[] = {{"Jakarta ke Bandung","08:00 WIB",100000},{"Jakarta ke Yogyakarta","10:00 WIB",200000},{"Jakarta ke Surabaya","20:00 WIB",300000}};
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
}

void pilih_jadwal(){
	
	
}
int main (){
	tampilkan_jadwal();
}
