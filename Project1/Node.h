#pragma once
#include <iostream>

using namespace std;

class Node
{
private:
	int info;
	Node* proximo;
	
public:
	Node() {
		this->info = NULL;
		this->proximo = NULL;
	}

	int getInfo() {
		return this->info;
	}

	Node* getProximo() {
		return this->proximo;
	}

	void setProximo(Node* novo) {
		this->proximo = novo;
	}


	void setInfo(int valor) {
		this->info = valor;
	}


};

