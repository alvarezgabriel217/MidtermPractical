#include "Question.h"

Question::Question(std::string _question, std::string _answers[])
{
	question = _question;
	for (int i = 0; i < 3; i++)
	{
		answers[i] = _answers[i];
	}
}

void Question::GetAnswer()
{
	int choice = 0;
	std::cout << question << '\n';
	for (int i = 0; i < 3; i++)
	{
		std::cout << i+1 << ") " << answers[i] << '\n';
	}
	std::cout << "Choice: ";
	std::cin >> choice;

	if (choice == 1)
	{
		std::cout << "You are correct!";
		return;
	}
	std::cout << "You are wrong!";
}