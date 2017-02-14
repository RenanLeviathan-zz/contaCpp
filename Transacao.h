#ifndef TRANSACAO_H
#define TRANSACAO_H
#include <iostream>
using namespace std;
class Transacao{
	private:
		string data;
		double valor;
		string desc;
	public:
		Transacao(string, double, string);
		virtual ~Transacao();
		string getData(void);
		double getValor(void);
		string getDesc(void);
};
#endif
