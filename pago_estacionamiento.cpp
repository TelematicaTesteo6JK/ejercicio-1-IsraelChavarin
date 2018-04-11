#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
	*****Recordar que como se tiene mayor que 10 como límite (indefinido), se definió en clase 24 como límite superior  
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES Equivalence Partitioning" << endl;
	cout << endl;

	int arrayE [5] = { -10, 3, 9, 21, 58};
	int arrayE2 [5] = { -1, 30, 81, 147, 406}; //-1 = Error
	int resE [5];
	string resE2 [5];

	cout << "Test data:"	 << " " << arrayE[0] << " " << arrayE[1] <<" " << arrayE[2] <<" " << arrayE[3] <<" " << arrayE[4] << endl;
	
	cout << "Expected result:" <<" " << arrayE2[0] <<" " << arrayE2[1] <<" " << arrayE2[2] <<" " << arrayE2[3] <<" " << arrayE2[4] << endl;
	
	for(int i = 0; i<5; i++){
		resE[i]=pago_estacionamiento(arrayE[i]);
		if(arrayE2[i] == resE[i]){
			resE2[i] = "Pass";
		}
		else
		resE2[i] = "Fail";
	}

	cout << "Actual result:" <<" "	<< resE[0] <<" " << resE[1] <<" " << resE[2] <<" " << resE[3] <<" " << resE[4] <<" " << endl;
		
	cout << "Pass/Fail:" <<" "  << resE2[0] <<" " << resE2[1] <<" " << resE2[2] <<" " << resE2[3] <<" " << resE2[4] <<" " << endl;
	
	cout << endl;
	
	
	
	
	cout << "TEST CASES Boundary Value Analysis" << endl;
	cout << endl;
	
	int arrayB [8] = { 0, 1, 5, 6, 10, 11, 24, 25}; 
	int arrayB2 [8] = { -1, 10, 50, 54, 90, 77, 168, -1}; //-1 = Error
	int resB [8];
	string resB2 [8];
	
	cout << "Test data:"	 << " " << arrayB[0] << " " << arrayB[1] <<" " << arrayB[2] <<" " << arrayB[3] <<" " << arrayB[4] <<" " << arrayB[5] <<" " << arrayB[6] <<" " << arrayB[7] << endl;
	
	cout << "Expected result:" << " " << arrayB2[0] << " " << arrayB2[1] <<" " << arrayB2[2] <<" " << arrayB2[3] <<" " << arrayB2[4] <<" " << arrayB2[5] <<" " << arrayB2[6] <<" " << arrayB2[7] << endl;
	
	for( int i = 0; i < 8; i++) {
      resB[i]=pago_estacionamiento(arrayB[i]);
	  if(arrayB2[i] == resB[i]){
			resB2[i] = "Pass";
		}
		else
		resB2[i] = "Fail";
   	}

    cout << "Actual result:" <<" "	<< resB[0] <<" " << resB[1] <<" " << resB[2] <<" " << resB[3] <<" " << resB[4] <<" " << resB[5] <<" " << resB[6] <<" " << resB[7] << endl;
		
	cout << "Pass/Fail:" <<" "  << resB2[0] <<" " << resB2[1] <<" " << resB2[2] <<" " << resB2[3] <<" " << resB2[4] <<" " << resB2[5] <<" " << resB2[6] <<" " << resB2[7] << endl;
	
	cout << endl;

}

int main()
{
	
    casos_de_prueba();

	return 0;
}
