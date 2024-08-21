#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct factura{
	string nombre;
	int cedula;
	int cantidad;
	double precio;
	string nombreProducto;
};

//Funcion para impresion en pantalla hacia un fichero
void ImpresionFichero(factura *p){
	
	ofstream nFichero ("FacturaFichero.txt");
	
	//Comprobacion de que el fichero esta abierto
	if (nFichero.is_open()){
	
		nFichero << endl << endl;
		nFichero << "Cliente: " << (*p).nombre << endl;
		nFichero << "Cedula: " << (*p).cedula << endl;
		nFichero << "Producto: " << (*p).nombreProducto << endl;
		nFichero << "Cantidad: " << (*p).cantidad << endl;
		nFichero << "Precio: " << (*p).precio << endl;
		nFichero << "Valor a pagar: " << (*p).cantidad * (*p).precio << endl;
		
		//se cierra el archivo
		nFichero.close();
	}
	
	else
		cout << "Fallo al abrir el fichero" << endl;
}

int main(){

	factura objetoFacturas;
	*puntero = objetoFacturas;
	
	
	//captura de datos
	cout << "Ingrese el nombre del cliente: ";
	cin >> (*puntero).nombre;
	cout << "Ingrese la cedula del cliente: ";
	cin >> (*puntero).cedula;
	cout << "Ingrese el nombre el producto: ";
	cin >> (*puntero).nombreProducto;
	cout << "Ingrese la cantidad del producto: ";
	cin >> (*puntero).cantidad;
	cout << "Ingrese el precio del producto: ";
	cin >> (*puntero).precio;
	
	ImpresionFichero(&objetoFacturas);
	
	
	
	
	return 0;
}
