// KPP.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <Config.h>
#include <Util.h>

#define VERSION_MAJOR @KPP_VERSION_MAJOR@

class InvalidConfigException : public std::exception {

};

extern ErrorReporter _reporter;
extern Config _config;