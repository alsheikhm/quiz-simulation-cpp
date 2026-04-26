// Mohammed Al-Sheikh
// MultiplicationQuestion.cpp

#include "MultiplicationQuestion.h"
#include <string>
#include <cstdlib>

// Default Constructor
MultiplicationQuestion::MultiplicationQuestion()
    : Question("", ""), a((rand() % 12) + 1), b((rand() % 12) + 1)
{
    QuestionText = "What is " + std::to_string(a) + " * " + std::to_string(b) + "?";
    int c = a * b;
    CorrectAnswer = std::to_string(c);
}

// Returns truth value of if parameter answer is equal to the calculated CorrectAnswer
bool MultiplicationQuestion::IsThisAnswerCorrect(std::string answer)
{
    return (answer == CorrectAnswer);
}
