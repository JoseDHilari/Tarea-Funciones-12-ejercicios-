#include<iostream>
#include<conio.h>
using namespace std;

void salida(int,int,int);

int main(){
	int met, sub, res;
	cout<<"Digite la profundidad del pozo: ";
	cin>>met;
	cout<<"Introduzca cuantos metros avanza en el dia: ";
	cin>>sub;
	cout<<"Introduzca cuantod metros resbala por la noche: ";
	cin>>res;
	
	salida(met, sub, res);
	
	getch();
	return 0;
}

void salida(int met,int sub,int res){
	int dias=1, s_i;
	s_i=sub;
	if(met > 1 && sub > 1 && res > 1 && met < 1000000 && sub < 1000000 && res < 1000000){
	
		while(sub<=met){
			sub = sub - res;
			if(sub>res){
				sub = sub + s_i;
			}
			dias++;
		}
		cout<<dias<<" Dias";	
	}else{
		cout<<endl;
		cout<<"Error de digitacion, no me malogres :(";
	}
}