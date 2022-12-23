#include<iostream>
using namespace std;
int Exa, Asis, Tar, NoFi;

void Datos()
{
	cout<<"Ingrese las 3 notas en orden, examenes, asistencia y tareas"<<endl;
	cin>>Exa;
	cin>>Asis;
	cin>>Tar;
}

void Rpta()
{
	NoFi=((Exa*0.6)+(Asis*0.2)+(Tar*0.2));
	cout<<"Calificación final del estudiante: "<<NoFi;
}

int main()
{
	Datos();
	Rpta();

    return 0;
}
