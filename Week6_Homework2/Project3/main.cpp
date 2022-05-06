#include "Hangman.h"
#include "Mydic.h"
#include <cstdlib>
#include <string>

int main()
{
	srand(time(NULL));
	Hangman game;
	Mydic hello;

	hello.load("example.txt");

	int random_num = rand() % 8;
	game.play(hello.getEng(random_num));


	cout << endl << "¿µ´Ü¾î : " << hello.getEng(random_num) << endl;
	cout << "ÇÑ±Û ¼³¸í : " << hello.getKor(random_num) << endl;

	return 0;
}