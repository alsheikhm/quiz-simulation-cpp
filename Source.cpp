// Mohammed Al-Sheikh
// Source.cpp

#include <iostream>
#include <string>
#include <cstdlib>
#include "MultiplicationQuestion.h"

int main()
{
    int correctCount = 0;
    std::string answer;
    
    // Loops until user gets 10 correct answers
    while (correctCount < 10)
    {
        // Creates question object using MultiplicationQuestion class
        MultiplicationQuestion question;

        std::cout << question.GetQuestionText() << std::endl;
        
        // Loops at least once until user gets correct answer to question
        do
        {
            // Prompt user to enter input
            std::cout << "ANSWER: ";
            std::cin >> answer;
            
            // Checks if user's input is correct; if so, increment counter; if not, loop until right answer it produced
            if(question.IsThisAnswerCorrect(answer))
            {
                std::cout << std::endl;
                std::cout << "CORRECT!" << std::endl << std::endl;
                ++correctCount;
            }
            else
            {
                std::cout << std::endl;
                std::cout << "Incorrect. Try again." << std::endl << std::endl;
            }

        } while (!question.IsThisAnswerCorrect(answer));
    }

    std::cout << "You Answered 10 Multiplication Questions Correctly!" << std::endl << std::endl;
    
	return 0;
}
