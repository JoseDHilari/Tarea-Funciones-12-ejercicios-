#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void porcentaje(int);

int main(){
	int n;
	cout<<"Digite la cantidad de bebidas hay en el refrigerador: ";
	cin>>n;
	
	porcentaje(n);
	
	getch();
	return 0;
}

void porcentaje(int n){
	float Por, p=0, n_i;
	
	for(int i = 1; i<=n; i++){
		cout<<"Digite la cantidad de volumen de bebidas sacadas: ";
		cin>>n_i;
		p = p + n_i;
	}
	Por = p/n;
	cout<<"El porcentaje de volumen de jugo de naranja en el coctel es de: "<<fixed<<setprecision(5)<<Por<<endl;
}