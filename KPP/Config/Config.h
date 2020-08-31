#pragma once

#include "Targets.h"
#include "Settings.h"

class Config{

public:

	Config();

	//Targets
	TargetArchitecture architecture;

	//Debug
	

	//Warnings and Errors
	Verbosity verbosity;
	bool wError;


};

TargetArchitecture GetArchitecture();