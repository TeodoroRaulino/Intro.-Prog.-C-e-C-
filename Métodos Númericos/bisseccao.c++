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
    double a, b, c, fa, fb, fc, ant, erro = 0;   int nInteracoes = 1;
    a = 0.5; b = 1; //Intervalos.
    c = (a + b)/2;
    fa = funcao(a); fb = funcao(b); fc = funcao(c);
    cout<<"Interacao n: 1\n";
    cout<<"a+: "<<a<<"| b-: "<<b<<"| x: "<<c<<"| f(a): "<<fa<<"| f(b): "<<fb<<"| f(x): "<<fc<<"| erro: "<<erro;
    
    if(fc!=0){
        do{
            nInteracoes++;
            ant = c;
            if(fa*fc>=0){
                fa = fc; a = c;
            }
            else{
                fb = fc; b = c;
            }
            c = (a + b)/2; fc = funcao(c);
            erro = getErro(ant, c);
            cout<<"\nInteracao n: "<<nInteracoes<<"\n";
            cout<< fixed << setprecision(5);
              cout<<"a+: "<<a<<"| b-: "<<b<<"| x: "<<c<<"| f(a): "<<fa<<"| f(b): "<<fb<<"| f(x): "<<fc<<"| erro: "<<erro << endl;
        }while(erro>0.0001);
    }

    tf= time(NULL);

    tempo = difftime(t,tf);
    cout << "tempo de processamento: " << tempo << endl;
    
    return 0;
}
//determina e retorna o valor da funcao.
double funcao(float x){
    return (pow(x, 3) - 9*x + 5); //funcao utilizada.
};
//determina e retorna o valor do erro relativo.
double getErro(float ant, float atual){
    return (abs((atual - ant)/atual));
}
