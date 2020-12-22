#include	<stdio.h> //Biblioteca
#include	<stdlib.h> //Biblioteca
#include <iostream> //Biblioteca
#include <string> //Inclui string
using namespace std;

int main()
{
    //dados de entrada
	string cliente;
	int qtd;
	cout << "\n\nEnergeticos Accelerator\n\n";
    cout << "Insira o nome do cliente: ";
    cin >> cliente;
    cout << "Insira a quantidade de energeticos: ";
    cin >> qtd;
    
    //calculos
	float total = qtd * 4.5;
	float icms = total * 0.18;
	float ipi = total * 0.04;
	float pis = total * 0.0186;
	float cofins = total * 0.0854;
	float somatot = total + icms + ipi + pis + cofins;
	float somaimp = icms + ipi + pis + cofins;
	float desconto = somatot * 0.05;
	float totaldesc = somatot - desconto;
	
	
	
	//dados de saida
    cout << "\n\n\nCliente: " 					<< cliente;
    std::cout.precision(2);
    cout << "\n\nICMS: " 							<< std::fixed << icms;
    cout << " IPI: "							<< std::fixed << ipi;
    cout << " PIS: "							<< std::fixed << pis;
    cout << " COFINS: "						<< std::fixed << cofins;
    cout << " Total: "							<< std::fixed << somatot;
    cout << "\n\n\nTotal Impostos: R$ "			<< std::fixed << somaimp;
	cout << "\n\nTotal Mercadorias: "			<< qtd; //ainda não aprendi a fazer loop;
	cout << "\n\nTotal Geral: R$ "				<< std::fixed << somatot;
	
	if (qtd>300) {
		cout << "\n\n\nDesconto do cliente: R$ "	<< std::fixed << desconto;
		cout << "\nTotal com desconto: R$ "		<< std::fixed << totaldesc;
	}
    


    return 0;
}
