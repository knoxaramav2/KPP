#include "Util.h"

ErrorReporter::ErrorReporter()
{
}

int ErrorReporter::CountWarnings()
{
	int wrn = 0;
	for (int i = 0; i < _warnings.size(); ++i) {
		if (_warnings[i].level == ErrorLevel::Warning) { ++wrn; }
	}

	return wrn;
}

int ErrorReporter::CountErrors()
{
	return (int) _errors.size();
}

std::vector<Error> ErrorReporter::getWarnings()
{
	return _warnings;
}

std::vector<Error> ErrorReporter::getErrors()
{
	return _errors;
}

void ErrorReporter::Add(Error e)
{
	if (e.level == ErrorLevel::Error) {
		_errors.push_back(e);
	}
	else {
		_warnings.push_back(e);
	}
}

Error::Error(ErrorLevel level, std::string message)
{
	this->level = level;
	this->message = message;
}
