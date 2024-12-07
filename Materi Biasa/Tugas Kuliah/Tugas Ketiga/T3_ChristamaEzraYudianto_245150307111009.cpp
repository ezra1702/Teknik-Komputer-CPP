#include<iostream>

using namespace std;

class dbMahasiswa{
 public:
	string nama;
	string Nim;
	float IPK;	
    void tampilkanInfo (){
		cout << "Nama Mahasiswa : " << this->nama << endl;
		cout << "Nim Mahasiswa : " << this->Nim << endl;
		cout << "IPK Mahasiswa : " << this->IPK << endl;
   }	
    bool lulus(){
	 return this->IPK >= 2.75;
  }
};

int main(){
  dbMahasiswa mahasiswa[3];
  
  mahasiswa[0].nama = "Tiffany Geraldine Hariyadi";
  mahasiswa[0].Nim = "245141318217103";
  mahasiswa[0].IPK = 3.72;
  
  mahasiswa[1].nama = "Christama Ezra Yudianto";
  mahasiswa[1].Nim = "245150307111009";
  mahasiswa[1].IPK = 3.93;
  
  mahasiswa[2].nama = "Irmawan Supri Seno";
  mahasiswa[2].Nim = "2232322123232049";
  mahasiswa[2].IPK = 2.69;
  cout << "================================" << endl;
  for(int x = 0;  x < 3;x++){
  	  mahasiswa[x].tampilkanInfo();
  	  if(!mahasiswa[x].lulus()){
  	  	  cout << "Status : Lulus" << endl; 
	  }else{
	  	cout << "Status : Tidak Lulus" << endl;
	  }
	cout << "================================" << endl;
  }
  
  
  
	
}
