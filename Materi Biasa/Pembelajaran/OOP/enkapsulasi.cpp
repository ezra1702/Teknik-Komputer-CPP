#include<iostream>
using namespace std;

class Mahasiswa{
private:
    string nama;
    int umur;
public:
    void setNama(string n){
        nama = n;
    }
    string getNama(){
        return nama;
    }
    void setUmur(int u){
        umur = u;
    }
    int getUmur(){
        return umur;
    }
};

int main(){
    Mahasiswa mhs1;
    mhs1.setNama("John");
    mhs1.setUmur(17);

    cout<<"Nama: "<<mhs1.getNama()<<endl;
    cout<<"Umur: "<<mhs1.getUmur()<<endl;
    return 0;
}