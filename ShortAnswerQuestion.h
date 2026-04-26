// Mohammed Al-Sheikh
// ShortAnswerQuestion.h

#pragma once

#include <string>
#include "Question.h"

class ShortAnswerQuestion : public Question
{
public:
	ShortAnswerQuestion(const std::string& questionText, 
		                const std::string& correctAnswer);

	virtual bool IsThisAnswerCorrect(std::string answer) override;
};
