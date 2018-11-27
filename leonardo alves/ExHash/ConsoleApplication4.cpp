// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Eu não entendi o que queria dizer a função Count, dai não fiz
// o Remove remove o primeiro Item com o Nome que encontra se tiver mais de um na mesma chave

#include "pch.h"
#include <iostream>
#include <string>
#include "Hash.h";
using namespace std;

int main()
{
	Hash tabela;
	string nome = "";
	int menu = -1;
	int voltar = 0;
	int index = -1;
	int valor = 0;

	tabela.addItem("Leo", 11);
	tabela.addItem("Nandinho", 12);
	tabela.addItem("Gui", 13);
	tabela.addItem("Thommy", 14);
	tabela.addItem("Becker", 15);
	tabela.addItem("Lorde", 16);
	tabela.addItem("Mike", 17);
	tabela.addItem("Guigs", 18);
	tabela.addItem("Digo", 19);
	tabela.addItem("Ibi", 20);
	tabela.addItem("Guga", 21);
	tabela.addItem("Tetra", 22);
	tabela.addItem("Theus", 23);
	tabela.addItem("Leo", 24);

	while (menu != 6) {
		voltar = 0;
		system("CLS");
		cout << "(1) visualizar" << endl;
		cout << "(2) visualizar index especifico" << endl;
		cout << "(3) procurar" << endl;
		cout << "(4) remover" << endl;
		cout << "(5) adicionar" << endl;
		cout << "(6) sair" << endl;
		cout << "opcao: ";
		cin >> menu;

		if (menu == 1) {
			cout << endl;
			while (voltar != 6) {
				tabela.escreveTabela();
				cout << endl << "digite (6) para voltar: ";
				cin >> voltar;
			}
		}

		if (menu == 2) {
			while (voltar != 6) {
				cout << endl << "digite (6) para voltar ou qualquer outro botao para continuar: ";
				cin >> voltar;

				if (voltar != 6) {
					cout << "index: ";
					cin >> index;
					cout << endl;

					tabela.escreveOutrosItens(index);
				}
			}
		}

		if (menu == 3) {
			while (voltar != 6) {
				cout << endl << "digite (6) para voltar ou qualquer outro botao para continuar: ";
				cin >> voltar;

				if (voltar != 6) {
					cout << "Procurar por: ";
					cin >> nome;
					cout << endl;

					tabela.procuraValor(nome);
				}
			}
		}

		if (menu == 4) {
			while (voltar != 6) {
				cout << endl << "digite (6) para voltar ou qualquer outro botao para continuar: ";
				cin >> voltar;

				if (voltar != 6) {
					cout << "Deletar: ";
					cin >> nome;
					cout << endl;

					tabela.removerItem(nome);
				}
			}
		}

		if (menu == 5) {
			while (voltar != 6) {
				cout << endl << "digite (6) para voltar ou qualquer outro botao para continuar: ";
				cin >> voltar;

				if (voltar != 6) {
					cout << "Nome: ";
					cin >> nome;
					cout << "Valor: ";
					cin >> valor;
					cout << endl;

					tabela.addItem(nome, valor);
					cout << "Adicionado" << endl;
				}
			}
		}
	}

	cout << endl;
	system("pause");
	return 0;
}