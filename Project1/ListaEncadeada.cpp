#include "Node.cpp"
#include <iostream>

class ListaEncadeada {

private:
	Node* comeco;

public:
	ListaEncadeada() {
		this->comeco = NULL;
	}

	void inserirComeco(int info) {
		Node* no = new Node();
		no->setInfo(info);

		if (comeco == NULL) {
			comeco = no;
			return;
		}

		no->setProximo(comeco);

		comeco = no;
	}


	void inserirFinal(int info) {
		Node* no = new Node();
		no->setInfo(info);

		if (comeco == NULL) {
			comeco = no;
			return;
		}

		Node* aux = comeco;

		while (aux->getProximo() != NULL) {
			aux = aux->getProximo();
		}

		aux->setProximo(no);
	}

	void remover(int valor) {
		if (comeco->getInfo() == valor) {
			comeco = comeco->getProximo();
			return;
		}

		Node* aux = comeco;
		Node* anterior = NULL;

		while (aux->getInfo() != valor) {
			anterior = aux;
			aux = aux->getProximo();
		}

		anterior->setProximo(aux->getProximo());

		aux->setProximo(NULL);

		aux = NULL;
	}

	void removerEspecifico(int index) {
		int contador = 0;
		Node* anterior = NULL;
		Node* aux = comeco;

		while (contador != index) {
			anterior = aux;
			aux = aux->getProximo();
			contador++;
		}


		anterior->setProximo(aux->getProximo());

		aux = NULL;
	}

	void inserirEspecifico(int index, int valor) {
		Node* no = new Node();
		no->setInfo(valor);
		int contador = 0;
		Node* anterior = NULL;
		Node* aux = comeco;

		while (contador != index) {
			anterior = aux;
			aux = aux->getProximo();
			contador++;
		}


		anterior->setProximo(no);

		no->setProximo(aux);
	}

	void imprimir() {
		Node* aux = comeco;

		if (aux == NULL) {
			cout << "Lista vazia";
		}

		while (aux != NULL) {
			cout << aux->getInfo() << "\n";
			aux = aux->getProximo();
		}
	}
};