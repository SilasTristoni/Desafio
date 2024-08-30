/*Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
• SP – R$67.836,43
• RJ – R$36.678,66
• MG – R$29.229,88
• ES – R$27.165,48
• Outros – R$19.849,53
Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado 
teve dentro do valor total mensal da distribuidora.  */
#include <iostream>
using namespace std;
float sp, rj, mg, es, outros, total;
main(){
	system ("chcp 65001");
	cout<<"\n Programa do percentual: ";
	sp=67836.43;
	rj=36678.66;
	mg=29229.88;
	es=27165.48;
	outros=19849.53;
	total=sp+rj+mg+es+outros;
	cout<<"\n Valor total arrecadado: R$"<<total;
	cout<<"\n Percentual de SP: "<<(sp/total)*100<<"%";
	cout<<"\n Percentual de RJ: "<<(rj/total)*100<<"%";
	cout<<"\n Percentual de MG: "<<(mg/total)*100<<"%";
	cout<<"\n Percentual de ES: "<<(es/total)*100<<"%";
	cout<<"\n Percentual de Outros: "<<(outros/total)*100<<"%";
}