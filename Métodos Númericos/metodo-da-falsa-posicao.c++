#include <iostream>
#include <math.h>
#include <ctime>
#include <iomanip>
using namespace std;

double funcao(float x);
double getErro(float ant, float atual);

int main(){
    float tempo;
    time_t t, tf;
    t= time(NULL);
    double a, b, c, e, fa, fb, fc, ant, erro = 1;   int nInteracoes = 0;
    a = 0.5; b = 1; //Intervalo
    c = 0;
    e = 0.0001;
    fa = funcao(a); fb = funcao(b); fc = funcao(c);
    if(funcao(a)*funcao(b)<0){
        while (e < erro) {
            nInteracoes++;
             ant = c;
             cout<<"\nInteracao n: "<<nInteracoes<<"\n"; 
             c = b - (funcao(b)*(a - b)/(funcao(a)-funcao(b))); //determinação do elemento central
            erro = getErro(ant,c);
            cout<< fixed << setprecision(5);
            cout<<"a+: "<<a<<"| b-: "<<b<<"| x: "<<c<<"| f(a): "<<fa<<"| f(b): "<<fb<<"| f(x): "<<fc<<"| erro: "<<erro << endl;
          if(funcao(a)*funcao(c) > 0){
                a = c;
            }
            else{
                b = c;
            }
        }
    }
    
    tf= time(NULL);

    tempo = difftime(t,tf);
    cout << "tempo de processamento: " << tempo << endl;

    return 0;
}
//determina e retorna o valor da funcao.
double funcao(float x){
    return (pow(x, 3) - 9*x + 5); //funcao
};
//determina e retorna o valor do erro relativo.
double getErro(float ant, float atual){
    return (abs((atual - ant)));
}
