#include<iostream>
using namespace std;

class Kendaraan{
public:
    int kecepatan = 0; 
    void jalan(int v){
        this->kecepatan = v;
        cout<<"Kendaraan berjalan dengan kecepatan: "<<kecepatan<<endl;
    }
};

class Mobil : public Kendaraan{
public:
    void klakson(){
        cout<<"tolelot"<<endl;
    }
};

int main(){
    Mobil myCar;
    myCar.jalan(20);
    myCar.klakson();
}