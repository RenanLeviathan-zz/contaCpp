#include "Conta.h"
#include "Transacao.h"
#include <iostream>
#include <vector>
using namespace std;
Conta::Conta(int numero, string correntista, double saldo){
	this->numero=numero;
	this->correntista=correntista;
	this->saldo=saldo;
}

int Conta::getNumero(){
	return numero;
}

string Conta::getCorrentista(){
	return correntista;
}

double Conta::getSaldo(){
	return saldo;
}

vector<Transacao*> Conta::getTransacoes(){
	return ts;
}

void Conta::setNumero(int numero){
	this->numero=numero;
}

void Conta::setCorrentista(string correntista){
	this->correntista=correntista;
}

void Conta::setSaldo(double saldo){
	this->saldo=saldo;
}

void Conta::addTransacoes(Transacao *t){
	ts.push_back(t);
}
