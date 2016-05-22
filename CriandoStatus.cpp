#include <iostream>
#include <string>
using namespace std;

//Criando uma tela de status
int main(int argc, char* args[])
{
	char inicial;
	string nome;
	string classe;

	cout << "Digite o nome do personagem:" << endl;
	getline(cin, nome);
	inicial = nome[0];
	cout << "Digite a classe do personagem:" << endl;
	getline(cin, classe);
	cout << "Personagem " << inicial << ". " <<  nome << endl;
	cout << "Classe: " << classe << endl;

	//Continuação da tela de status

	int ataque = 10;
	int defesa = 8, magica = 2, def_magica = 4;
	int vida = 65, vida_maxima = 110;
	double porc_vida;

	
	cout << "    ----   - STATUS -  -----      " << endl;
	cout << "Ataque: " << ataque << "  Defesa: " << defesa << endl;
	cout << "Magica: " << magica << "   Def. Magica: " << def_magica << endl;

	cout << "Vida: " << vida << " / " << vida_maxima << endl;
	porc_vida = (vida * 100) / vida_maxima;
	cout << "Vida: " << porc_vida << "%" << endl;

	return 0;
}


