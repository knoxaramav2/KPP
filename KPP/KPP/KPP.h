// KPP.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <Config.h>
#include <Util.h>

#define VERSION_MAJOR @KPP_VERSION_MAJOR@

__declspec(dllimport) Config _config;
__declspec(dllimport) ErrorReporter _reporter;

class InvalidConfigException : public std::exception {};
