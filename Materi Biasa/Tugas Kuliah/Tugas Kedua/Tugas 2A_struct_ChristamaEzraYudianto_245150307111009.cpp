#include<iostream>

using namespace std;

struct dataMahasiswa {
	string namaMahasiswa;
	long long nimMahasiswa;
	string jkMahasiswa;
	float ipkMahasiswa;
};

struct rankMahasiswa {
	string namaMahasiswa;
	long long nimMahasiswa;
	string jkMahasiswa;
	float ipkMahasiswa;
};

int main (){
	const int mhs = 15;
	dataMahasiswa mahasiswa[mhs];
	for(int i = 0; i < mhs; i++ ){
		cout << "Masukan Nama Mahasiswa ke-" << i+1 << " : ";
		cin >> mahasiswa[i].namaMahasiswa; 
		cout << "Masukan Nim Mahasiswa ke-" << i+1 << " : ";
		cin >> mahasiswa[i].nimMahasiswa;
		cout << "Masukan Jenis Kelamin ke-" << i+1 << " : ";
		cin >> mahasiswa[i].jkMahasiswa;
		cout << "Masukan Ipk Mahasiswa ke-" << i+1 << " : ";
		cin >> mahasiswa[i].ipkMahasiswa;
	}
	rankMahasiswa rankMahasiswa[3];
	for(int i = 0; i < mhs; i++){
	 for(int j =0; j < 3; j++){
	  	if(mahasiswa[i].ipkMahasiswa > rankMahasiswa[j].ipkMahasiswa){
	        for (int k = 2; k > j; k--){
	        	rankMahasiswa[k] = rankMahasiswa[k-1];
			}
			    rankMahasiswa[j].namaMahasiswa = mahasiswa[i].namaMahasiswa;
                rankMahasiswa[j].nimMahasiswa = mahasiswa[i].nimMahasiswa;
                rankMahasiswa[j].jkMahasiswa = mahasiswa[i].jkMahasiswa;
                rankMahasiswa[j].ipkMahasiswa = mahasiswa[i].ipkMahasiswa;	
				break;	
		 }
	 }
	}
	
	for (int i = 0; i < 3; i++) {
       cout << "=======================================" << endl;
       if(i == 0){
       	 cout << "Peringkat Pertama" << endl;
	   }else if(i == 1){
	   	 cout << "Peringkat Kedua" << endl;
	   }else if(i == 2){
	   	 cout << "Peringkat Ketiga" << endl;
	   }
       cout << "Nama Mahasiswa : " << rankMahasiswa[i].namaMahasiswa << endl;
       cout << "Nim Mahasiswa  : " << rankMahasiswa[i].nimMahasiswa << endl;
       cout << "Jenis Kelamin Mahasiswa " << " : " << rankMahasiswa[i].jkMahasiswa << endl;
       cout << "IPK Mahasiswa " << i+1 << " : " << rankMahasiswa[i].ipkMahasiswa << endl;
       cout << "=======================================" << endl;
    }
	
	return 0;
}
