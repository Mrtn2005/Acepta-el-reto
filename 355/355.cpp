#include <iostream>

using namespace std;

void resolverCaso() {
    // Lee los datos de cada caso de prueba aquí
    int year;
    cin >> year;
	bool esBisiesto = false;
	if(year%100 == 0){
		if(year%400 == 0){
			esBisiesto = true;
		}
	}else if(year%4 == 0){
		esBisiesto = true;
	}
	
	if(esBisiesto){
		cout << "29" << endl;
	}else{
		cout << "28" << endl;
	}

}

int main() {
    // Optimización de la E/S estándar
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int numCasos;
    if (cin >> numCasos) {
        while (numCasos--) {
            resolverCaso();
        }
    }
    
    return 0;
}