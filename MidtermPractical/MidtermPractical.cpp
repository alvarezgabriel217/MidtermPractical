#include <iostream>
#include "Question.h"

void Question1();
void Question2();
void Question3();
void Question4();

int main()
{
    srand(time(0));
    int questionChoice = rand() % 4 + 1;

	switch (questionChoice)
	{
	case 1:
		Question1();
		break;
	case 2:
		Question2();
		break;
	case 3:
		Question3();
		break;
	case 4:
		Question4();
		break;
	}
}

void Question1()
{
	std::string answers[3] = {"Arrays", "Linked Lists", "They're the same"};
	Question q1("Which one of the following is the fastest when it comes to iterating?", answers);
	q1.GetAnswer();
}

void Question2()
{
	std::string answers[3] = { "8", "9", "7" };
	Question q2("How many planets are in our solar system?", answers);
	q2.GetAnswer();
}

void Question3()
{
	std::string answers[3] = { "Queue", "Stack", "Neither"};
	Question q3("Which one of the following uses FIFO?", answers);
	q3.GetAnswer();
}

void Question4()
{
	std::string answers[3] = { "Hiding implementation", "Writing reusable code", "Treating an inherited class as if it was a base class"};
	Question q4("What is encapsulation?", answers);
	q4.GetAnswer();
}
