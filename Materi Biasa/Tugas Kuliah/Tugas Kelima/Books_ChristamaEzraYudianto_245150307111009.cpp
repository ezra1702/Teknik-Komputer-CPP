#include<iostream>

using namespace std;

class Book{
	public:
		string title,author;
		double price;
	 Book(){
		this->title = "Unknown";
		this->author = "Unknown";
		this->price = 0.0;
	 }
	 Book(string title, string author, double price){
	 	this->author = author;
	 	this->title = title;
	 	this->price = price;
	 }
	 Book(const Book &bk ){
	 	this->author = bk.author;
	 	this->title = bk.title;
	 	this->price = bk.price;
	 }
	 void displayDetails(){
	 	 cout << "===============================================================" << endl;
	 	 cout << "Title  : " << this->title << endl;
	 	 cout << "Author : " << this->author << endl;
	 	 cout << "Price  : " << "Rp." << this->price << ",00" <<endl;
	 	 cout << "===============================================================" << endl;
	 }
};

int main() {
    Book books[3] = {
        Book("Crypto Trading Strategies for All Markets", "Christama Ezra Yudianto", 80000),
        Book("AI-Driven Innovations in Mining and Mineral Processing", "Abdillah Fatah Suryawan", 100000),
        Book("A Beginner's Guide to Financial Success", "Angelina Euginia Sukowijoyo", 750000)
    };

    Book Copied[3];
    for (int x = 0; x < 3; x++) {
        Copied[x] = books[x];
    }

    for (int x = 0; x < 3; x++) {
        Copied[x].displayDetails();
    }

    return 0;
}
