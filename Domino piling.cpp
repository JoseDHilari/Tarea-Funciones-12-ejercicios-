#include<iostream>
using namespace std;

int num, m, n;

void Datos()
{
	cout<<"ingrese las medidas del tablero"<<endl;
	cin>>m>>n;
}
void Cal()
{
	num=(m*n)/2;
	cout<<"se pueden poner: "<<num<<" fichas de domino";
}

int main(){
	Datos();
	Cal();
	
	return 0;
}
