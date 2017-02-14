#ifndef CORRENTE_H
#define CORRENTE_H
#include "Conta.h"
#include <iostream>
using namespace std;
class ContaCorrente:public Conta{
	public:
		ContaCorrente(int,string,double);
		virtual ~ContaCorrente();
		void depositar(double);
		void retirar(double);
		void imprimirExtrato(void);
};
#endif
