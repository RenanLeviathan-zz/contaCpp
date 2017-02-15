#include "ContaCorrente.h"
#include <iostream>
#include <vector>
using namespace std;
inline ContaCorrente::ContaCorrente(int numero, string nome, double saldo):Conta(numero,nome,saldo){
	
}

ContaCorrente::~ContaCorrente(){
	
}

void ContaCorrente::depositar(double valor){
	Transacao t("11/02/2017",getSaldo()+valor,"lorem ipsum");
			addTransacoes(&t);
			setSaldo(getSaldo()+valor);
}
void ContaCorrente::retirar(double valor){
	if(getSaldo()-valor>0){
				Transacao t("11/02/2017",getSaldo()-valor,"lorem ipsum");
				addTransacoes(&t);
				setSaldo(getSaldo()-valor);
			}
}

void ContaCorrente::imprimirExtrato(){
	cout<<"Correntista: "<<getCorrentista()<<endl;
			cout<<"Numero: "<<getNumero()<<endl;
			cout<<"Extrato: Data"<<endl;
			int i;
			vector<Transacao*> t=getTransacoes();
			for(i=0;i<t.size();i++){
				cout<<"Data: "<<t[i]->getData()<<"Valor: "<<t[i]->getValor()<<"Descricao: "<<t[i]->getDesc()<<endl;
			}
}
