#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int const c = 2;


void MaCoord(int f){
	
	float dis, a, sum=0;
	int Matriz[f][c];
	int b;
	cout<<"Ingrese las cordenadas de los puntos"<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cin>>Matriz[i][j];
		}
	}
	
	for(int j=1;j<f;j++){
		//Hallando la distancia entre los puntos (teorema de pitagoras)
		dis=sqrt(pow(Matriz[j][0]-Matriz[j][1],2)+pow(Matriz[j][0]-Matriz[j][1],2));
		sum=sum+dis;
	}
	cout<<"La suma de las distancias es: "<<setprecision(2)<<fixed<<sum;
}

int main(){
	
	int f;
	cout<<"ingrese el total de puntos"<<endl;
	cin>>f;
	MaCoord(f);
	
	return 0;
}
