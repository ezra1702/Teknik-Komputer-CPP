#include <iostream>

using namespace std;

struct Mahasiswa{
	string nama,nim;
};

int main (){
	Mahasiswa mhs;
	mhs.nama = "Ezra";
	mhs.nim = "1212121";
	cout << mhs.nama << endl;
	cout << mhs.nim << endl;
  return 0;	
}
