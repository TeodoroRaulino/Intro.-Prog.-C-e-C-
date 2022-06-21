#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

int n,i,j;
double a, b;
cout<<"Digite a quantidade de pontos: "<<endl;
cin>>n;  //definir o número de pontos

double x[n],y[n];
double yx = 0, qdd =0, sq = 0;
double sx = 0, sy = 0;
	
	for(i=0;i<n;i++){
	cout<<"Digite x e y: "<<endl;
	cin>>x[i];
	cin>>y[i];
}

	for (i=0;i<n;i++){
	yx += x[i]*y[i];
	sx += x[i];
	sy += y[i];
	sq += pow(x[i], 2);
		
}
 a= ((n*yx)-(sx*sy))/((n*sq)-pow(sx, 2));

 b=(sy/n)-(a*(sx/n));


cout<<"Valor de alpha: "<<a<<endl;
cout<<"Valor de beta: "<<b<<endl;
	

    return 0;
}