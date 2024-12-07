#include<iostream>
#include<vector>
using namespace std;

class Mahasiswa{
 private:
   	 string nama;
   	 string prodi;
   	 int semester;
 public:
 	void setMahasiswa(string nama, string prodi, int semester){
 		this->nama = nama;
 		this->prodi = prodi;
 		this->semester = semester;
	 }
	 void getMahasiswa(){
	 	cout << "Nama Mahasiswa : " << this->nama << endl;
	 	cout << "Nama Prodi : " << this->prodi << endl;
	 	cout << "Semester : " << this->semester << endl;
	 }
};

int main() {
 Mahasiswa ary[3];
 ary[0].setMahasiswa("Ezra", "Teknik Perminyakan",1);
 ary[1].setMahasiswa("Abdi", "Teknik Mesin",1);
 ary[2].setMahasiswa("Tiffany", "Sains Data ",1);

 for(int x = 0; x <= 2;x++){
 	ary[x].getMahasiswa();
 }
  
 
}
