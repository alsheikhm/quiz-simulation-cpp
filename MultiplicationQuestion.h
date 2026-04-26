// Mohammed Al-Sheikh
// MultiplicationQuestion.h

#pragma once

#include "Question.h"
#include <string>

// MultiplicationQuestion class inheriting from Question class
class MultiplicationQuestion : public Question
{
public:
    // Constructor
    MultiplicationQuestion();
    
    virtual bool IsThisAnswerCorrect(std::string answer) override;
    
private:
    int a;
    int b;
};
