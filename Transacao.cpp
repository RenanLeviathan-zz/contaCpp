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

inline string Transacao::getData(){
	return data;
}
inline double Transacao::getValor(){
	return valor;
}

inline string Transacao::getDesc(){
	return desc;
}
