#ifndef CONTA_H
#define CONTA_H
#include "Transacao.h"
#include <iostream>
#include <vector>
using namespace std;
class Conta{
	private:
		int numero;
		string correntista;
		double saldo;
		vector<Transacao*> ts;
	public:
		Conta(int, string, double);
		virtual ~Conta();
		int getNumero(void);
		string getCorrentista(void);
		double getSaldo(void);
		vector<Transacao*> getTransacoes(void);
		//setter
		void setNumero(int);
		void setCorrentista(string);
		void setSaldo(double);
		void addTransacoes(Transacao*);
		virtual void depositar(double)=0;
		virtual void retirar(double)=0;
		virtual void imprimirExtrato(void)=0;
};
#endif
