#include <iostream>
#include <ctime>


using namespace std;


int main() {
	
	srand (time(NULL));
	
	int tab[100][100];

	for (int i = 0; i < 100; i++) {

		for (int j = 0; j < 100; j++) {
			tab[i][j] = rand() % 10 + 10;
			//cout << &tab[i][j] << " ";

		}

	//	cout << endl;
	}

	cout << "koniec";
}