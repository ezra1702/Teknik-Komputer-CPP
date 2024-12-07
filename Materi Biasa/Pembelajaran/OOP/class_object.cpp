#include<iostream>
#include<vector>
using namespace std;

class Mobil{
	public:
		string merek;
		string model;
		int kecepatan;
	void tampilkanInfo() {
	   cout << "Nama Merek : " << this->merek  << " Nama Model : " << this->model << endl;
	}
	void kecepatanInfo(int kecepatan){
		this->kecepatan  += kecepatan; 
		cout << "Kecepatan : "<< kecepatan << endl;
	}
};

int main(){
	vector<Mobil> mobil;
	mobil.push_back({"Honda","HondaJazz",10});
	mobil.push_back({"Toyota","Yariz",0});
	
	for(int x = 0; x < mobil.size(); x++){
		mobil[x].tampilkanInfo();
		mobil[x].kecepatanInfo(x);
	}
}


