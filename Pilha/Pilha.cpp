#include<iostream>
#include "Pilha.h"

Pilha::Pilha()
{
	Tamanho = 0;
	Estrutura = new TipoItem[MaxItems];
}

Pilha::~Pilha()
{
	delete[] Estrutura;
	std::cout << "Estrutura deletada" << std::endl;
}

bool Pilha::EstaCheia()
{
	if (Tamanho < MaxItems)
	{
		return false;
	} return true;
}

void Pilha::AddItem(TipoItem item)
{
	if (!EstaCheia())
	{
		Estrutura[Tamanho] = item;
		Tamanho++;
	}
	else
	{
		std::cout << "Esta cheia" << std::endl;
	}
}

TipoItem Pilha::RemoverItem()
{
	if (Tamanho > 0)
	{
		Tamanho--;
		return Estrutura[Tamanho];
	} return 0;
}

void Pilha::VerTamanho()
{
	std::cout << "Tamanho da pilha" << Tamanho << std::endl;
}

void Pilha::VerPilha()
{
	if (Tamanho > 0)
	{
		for (int i = Tamanho - 1; i >= 0; i--)
		{
			std::cout << Estrutura[i] << std::endl;
		}
	}
	else
	{
		std::cout << "Pilha vazia" << std::endl;
	}
}