/*1) Observe o trecho de código abaixo: int INDICE = 13, SOMA = 0, K = 0;
Enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
Imprimir(SOMA);
Ao final do processamento, qual será o valor da variável SOMA?*/
//resp: 91 

#include <iostream>
using namespace std;
int indice = 13, soma = 0, k = 0;
main(){
	//condição de soma de k enquanto ele for menor que 13
	while(k<indice){
		k = k+1;
		soma = soma +k;
		cout<<"\n"<<soma;
	}
}