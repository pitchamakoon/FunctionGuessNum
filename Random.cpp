#include<iostream>
#include<time.h>
using namespace std;
void welcomeText();
int checkNum();

int main()
{
	srand(time(0));
	
	bool is_gameover = false;
	int guess, secret=rand() %10;
	int guessed = 0;

	welcomeText();

	cout << "Secret number has been chosen" << endl;
	do{
		guess = checkNum();
		guessed++;
		if (secret > guess)
			cout << "The secert number is lower" << endl;
		else if (secret < guess)
			cout << "The secret number is higher" << endl;
    
	}while (secret != guess);

	cout << "Congratulation" << endl;
	cout << "The secret number is " << secret << endl;
	cout << "You made " << guessed << "guess";
	cout << (guessed != 1 ? "es" : "") << endl;

	return(0);
}

void welcomeText()
{
	cout << "###Welcome to guessing number game###" << endl;
}

int checkNum()
{
	int guess;
	cout << "Guess the number (1 to 10): ";
	cin >> guess;
	return(guess);
}