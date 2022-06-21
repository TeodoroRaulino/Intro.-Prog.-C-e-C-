#include <iostream>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

#define MAX 4//Número de iterações

double f(double x) {
	return (pow(x, 3) - 9*x + 5);//Função
}
double calculaX2(double x0,double x1){
    double x2;
    x2 = x1-(f(x1)/(f(x1)-f(x0)))*(x1-x0);
    return x2;
}

int main(void) {
  float tempo;
  time_t t, tf;
  t= time(NULL);
	int k;
    double x0=0.5, x1=1, e1=0.0001, erro=0.0001;//intervalos e erro
    double xbarra, x2;
    if (fabs(f(x0))<e1){
    	xbarra  = x0;
    	return 0;
    }
    if (fabs(f(x1))<e1){
    	xbarra  = x1;
    	return 0;
    }
    k = 1;
    while (k <= MAX) {
        cout<< fixed << setprecision(5);
        cout<<"F(x0):"<<f(x0)<<" |F(x1):"<<f(x1)<<"\n";
    	x2 = calculaX2 (x0, x1);
        cout<< fixed << setprecision(5);
        cout<<"x2:"<<x2<<" |f(x2):"<<f(x2)<<"\n";
        if(fabs(f(x0))<e1||fabs(x1-x0)<erro){
        	xbarra = x2;
        	return 0;
        }
        x0 = x1;
        x1 = x2;
        k+=1;
    }

  tf= time(NULL);

  tempo = difftime(t,tf);
  cout << "tempo de processamento" << tempo << endl;

	return 0;
}

