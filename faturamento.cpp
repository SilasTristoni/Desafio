/*3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, 
que calcule e retorne:
• O menor valor de faturamento ocorrido em um dia do mês;
• O maior valor de faturamento ocorrido em um dia do mês;
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.*/
#include <iostream>
using namespace std;
const int TAM=3;
float fat[TAM], menor=0, maior=0, soma, diasAcimaMedia = 0;
main(){
	system("chcp 65001");
	cout<<"\n Programa de faturamento";
	for (int i=0; i<TAM; i++){
		cout<<"\n Escreva o valor diário de faturamento do dia "<<i+1<<":\n";
		cin >> fat[i];
		if (fat[i]<menor){
			menor = fat[i];
		}
		if (fat[i] > maior) {
            maior = fat[i];
        }
        soma = soma + fat[i];
	}
	float media = soma/TAM;
	
    for (int i = 0; i < TAM; i++) {
        if (fat[i] > media) {
            diasAcimaMedia++;
        }
    }
	
	cout<<"\n O total arrecado no mês foi: "<<soma;
	cout << "\nMenor valor de faturamento: " << menor;
    cout << "\nMaior valor de faturamento: " << maior;
    cout << "\nNúmero de dias com faturamento superior à média mensal: " << diasAcimaMedia << endl;

	
} 