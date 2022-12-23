#include<iostream>
using namespace std;

	const int f=3, c=2;
	float pend1, pend2;
	
	//funcion para ingresar los datos
	void IngDat(float Matr[f][c])
	{
		cout<<"ingrese las codenadas de los  3 puntos: "<<endl;
		for(int i=0;i<f;i++){
			for(int j=0;j<c;j++){
				cin>>Matr[i][j];
			}
		}
	}
	//funcion para calcular la recta formada por 2 puntos en 2 agrupaciones distintas
	void Calcu(float Matr[f][c])
	{
		pend1=(Matr[1][1]-Matr[0][1])/(Matr[1][0]-Matr[0][0]);
		pend2=(Matr[2][1]-Matr[1][1])/(Matr[2][0]-Matr[1][0]);
	}
	//funcion para comprobar la ubicacion de los puntos en la recta e imprimir en pantalla la respuesta
	void Mostr(float Matr[f][c])
	{
		if(pend1==pend2){
			cout<<"S";
		}
		else{
			cout<<"N";
		}
	}
	
	int main(){
		float Ma[f][c];
		
		IngDat(Ma);
		Calcu(Ma);
		Mostr(Ma);
	
		return 0;
	}
