#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double funcao( double x ){

return(1/(1+x));

}

int main(){
int i, n;
double liminf, limsup, aux;
cout<<"Digite o valor de liminf"<<endl;
cin>>liminf;  //definir o limite inferior
cout<<"Digite o valor de limsup"<<endl;
cin>>limsup;  //definir o limite superior
cout<<"Digite o valor de n"<<endl;
cin>>n;  //definir o número de iterações
if(liminf>limsup){ ///condição para que o limite superior seja sempre o maior valor
        aux=liminf;
        liminf=limsup;
        limsup=aux;
    }
double x[n], y[n], h, I;
h=(limsup-liminf)/n;
for(i=0;i<=n;i++){
    x[i]=liminf+i*h;
    y[i]=funcao(x[i]);
}
I=(y[0]+y[n])/2;
for(i=1;i<n;i++){
 I=I+y[i];
}
I=h*I;
cout<<"\nA aproximacao da integral numerica eh "<<I<<endl;
return 0;
}


