#include<iostream>

using namespace std;

class Person{
	public:
	 string name;
	 int age;
	 void displayInfo(){
	   cout << "Nama       : " << this->name << endl;
	   cout << "Umur       : " << this->age << endl;   	
	 }
};

class Student : public Person{
	public:
	  float grade;
	  string studentID;
	  void displayStudentInfo(){
	  	displayInfo();
	  	cout << "StudentID  : " << this->studentID << endl;
	    cout << "Grade      : " << this->grade << endl;  
	  }	
};

int main(){
	Person person[2];
	Student student[2];
	cout<<"========================= Menggunakan Class Person =========================" << endl;
	person[0].name = "Christama Ezra Yudianto";
	person[0].age = 18;
	person[1].name = "Tiffany Geraldine Hariyadi";
	person[1].age = 18;
	for(int i = 0; i <= 1;i++){
		person[i].displayInfo();
	}
	cout << "==========================================================================" << endl;
	cout<<"========================= Menggunakan Student Class ========================" << endl;
	student[0].name = "Christama Ezra Yudianto";
	student[0].age = 18;
	student[0].studentID = "121213149584214";
	student[0].grade = 88.78;
	student[1].name = "Tiffany Geraldine Hariyadi";
	student[1].age = 18;
	student[1].studentID = "2912482382423";
	student[1].grade = 85.78;
	for(int i = 0; i <= 1;i++){
		student[i].displayStudentInfo();
	}
	cout << "==========================================================================" << endl;
}
