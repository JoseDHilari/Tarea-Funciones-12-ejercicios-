#include<iostream>
#include<conio.h>
using namespace std;

void nummulti(int, int);

int main(){
	int x, y;
	
	cout<<"Digite los numeros: ";
	cin>>x>>y;
	
	nummulti(x,y);
	
	getch();
	return 0;
}

void nummulti(int x, int y){
	int z;
	z = x;
	cout<<"Todos los numeros enteros desde "<<z<<" hasta el entero "<<y<<", que son multiplos de "<<z<<endl;
	for(int i=x; i<=y; i++){
		if(i%z==0){
			cout<<i<<" ";
		}
	}
}