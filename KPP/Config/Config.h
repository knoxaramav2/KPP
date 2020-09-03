#pragma once

#include <string>
#include <vector>

#include "Targets.h"
#include "Settings.h"

enum class OutputType {
	Executable,
	Library
};

class Config{

public:

	Config();

	//Optimization
	int optimizationLevel;

	//Input/Output
	OutputType buildType;
	std::string srcFile;
	std::string outputFile;
	std::vector<std::string> libraryPaths;

	//Targets
	TargetArchitecture architecture;

	//Debug
	bool includeDebugMeta;

	//Warnings and Errors
	Verbosity verbosity;
	bool wError;
	bool suppressErrors;


};

extern "C" __declspec(dllexport) Config _config;

TargetArchitecture GetArchitecture();