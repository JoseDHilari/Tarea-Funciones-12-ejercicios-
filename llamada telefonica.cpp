#include<iostream>
#include<conio.h>
using namespace std;
//prototipo de la funcion
int costo_llamada(int clave,int minu);

int main(){
	int clave, minu;
	cout<<"Introduzca la clave y el numero de minutos de llamada: ";
	cin>>clave>>minu;
	
	costo_llamada(clave,minu);
	
	getch();
	return 0;
}
//la funcion
int costo_llamada(int clave,int minu){
	float saldo_llamada;
	if(clave==12){
		saldo_llamada = minu * 2;
		cout<<saldo_llamada;
	}else{
		if(clave==15){
			saldo_llamada = minu * 2.2;
			cout<<saldo_llamada;
		}else{
			if(clave==18){
				saldo_llamada = minu * 4.5;
				cout<<saldo_llamada;
			}else{
				if(clave==19){
					saldo_llamada = minu * 3.5;
					cout<<saldo_llamada;
				}else{
					if(clave==23){
						saldo_llamada = minu * 6;
						cout<<saldo_llamada;
					}else{
						if(clave==25){
							saldo_llamada = minu * 6;
							cout<<saldo_llamada;
						}else{
							if(clave==29){
								saldo_llamada = minu * 5;
								cout<<saldo_llamada;
							}else{
								cout<<"\nError de destino :(";
							}
						}
					}
				}
			}
		}
	}
	return saldo_llamada;
}