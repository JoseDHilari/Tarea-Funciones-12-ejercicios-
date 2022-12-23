#include<iostream>
using namespace std;

	//corregir el orden de la suma para funcion decreciente
	const int f=4, c=2;
	float pend1, pend2, x, y;
	int Nme1, Nme2, Nma1, Nma2, Nmen, Nmay;
	
	//funcion para ingresar las cordenadas
	void InDa(float Matr[f][c])
	{
		cout<<"ingrese las codenadas de los puntos de cada segmento: "<<endl;
		for(int i=0;i<f;i++){
			for(int j=0;j<c;j++){
				cin>>Matr[i][j];
			}
		}
	}
	//funcion para calcular los valores de "x" y "y" (punto de intersecion de las funciones)
	void Calcu(float Matr[f][c])
	{
		pend1=(Matr[1][1]-Matr[0][1])/(Matr[1][0]-Matr[0][0]);
		pend2=(Matr[3][1]-Matr[2][1])/(Matr[3][0]-Matr[2][0]);
		x=((Matr[0][0]*pend1)-(Matr[0][1])-(Matr[2][0]*pend2)+(Matr[2][1]))/(pend1-pend2);
		y=(pend1*(x-Matr[0][0]))+Matr[0][1];
	}
	//funcion para calcular los limites de las rectas en funcion de los segmentos formados por los puntos
	void Limites(float Matr[f][c])
	{
		if(Matr[1][0]<=Matr[0][0]){
			Nme1=Matr[1][0];
			Nma1=Matr[0][0];
		}	
		else{
			Nme1=Matr[0][0];
			Nma1=Matr[1][0];
		}
		
		if(Matr[2][0]<=Matr[3][0]){
			Nme2=Matr[2][0];
			Nma2=Matr[3][0];
		}	
		else{
			Nme2=Matr[3][0];
			Nma2=Matr[2][0];
		}
	
		if(Nme1>=Nme2){
			Nmen=Nme1;
		}	
		else{
			Nmen=Nme2;
		}
	
		if(Nma1<=Nma2){
			Nmay=Nma1;
		}	
		else{
			Nmay=Nma2;
		}
	}
	//funcion que comprueba e imprime en pantalla el resultado
	void Most(float Matr[f][c])
	{
		if(x>=Nmen){
			if(x<=Nmay){
				cout<<x<<"  "<<y;	
			}
			else{
				cout<<"-1  -1";
			}
		}
		else{
			cout<<"-1  -1";
		}
	}
	

int main(){
	float Ma[f][c];
	
	InDa(Ma);
	Calcu(Ma);
	Limites(Ma);
	Most(Ma);
		
	return 0;
}
