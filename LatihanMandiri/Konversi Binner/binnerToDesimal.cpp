#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

 int BinarytoDecimal(long long num) {
    vector<int> digits;
    int dec = 0;
    
    while (num > 0) {
        digits.push_back(num % 10);  
        num /= 10;                   
    }
    reverse(digits.begin(), digits.end());  
    
   for(int x = digits.size() - 1;x >= 0;x--){
   	   if (digits[x] == 1) {  
            dec += pow(2, digits.size() - 1 - x); 
        }
   }
   return dec;
}

int main() {
	long long num = 0;
	cout << "Masukan Angka Binner yang mau dihitung : ";
	cin >> num;
    cout<< BinarytoDecimal(num);
    
    
    return 0;
}

