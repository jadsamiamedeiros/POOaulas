//Meu primeiro c�digo em C++.
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* args[])
{
	bool sair = false;
	string jog1;
	string jog2;
	int vida1 = 20;
	int vida2 = 20;
	int dado6;

	cout << "Digite o nome do jogador 1: " << endl;
	cin >> jog1;
	cout << "Digite o nome do jogador 2: " << endl;
	cin >> jog2;

	while (sair == false)
	{

		cout << " o                  o" << endl;
		cout << ".T./              \\.T." << endl;
		cout << " ^                  ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Vida:" << vida1 << "         " << "Vida:" << vida2 << endl;
		system("pause"); 

		//Adiciona uma "semente" ao gerador de n�meros
		srand((int)time(0));
		//Gera um n�mero aleat�rio entre 1 e 6 
		dado6 = rand() % 6 + 1;
		//Causa dano igual o valor gerado no "dado"
		vida1 = vida1 - dado6;

		//Mesma coisa para o jogador 2
		dado6 = rand() % 6 + 1;
		vida2 = vida2 - dado6;

	    system("cls");

		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
	}
	return 0;
}
