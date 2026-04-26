// Mohammed Al-Sheikh
// ShortAnswerQuestion.cpp

#include <string>
#include "ShortAnswerQuestion.h"

ShortAnswerQuestion::ShortAnswerQuestion(const std::string& questionText, 
	                                     const std::string& correctAnswer)
	: Question(questionText, correctAnswer)
{
	// Nothing here...
}

bool ShortAnswerQuestion::IsThisAnswerCorrect(std::string answer)
{
	// Turn off case sensitivity for both the given answer and the correct answer
	for (char& c : answer)
		c = toupper(c);

	std::string correct = CorrectAnswer;
	for (char& c : correct)
		c = toupper(c);

	// Simple test to see if things are on the up and up
	return answer == correct;
}
