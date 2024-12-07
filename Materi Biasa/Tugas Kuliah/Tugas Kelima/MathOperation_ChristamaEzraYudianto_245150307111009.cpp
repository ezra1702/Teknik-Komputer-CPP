#include<iostream>

using namespace std;

class MathOperation {
	public:
		void add(int a, int b){
			cout << "Hasilnya dari penjumblahan menggunakan integer : " << a + b << endl;
		}
        void add(double a, double b){
			cout << "Hasilnya dari penjumblahan menggunakan  double : " << a + b << endl;
		}	
		void add(string a, string b){
	       		cout << "Hasilnya dari penjumblahan penggabungan string : " << a << b << endl;	
		}
};


int main(){
	MathOperation math;
	math.add(12,13);
	math.add(11.00,8.67);
	math.add("Teknik", " Pertambangan");
}




