using namespace std;

#include <iostream>

#include "Config.h"

#if _WIN32
#define ARCH TargetArchitecture::WIN_x86
#elif _WIN64
#define ARCH TargetArchitecture::WIN_x86_64
#elif __GNUC__
	#if __x86_64__ || __ppc64__
	#define ARCH TargetArchitecture::GNU_x86_64
	#else
	#define ARCH TargetArchitecture::GNU_x86
	#endif
#endif


Config::Config() {
	architecture = ARCH;
	verbosity = Verbosity::Normal;

	cout << ARCH << endl;
}
