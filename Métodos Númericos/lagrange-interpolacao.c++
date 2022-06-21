#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int n;
double x[10],y[10];
double v[10], result, vx;

void ld(){
int i;
cout<<"Digite a quantidade de pontos: "<<endl;
cin>>n;  //definir o número de pontos

for(i=0;i<n;i++){
    cout<<"Digite x e y: "<<endl;
	cin>>x[i];
	cin>>y[i];
}
}

double Lagrange (double vx){
	int i,j;
	double num, den, p=0;

	for (i=0;i<n;i++){
	num=1;
	den=1;
	for(j=0;j<n;j++){
	if(j!= i){
		num*= vx - x[j];
		den*= x[i] - x[j];
	}
}
 p+=(num*y[i])/den;
}
	return p;
}

int main (){
	ld();
		cout<<"Digite o valor de vx: "<<endl;
		cin>>vx;  
		result= Lagrange (vx);

		cout<<"Valor interpolado: "<<endl;
		cout<<"p "<<vx<<"  resultado "<<result<<endl;
	
	return 0;
}