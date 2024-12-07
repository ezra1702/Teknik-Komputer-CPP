#include<iostream>

using namespace std;

class Construtor {
	private:
		string name;
		string position; 
	public:
	// Default Constructor
		Construtor(){
			name = "name";
			position = "position";
		    cout << "Default Constructor called" << endl;
		}
	// Parameter Constructor
	    Construtor(string name, string position){
	    	this->name = name;
	    	this->position = position;
	    	cout << "Paraneter Constructor called" << endl;
		}
	// Parameter Copy
	    Construtor(const Construtor &constr){
	    	this->name = constr.name;
	    	this->position = constr.position;
			cout << "Parameter Copy called" << endl; 
			cout << "Nama : " << this->name << endl;
			cout << "Position : " << this->position << endl;
		} 
};

int main (){	
    Construtor Construtor1;
    Construtor Construtor2("Ezra", "Chef Engginering");
    Construtor Constructor3 = Construtor2;
}
