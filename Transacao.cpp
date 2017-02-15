#include "Transacao.h"
#include <iostream>
using namespace std;
inline Transacao::Transacao(string data, double valor, string desc){
	this->data=data;
	this->valor=valor;
	this->desc=desc;
}

Transacao::~Transacao(){
	
}

string Transacao::getData(){
	return data;
}
double Transacao::getValor(){
	return valor;
}

string Transacao::getDesc(){
	return desc;
}
