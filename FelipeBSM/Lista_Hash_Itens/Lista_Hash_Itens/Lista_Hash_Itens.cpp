// Lista_Hash_Itens.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include "Inventario.h"
int main()
{
	setlocale(LC_ALL, "Portuguese");

	std::string opcaoMain;

	Inventario *  inv = new Inventario();

	inv->FuncaoParaHash();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "EXISTE UMA NOVA FUNÇÃO PARA HASH, GOSTARIA DE ABRIR?[S]  ou [N] "  << std::endl;
	std::cin >> opcaoMain;

	if (toupper(opcaoMain == "s"))
	{
		inv->FuncaoParaHash2();

	}
	else
	{
		std::cout << "OK! TCHAU..." << std::endl;
	
	}

	system("pause");
	return 0;
}

