#include<iostream>
#include "Pilha.h"
int main()
{
	Pilha pilha = Pilha();
	pilha.AddItem(5);
	pilha.AddItem(4);
	pilha.AddItem(3);
	pilha.AddItem(2);
	pilha.AddItem(1);
	std::cout << pilha.RemoverItem() << std::endl;
	std::cout << pilha.RemoverItem() << std::endl;
	std::cout << pilha.RemoverItem() << std::endl;
	std::cout << pilha.RemoverItem() << std::endl;

	std::cout << "\n\n";
	pilha.VerPilha();

	system("PAUSE");
	return 0;
}