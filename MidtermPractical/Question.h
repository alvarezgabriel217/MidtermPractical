#pragma once
#include <iostream>

class Question
{
public:
	std::string question;
	std::string answers[3];
	void GetAnswer();
	Question(std::string _question, std::string _answers[]);
};

