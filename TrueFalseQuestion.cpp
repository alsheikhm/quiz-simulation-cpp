// Mohammed Al-Sheikh
// TrueFalseQuestion.cpp

#include <string>
#include "TrueFalseQuestion.h"

TrueFalseQuestion::TrueFalseQuestion(const std::string& questionText,
	                                 const std::string& answerText)
	: MultipleChoiceQuestion(questionText,
		                     std::vector<std::string> {"True", "False"}, 
		                     answerText)
{
	// Nothing here...
}

bool TrueFalseQuestion::IsThisAnswerCorrect(std::string answer)
{
	// Turn off case sensitivity for both the given answer and the correct answer
	for (char& c : answer)
		c = toupper(c);

	if (((answer == "2") || (answer == "F")) && (CorrectAnswer == "False"))
		return true;

	if (((answer == "1") || (answer == "T")) && (CorrectAnswer == "True"))
		return true;

	std::string correct = CorrectAnswer;
	for (char& c : correct)
		c = toupper(c);
	
	return answer == correct;
}
