#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int dias[5];

int main() {
	int horas, horasT, sueldo, sueldoT;
	horasT=0;
	
	for(int i=0; i<5; i++){
		
		cout << "Ingrese horas dia: " << i+1 << endl;	
		cin >> horas;
		dias[i] =horas;
		
		horasT= horasT + dias[i];
		
	}
	
	cout << "Ingrese sueldo(horas): " << endl;
	cin >> sueldo;
	
	sueldoT= horasT * sueldo;
	
	cout << "Sueldo total: " << sueldoT;
	
	
	
	return 0;
}
