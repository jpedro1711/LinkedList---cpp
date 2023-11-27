#include "ListaEncadeada.cpp"
#include <iostream>

int main() {
	ListaEncadeada* lista = new ListaEncadeada();

	lista->inserirFinal(2);
	lista->inserirFinal(5);
	lista->inserirFinal(1);
	lista->inserirFinal(9);
	lista->inserirFinal(10);

	lista->inserirComeco(20);

	lista->imprimir();

	//lista->removerEspecifico(2);

	cout << "\n-----------------------\n";
	lista->inserirEspecifico(2, 8);
	lista->imprimir();
	return 0;
};