#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct daftarBuku{
	string jbuku,penulis,tahun,kategori;
}; 

class PenjualanBuku {
 private:
		string jbuku,penulis,tahun,kategori;
 public:
	vector<daftarBuku> buku;
	
	PenjualanBuku(){
		int exit=0;
		string pil;
		while(exit == 0){
		cout << "======================================================================================" << endl;
		cout << "Pilih Menu!" << endl;
		cout << "1. Tambah Buku" << endl;
		cout << "2. Lihat Semua Buku" << endl;
		cout << "3. Cari Buku Berdasarkan Kategori" << endl;
		cout << "4. Keluar" << endl;
		cout << "Pilih : ";
		getline(cin, pil);
		while(pil.empty()){
			cout << "Harus memilih : ";
			getline(cin, pil);
		}
		if(pil == "1"){	
			cout << "======================================================================================" << endl;
			cout << "======================================================================================" << endl;
			tambahkanBuku();
		}else if(pil == "2"){
			cout << "======================================================================================" << endl;
			cout << "======================================================================================" << endl;
			tampilkanBuku();
		}else if(pil == "3"){
			cout << "======================================================================================" << endl;
			cout << "======================================================================================" << endl;
			cariKategori();
		}else if(pil == "4"){
			cout << "======================================================================================" << endl;
			cout << "======================================================================================" << endl;
			exit = 1;
			cout << "Terimakasih atas pencariannya!" << endl;
	    }else{
	    	cout << "Mohon pilih sesuai nomor ( 1 - 4 )" << endl;
		}
	    
	  }	
	}
	void tambahkanBuku (){
		int i = 0,p = 1;
		string jwb;
		while(i==0){
		cout << "Buku ke-" << p << endl;
		 cout << "Masukan judul buku          : ";
		 getline(cin, jbuku);
		 while(jbuku.empty()){
		 	cout << "Judul tidak diperkenankan Kosong! ";
		 	getline(cin, jbuku);
		 }
		 cout << "Masukan penulis buku        : ";
		 getline(cin, penulis);
		 while(penulis.empty()){
		 	cout << "Judul penulis tidak diperkenankan Kosong! " ;
		 	getline(cin, penulis);
		 }
		 cout << "Masukan tahun penerbit buku : ";
		 getline(cin, tahun);
		 while(tahun.empty()){
		 	cout << "Tahun penerbit tidak diperkenankan Kosong! ";
		 	getline(cin, tahun);
		 }
		 cout << "Masukan jenis kategori buku : ";
		 getline(cin, kategori);
		 while(kategori.empty()){
		 	cout << "Kategori tidak diperkenankan Kosong! ";
		 	getline(cin, kategori);
		 }
		 cout << "Data Berhasil Ditambahkan!" << endl;
		 cout << "Apakah sudah (y/n) : ";
		 cin >> jwb;
		 cin.ignore();
		 if(jwb == "y"){
		 	i = 1;
		 }
		 
		 p++;
		 buku.push_back({jbuku,penulis,tahun,kategori});

		}
		cout << "======================================================================================" << endl;
	}
	void tampilkanBuku(){
	  if(buku.size() > 0){
	 	for(int x = 0; x < buku.size(); x++){
	 		    cout << "Buku Ke-" << x+1 << endl;
	 	        cout << "Judul buku           : " <<  buku[x].jbuku << endl;
				cout << "Penulis buku         : " <<  buku[x].penulis << endl;
				cout << "Tahun penerbit buku  : " <<  buku[x].tahun << endl;
				cout << "Jenis kategori buku  : " <<  buku[x].kategori << endl;
		 }
	  }else{
	  	cout << "Mohon Maaf Buku Belum pernah ditambahkan!" << endl;
	  }
		 cout << "======================================================================================" << endl;
	}
        
    void cariKategori(){
		string info;
	 if(buku.size() > 0){
	 	cout << "Masukan Kategori yang mau dicari : ";
		getline(cin, info);
		while(info.empty()){
			cout << "Pilih sesuai kategori yang dimau! ";
			getline(cin, info);
		}
		bool categoryFound = false;
		for(int x = 0; x < buku.size(); x++){
			if(buku[x].kategori  == info ){
				cout << "Buku Ke-" << x+1 << endl;
				cout << "Judul buku           : " <<  buku[x].jbuku << endl;
				cout << "Masukan penulis buku         : " <<  buku[x].penulis << endl;
				cout << "Masukan tahun penerbit buku  : " <<  buku[x].tahun << endl;
				cout << "Masukan jenis kategori buku  : " <<  buku[x].kategori << endl;
	            categoryFound = true;
		}	
	}
	 if (!categoryFound) {
            cout << "Mohon Maaf Kategori Belum pernah ditambahkan/Salah penulisan!" << endl;
        }
	}else{
	  	cout << "Mohon Maaf Buku Belum pernah ditambahkan!" << endl;
	  }
     cout << "======================================================================================" << endl;   
 

}
 
};


int main (){
 PenjualanBuku buku;
 return 0;	
}



