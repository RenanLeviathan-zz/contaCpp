#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ContaCorrente cc(1243,"Roberto",45);
	cc.imprimirExtrato();
	return 0;
}
