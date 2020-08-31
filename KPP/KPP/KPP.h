// KPP.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <Config.h>

#define VERSION_MAJOR @KPP_VERSION_MAJOR@

class InvalidConfigException : public std::exception {

};

extern Config config;