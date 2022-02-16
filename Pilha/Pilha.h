#pragma once

typedef int TipoItem;
const int MaxItems = 5;

class Pilha
{
private:
	int Tamanho;
	TipoItem *Estrutura;

public:
	Pilha();
	~Pilha();
	bool EstaCheia();
	void AddItem(TipoItem item);
	TipoItem RemoverItem();
	void VerTamanho();
	void VerPilha();
};
