#include <iostream>
#include<string>
using namespace std;

// classe No
class No
{
private:
	string v;
	No* prox;
public:
	No(string v) // construtor
	{
		this->v = v;
		this->prox = NULL;
	}

	string obterValor() // obtém o valor
	{
		return v;
	}

	No* obterProx() // obtém o próximo No
	{
		return prox;
	}

	void setProx(No* p) // seta o próximo No
	{
		prox = p;
	}
};

// classe Lista
class Lista
{
private:
	No* cabeca; // primeiro elemento
	No* cauda; // último elemento

public:
	Lista()
	{
		// se não passar elemento, então cabeca e cauda são NULL
		cabeca = NULL;
		cauda = NULL;
	}

	Lista(string v)
	{
		// se passar elemento, então cria novo No
		cabeca = new No(v);
		cauda = cabeca;
	}

	virtual ~Lista() // destrutor
	{
		delete cabeca;
	}

	void mostrar() // mostra todos os elementos da lista
	{
		cout << "\nImprimindo todos os elementos...\n";
		No* c = cabeca;

		if(vazia())
			cout << "A lista NAO possui elementos!!\n";
		else
		{
			while(c) // percorre a lista
			{
				cout << c->obterValor() << endl;
				c = c->obterProx();
			}
			cout << endl;
		}
	}
	char pegaletraultimo() // mostra todos os elementos da lista
	{
		No* c = cabeca;
		string c2;
		
		if(vazia()){
			cout << "A lista NAO possui elementos!!\n";
		}
		else
		{
			c2=c->obterValor();
			return c2[c2.length()-1];
		}
	}
	string pegaultimapalavra() // mostra todos os elementos da lista
	{
		No* c = cabeca;
		

		if(vazia())
			cout << "A lista NAO possui elementos!!\n";
		else
		{
			c->obterValor();
			return c->obterValor();;
		}
	}

	bool vazia() // verifica se a lista está vazia
	{
		return (cabeca == NULL);
	}

	// insere no início (semelhante a push_front da list)
	void inserir_inicio(string v)
	{
		No* novo_no = new No(v);

		if(vazia())
		{
			cabeca = novo_no;
			cauda = novo_no;
		}
		else
		{
			novo_no->setProx(cabeca);
			cabeca = novo_no;
		}
	}

	// insere no final (semelhante a push_back da list)



	// verifica se um elemento existe na lista
	bool existe(string v)
	{
		No* c = cabeca;
		
		while(c)
		{
			if(c->obterValor() == v)
				return true;
			c = c->obterProx();
		}
		return false;
	}

	// remove da lista, remoção do final (semelhante a pop_back da list)
	void remover()
	{
		if(!vazia())
		{
			// se houver só 1 elemento
			if(cabeca->obterProx() == NULL)
				cabeca = NULL;
			else if(cabeca->obterProx()->obterProx() == NULL) // 2 elementos
				cabeca->setProx(NULL);
			else // > 2 elementos
			{
				No* ant_ant = cabeca;
				No* ant = cabeca->obterProx();
				No* corrente = cabeca->obterProx()->obterProx();

				while(corrente)
				{
					No* aux = ant;
					ant = corrente;
					ant_ant = aux;
					corrente = corrente->obterProx();
				}
				delete ant_ant->obterProx(); // libera memória
				ant_ant->setProx(NULL); // seta o prox como NULL
				cauda = ant_ant; // atualiza a cauda
			}
		}
	}
};
/* 
int main(int argc, char *argv[])
{
	Lista l;
    char c[50];
    
	printf("digite o nome :");
    scanf("%s",c);
	if(l.vazia())
		cout << "Lista vazia!!\n";
	else
		cout << "Lista NAO vazia!!\n";
	
	l.mostrar();
	
	if(l.existe("10"))
		cout << "\nO elemento 10 existe na lista!!\n";
	else
		cout << "\nO elemento 10 NAO existe na lista!!\n";
	
	l.inserir_inicio("10");
	l.inserir_inicio("20");
	l.inserir_inicio("30");
	l.inserir_inicio("40");
	l.inserir_inicio("50");
    l.inserir_inicio(c);
	cout<<"/////////\n";
	cout<<l.pegaopriemiro();
	cout<<"/////////\n";
	l.mostrar();
	
	if(l.vazia())
		cout << "Lista vazia!!\n";
	else
		cout << "Lista NAO vazia!!\n";
	
	if(l.existe("10"))
		cout << "\nO elemento 10 existe na lista!!\n";
	else
		cout << "\nO elemento 10 NAO existe na lista!!\n";
	
	l.remover();
	
	l.mostrar();

	
	return 0;
} */