#include<iostream>

using namespace std;

class Vehicle {
    public:
    	virtual void move(){
    		cout << "Vehicle ready to use!" << endl;
	  }
};

class Car : public Vehicle {
	public :
	  void move() override{
    		cout << "The car drives on the road." << endl;
	  }
};

class Boat : public Vehicle {
	public :
	  void move() override{
    		cout << "The boat sails on the water." << endl;
	  }
};

int main(){
	Vehicle* vehicle[2];
	Car car;
	Boat boat;
	
	vehicle[0] = &car;
	vehicle[1] = &boat;
	
	vehicle[0]->move();
	vehicle[1]->move();
	
}
