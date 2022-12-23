#include<iostream>
using namespace std;

int f, c;
float Mat[100][100];

void InDa(float Mat[100][100]){
	cout<<"Ingrese el numero de casos de prueba"<<endl;
	cin>>f;
	int Vec[f];
	
	for(int i=1;i<=f;i++){
		cout<<"ingrese cuantos valores tendra este caso"<<endl;
		cin>>c;
		for(int j=1;j<=c;j++){
			cin>>Mat[i][j];
		}
		for(int k=1;k<=c;k++){
			if(Mat[i][1]!=Mat[i][k+1]&&Mat[i][1]!=Mat[i][k+2]){
				Vec[i]=1;
				k=c+1;
			}
			else if(Mat[i][1]!=Mat[i][k+1]&&Mat[i][k+1]!=Mat[i][k+2]){
				Vec[i]=k+1;
				k=c+1;
			}
			else if(Mat[i][c]!=Mat[i][c-1]&&Mat[i][c]!=Mat[1][c-2]){
				Vec[i]=c;
				k=c+1;
			}
		}
		
	}
	for(int l=1;l<=f;l++){
		cout<<Vec[l]<<" ";
	}
	
}

int main(){
	float Mat[100][100];	
	int f, c;
	
	InDa(Mat);
	
	return 0;
}
