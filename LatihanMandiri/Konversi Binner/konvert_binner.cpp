#include<iostream>
#include <vector>
using namespace std;

long long mengecek0(int n){
	int sisa = 0,i=0,ben = 0;
	vector<int> ary;
	
	while(n != 0){
		sisa = n % 2;
		n /= 2;
		ary.push_back(sisa);
	}
  for (int i = 0; i < ary.size(); i++) { 
        if (ary[i] == 0) { 
            ben++; 
        }
    }
	return ben;
}
long long mengecek1(int n){
	int sisa = 0,i=0,ben = 0;
	vector<int> ary;
	
	while(n != 0){
		sisa = n % 2;
		n /= 2;
		ary.push_back(sisa);
	}
	  for (int i = 0; i < ary.size(); i++) { 
        if (ary[i] == 1) { 
            ben++; 
        }
    }
	return ben;
}

long long binner_convert(int n){
	int sisa = 0,i=0;
	vector<int> ary;
	
	while(n >= 1){
		sisa = n % 2;
		n /= 2;
	    ary.push_back(sisa);
		i++;
	}
	
	for(int x = ary.size()-1; x > -1;x--){
		cout << ary[x];
	}
	
}

int main (){
   int n;
   cout << "Masukan Binner yang ingin dihitung : ";
   cin >> n;
   cout << "Binner yang dihasilkan : ";
   binner_convert(n);
   cout << endl;
   cout << "Nol yang dimiliki yaitu : " << mengecek0(n) << endl;
   cout << "Satu yang dimiliki yaitu : " << mengecek1(n) << endl;

   
}
