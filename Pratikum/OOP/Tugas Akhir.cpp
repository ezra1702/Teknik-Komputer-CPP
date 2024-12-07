#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Hewan {
protected:
    string nama;
public:
    virtual void info() = 0;
    virtual void bersuara() = 0;
    virtual void makan() = 0;
    virtual void bergerak() = 0;
    virtual void unik() = 0;
    virtual string getNama() {
        return nama;
    }
};

class Burung : public Hewan {
public:
    Burung(string nama) {
        this->nama = nama;
    }
    void info() override {
        cout << "Nama: " << nama << endl;
    }
    void bersuara() override {
        cout << "Cuit-cuit!\n";
    }
    void makan() override {
        cout << nama << " sedang makan biji-bijian.\n";
    }
    void bergerak() override {
        cout << nama << " sedang terbang di langit.\n";
    }
    void unik() override {
        cout << " Sedang berbicara bersama manusia.\n";
    }
};

class Kucing : public Hewan {
public:
    Kucing(string nama) {
        this->nama = nama;
    }
    void info() override {
        cout << "Nama: " << nama << endl;
    }
    void bersuara() override {
        cout << "Meong!\n";
    }
    void makan() override {
        cout << nama << "sedang makan ikan.\n";
    }
    void bergerak() override {
        cout << nama << "sedang berjalan dengan anggun.\n";
    }
    void unik() override {
        cout << "Sedang berkelahi bersama anjing.\n";
    }
};

class HewanUmum : public Hewan {
public:
    HewanUmum(string nama) {
        this->nama = nama;
    }
    void info() override {
        cout << "Nama: " << nama << endl;

    }
    void bersuara() override {
        cout << "Hewan ini tidak memiliki suara spesifik.\n ";
    }
    void makan() override {
        cout << "Sedang makan makanan uum. \n";
    }
    void bergerak() override {
        cout << "sedang bergerak  secara umum. \n ";
    }
    void unik() override {
        cout << "sedang melakukan hal-hal unik.\n";
    }
};

class HewanEksperimen : public Hewan{
	private:
       Hewan* hp;
       Hewan* hk;
	public:
		HewanEksperimen(string nama, Hewan* hp, Hewan* hk){
			this->nama = nama;
			this->hp = hp;
			this->hk = hk;
	    }
	    void info() override {
        	cout << "Nama: " << nama << endl;
        	cout << "Pernikahan antara: " << hp->getNama() << " dan " << hk->getNama() << endl;
        }
    	void bersuara() override {
        	cout << "Hewan ini memiliki bersuara yang bisa dimiliki oleh: "  << hp->getNama() << " dan " << hk->getNama() << endl ;
   		}
  	    void makan() override {
        	cout <<  "Hewan ini makan - makanan  yang bisa dimakan oleh: "  << hp->getNama() << " dan " << hk->getNama() << endl ;
    	}
    	void bergerak() override {
       	 	cout << "Hewan ini sedang bergerak mirip: "  << hp->getNama() << " dan " << hk->getNama() << endl ;
    	}void unik() override {
        	cout << "Hewan ini sedang melakukan hal-hal unik seperti: "  << hp->getNama() << " dan " << hk->getNama() << endl ;
    	}
}; 
	
class AnakHewan : public Hewan {
private:
    Hewan* induk;
public:
    AnakHewan(string nama, Hewan* induk) {
        this->nama = nama;
        this->induk = induk;
    }
    void info() override {
        cout << "Nama anak hewan: " << nama << endl;
        cout << "Induknya adalah: ";
        induk->getNama();
    }
    void bersuara() override {
        cout << "Anak Hewan ini" << " meniru suara induknya \n ";
    }
    void makan() override {
        cout << "Anak Hewan ini" << " belajar makan seperti induknya \n ";
    }
    void bergerak() override {
        cout << "Anak Hewan ini" << " sedang belajar bergerak seperti induknya \n ";
    }
    void unik() override {
        cout << "Anak hewan ini sedang belajar melakukan hal-hal unik seperti induknya.\n";
    }
};

class HewanBaru : public Hewan {
	private:
		string b,m,be,u;
	public:
    HewanBaru(string nama, string b,string m, string be, string u) {
        this->nama = nama;
        this->b = b;
        this->m = m;
        this->be = be;
        this->u = u;
    }
    void info() override {
        cout << "Nama: " << nama << endl;

    } 
    void bersuara() override {
        cout << nama << " Hewan ini memiliki suara " << b <<endl;
    }
    void makan() override {
        cout << nama << " Sedang makan makanan " << m << endl;
    }
    void bergerak() override {
        cout << nama << " sedang bergerak  secara  " << be << endl;
    }
    void unik() override {
        cout << nama << " sedang melakukan " << u << endl;
    }
};



int main() {
        Hewan* hewan;
        cout << "===============================\n";
        Kucing kucing("Kucing Mujaer");
        hewan = &kucing;
        hewan->info();
        hewan->bersuara();
        hewan->makan();
        hewan->bergerak();
        hewan->unik();
        cout << "===============================\n";
        cout << "===============================\n";
        Burung burung("Burung Hambali");
        hewan = &burung;
        hewan->info();
        hewan->bersuara();
        hewan->makan();
        hewan->bergerak();
        hewan->unik();
        cout << "===============================\n";
        cout << "===============================\n";
        HewanUmum kebunBinatang("Hewan Umum");
        hewan = &kebunBinatang;
        hewan->info();
        hewan->bersuara();
        hewan->makan();
        hewan->bergerak();
        hewan->unik();
        cout << "===============================\n";
        cout << "===============================\n";
        AnakHewan anakKucing("Anak Kucing", &kucing);
        hewan = &anakKucing;
        hewan->info();
        hewan->bersuara();
        hewan->makan();
        hewan->bergerak();
        hewan->unik();
        cout << "===============================\n";
        cout << "===============================\n";
        HewanBaru anjing("Anjing" ,"gongong","tulang","berjalan menggunakan empat kaki","bernyanyi"); 
        hewan = &anjing;
        hewan->info();
        hewan->bersuara();
        hewan->makan();
        hewan->bergerak();
        hewan->unik();
        cout << "===============================\n";
        cout << "===============================\n";
        HewanEksperimen eksperimen("Anbur", &anjing, &burung);
        hewan = &eksperimen;
        hewan->info();
        hewan->bersuara();
        hewan->makan();
        hewan->bergerak();
        hewan->unik();
        cout << "===============================\n";
        cout << "===============================\n";


    return 0;
}

