// Mohammed Al-Sheikh
// MultipleChoiceQuestion.cpp

#include <string>
#include <vector>
#include "MultipleChoiceQuestion.h"

MultipleChoiceQuestion::MultipleChoiceQuestion(const std::string& questionText, 
	                                           const std::vector<std::string>& possibleAnswersText, 
	                                           const std::string& answerText)
	: Question(questionText, answerText),
	  possibleAnswers(possibleAnswersText)
{
	// Nothing here...
}

std::string MultipleChoiceQuestion::GetPossibleAnswersText()
{
	// Make a simple line separated list of options
	std::string toReturn;
	int index = 1;
    
	for(const std::string& s : possibleAnswers)
	{
		toReturn += std::to_string(index);
		toReturn += (") " + s + "\n");
		++index;
	}

	return toReturn;
}

bool MultipleChoiceQuestion::IsThisAnswerCorrect(std::string answer)
{
	// Test if number answer matches what user inputted
	if (answer == CorrectAnswer)
		return true;

	// Test if word answer matches what user inputted
	for (char& c : answer)
		c = toupper(c);

	std::string correct = possibleAnswers[atoi(CorrectAnswer.c_str()) - 1];
	for (char& c : correct)
		c = toupper(c);

	// If neither worked, then sorry you need to try again
	return answer == correct;
}
