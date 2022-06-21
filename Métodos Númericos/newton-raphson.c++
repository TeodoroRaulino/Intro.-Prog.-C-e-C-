#include <iostream>
#include <math.h>
#include <ctime>
#include <iomanip>
using namespace std;

double getFx(double x);
double getdFx(double x);

int main(){
    float tempo;
    time_t t, tf;
    t= time(NULL);
    double xk, xk2, fx, dfx, erro = 1;
    int nIteracoes = 0;
    xk = 0.75; //Intervalo
    fx = getFx(xk); dfx = getdFx(xk);
    while(erro>0.001){
        nIteracoes++;
        xk2 = xk - (fx/dfx);
        erro = abs((xk2 - xk)/xk2);
        cout<<"Interacao n: "<<nIteracoes<<"\n";
        cout<< fixed << setprecision(5);
        cout<<"xk:"<<xk<<" |x:"<<xk2<<" |f(xk):"<<fx<<" |f'(xk):"<<dfx<<" |f(x):"<<getFx(xk2)<<" |erro:"<<erro<<"\n";
        xk = xk2; fx = getFx(xk); dfx = getdFx(xk);
    }
    
    tf= time(NULL);

    tempo = difftime(t,tf);
    cout << "tempo de processamento: " << tempo << endl;
    
    return 0;
}

double getFx(double x){
    return (pow(x, 3) - 9*x + 5); //Funcao
}
double getdFx(double x){
    return (3*pow(x, 2) - 9); //Derivadad a funcao
}


