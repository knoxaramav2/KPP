#pragma once

#include <string>
#include <vector>

enum class ErrorLevel {
	Notification,
	Warning,
	Error
};

struct Error {
	ErrorLevel level;
	std::string message;

	Error(ErrorLevel, std::string);
};

class ErrorReporter {

	std::vector<Error> _warnings;
	std::vector<Error> _errors;

public:

	ErrorReporter();

	int CountWarnings();
	int CountErrors();

	std::vector<Error> getWarnings();
	std::vector<Error> getErrors();

	void Add(Error);

};

extern "C" __declspec(dllexport) ErrorReporter _reporter;