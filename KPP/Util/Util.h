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