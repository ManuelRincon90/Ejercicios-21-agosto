#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int aleatorio (){
	return rand()%26;
}

int main(){

	srand(time(0));
	
	int array [10];
	
	int *puntero = array;
	
	for (int i=0; i<10; i++){
		
		array[i] = aleatorio();
	
	}
	
	for (int i=0; i<10; i++){
		cout << "Valores en array[" << i << "] = " << *puntero++ << "\t Direcciones: " << puntero << endl;
	}
	
	return 0;
}
