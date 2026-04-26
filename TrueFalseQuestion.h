// Mohammed Al-Sheikh
// TrueFalseQuestion.h

#pragma once

#include <string>
#include "MultipleChoiceQuestion.h"

class TrueFalseQuestion: public MultipleChoiceQuestion
{
public:
	TrueFalseQuestion(const std::string& questionText,
		              const std::string& correctAnswer);
		
	virtual bool IsThisAnswerCorrect(std::string answer) override;
};
