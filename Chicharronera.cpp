#include<iostream>
#include<math.h>
using namespace std;
int VarA, VarB, VarC, Sol1, Sol2;

void Datos(){
	cout<<"Ingrese el término cuadratico"<<endl;
	cin>>VarA;
	cout<<"Ingrese el término lineal"<<endl;
	cin>>VarB;
	cout<<"Ingrese el término independiente"<<endl;
	cin>>VarC;
}

void Solu(){
	Sol1=((-VarB)+(pow((VarB^2)-(4*VarA*VarC),0.5)))/(2*VarA);
	Sol2=((-VarB)-(pow((VarB^2)-(4*VarA*VarC),0.5)))/(2*VarA);
	cout<<"Las soluciones de la ecuación son: "<<Sol1<<" y "<<Sol2;
	
}
int main()
{
	Datos();
	Solu();

    return 0;
}
