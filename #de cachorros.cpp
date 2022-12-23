#include<iostream>
using namespace std;

int VarC, VarP, VarH, PeAd, ToPer;

void Datos()
{
	cout<<"Cuantos cachorros dio a luz el perro de Don Pancho?"<<endl;
    cin>>VarC;
    cout<<"Cuantos cachorros planea quedarse Don Pancho?"<<endl;
    cin>>VarP;
    cout<<"Cuantos hijos tiene Don Pancho?"<<endl;
    cin>>VarH;	
}
//corroborar la valicez de los datos e imprimimos la respuesta
void Resul()
{
	if(VarP>VarC) {
        cout<<"Los datos no coinciden, revise e intente de nuevo";
    }
    else {
        VarH=VarH+1;
        PeAd=((VarC-VarP)%VarH);
        ToPer=VarP+PeAd;
        cout<<"El total de perritos que se llevara Don Pancho es: "<<ToPer;
    }
}
int main()
{
    
	Datos();
	Resul();
	
    return 0;
}
