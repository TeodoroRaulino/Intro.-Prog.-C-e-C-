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
double h, esq, dir;
h=(limsup+liminf)/n;
for(i=0;i<n;i++){
    esq += funcao(i) * h;
}
//for(i=1;i<=n;i++){
   // dir += funcao(i) * h;
//}
cout<<"\nA integral numerica obtida pela esquerda eh "<<esq<<endl;
//cout<<"\nA integral numerica obtida pela direita eh "<<dir<<endl;
return 0;
}



