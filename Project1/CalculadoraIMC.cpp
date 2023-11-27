#include "CalculadoraIMC.h"
#include <iostream>
using namespace std;

static void printIMC(float imc) {
	if (imc < 18.5) {
		cout << "\nPeso abaixo do normal";
	}
	else if (imc > 18.5 && imc <= 24.9) {
		cout << "\nPeso normal";
	}
	else if (imc > 24.9 && imc <= 29.9) {
		cout << "\nExcesso de peso";
	}
	else if (imc > 29.9 && imc <= 34.9) {
		cout << "\nObesidade classe 1";
	}
	else if (imc > 34.9 && imc < 39.9) {
		cout << "\nObesidade classe 2";
	}
	else if (imc >= 40) {
		cout << "\nObesidade classe 3";
	}
	else {
		cout << "\nIMC inválido";
	}
}

int main() {
	float peso;
	float altura;
	float imc;

	cout << "Digite o peso:";
	cin >> peso;

	cout << "Digite a altura:";
	cin >> altura;

	imc = peso / (altura * altura);

	cout << "IMC: " << imc;
	printIMC(imc);
	return 0;
}