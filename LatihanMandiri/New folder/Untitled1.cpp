#include <iostream>
#include <algorithm> // Untuk fungsi sort()

using namespace std;

int main() {
    int urutan[] = {1, 31, 213, 94};
    int temp;
    int size = sizeof(urutan) / sizeof(urutan[0]);
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < size; i++) {
    	for(int j = 0; j < size - i- 1;j++){
    	 	if(urutan[j] > urutan[j+1]) {
    	 		temp = urutan[j]; //213
    	 		urutan[j+1]  = urutan[j];
    	 		temp = urutan[j];
		}
	  }
    }
    cout << endl;

    return 0;
}

