#include<iostream>

using namespace std;

class BankAccount{
	private:
		long long balance;
	public:
		void deposit(long long balance){
			this->balance += balance;
			cout << "Saldo sebesar "<< balance << " berhasil ditambahkan" << endl;
		}
		void withDraw(long long balance){
			if(this->balance >= balance){
			    this->balance -= balance;
			    cout << "Saldo sebesar "<< balance << " berhasil ditarik" << endl;
			}else{
				cout << "Saldo sebesar "<< balance << " tidak berhasil ditarik" << endl;

			}
		}
		void getBalance(){
			cout << "Saldo saat ini : " << balance << endl;
		}
};

int main(){
	BankAccount account;
	cout << "===================================================" << endl;
	account.withDraw(100000);
	cout << "===================================================" << endl;
	account.getBalance();
	cout << "===================================================" << endl;
	account.deposit(15000000);
	cout << "===================================================" << endl;
	account.getBalance();
	cout << "===================================================" << endl;
	account.withDraw(100000);
	cout << "===================================================" << endl;
	account.getBalance();
	cout << "===================================================" << endl;
}
