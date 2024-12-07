#include<iostream>

using namespace std;

//class inheritance,Enkaptulasi,Constructor
class namaMahasiswa{
	protected: //Enkptulasi
		string nama,nim;
	public: //Enkptulasi
		void umum(){
			cout << "Nama Mahasiswa : " << this->nama << endl;
			cout << "Nim  Mahasiswa : " << this->nim << endl;
		}
		
}; 

class Tiffany : public namaMahasiswa{
	private: //Enkptulasi
		string	jurusan, ipk;
	public: //Enkptulasi
		Tiffany(string nama, string nim, string jurusan, string ipk){
			this->nama = nama;
			this->nim = nim;
			this->jurusan = jurusan;
			this->ipk = ipk;
		} //Constructor
		Tiffany(const Tiffany &tif){
			this->nama = tif.nama;
			this->nim = tif.nim;
			this->jurusan = tif.jurusan;
			this->ipk = tif.ipk;
		}
		void khusus(){
			cout << "Nama Mahasiswa : " << this->jurusan << endl;
			cout << "Nim  Mahasiswa : " << this->ipk << endl;
		}
};
//class inheritance,Enkaptulasi,Constructor,Polymorishm Dynamic
class Motor {
	protected:
		string harga,nama,warna,rangka;
	public:
		virtual void info (){
			cout << "Belum ada datanya" << endl;
		}
};

class Yamaha : public Motor{
	public:
		Yamaha(string harga, string nama, string warna, string rangka){
			this->harga = harga;
			this->nama = nama;
			this->warna = warna;
			this->rangka = rangka;
		}
		void info() override{
			cout << "Harga  : " << this->harga << endl;
			cout <<"Nama    : " << this->nama << endl;
			cout << "Warna  : " << this->warna << endl;
			cout << "Rangka : " << this->rangka << endl;
		}
};

class Mobil{
	public:
		virtual void info () = 0;
};

class Toyota : public Mobil{
	private:
		string harga,nama,warna,rangka;
	public:
		Toyota(string harga, string nama, string warna, string rangka){
			this->harga = harga;
			this->nama = nama;
			this->warna = warna;
			this->rangka = rangka;
		}
		void info() override{
			cout << "Harga  : " << this->harga << endl;
			cout <<"Nama    : " << this->nama << endl;
			cout << "Warna  : " << this->warna << endl;
			cout << "Rangka : " << this->rangka << endl;
		}
};

int main(){
	cout << "====================================================" << endl;
	cout << "Menggunakan Inheritance,Enkaptulasi,Constructor" << endl;
	Tiffany tipply("Tiffany","242313131331","Data Science","3.60");
	Tiffany tip = tipply;
	tip.umum();
	tip.khusus();
	cout << "====================================================" << endl;
	cout << "====================================================" << endl;
	cout << "Menggunakan inheritance,Enkaptulasi,Constructor,Polymorishm Dynamic" << endl;
	Motor* motor;
	Yamaha yamaha("20000000","Areorx","Merah","Hitam");
	motor = &yamaha;
	motor->info();
	cout << "====================================================" << endl;
	cout << "====================================================" << endl;
	Mobil* mobil = new Toyota("20000000","Yaris","Kuning","Hijao");
	mobil->info();
	delete mobil;
	
}




