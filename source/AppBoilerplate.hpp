#include "Versailles/Versailles.hpp"

namespace MyApp {
	bool AppInit();
	bool AppTick(Versailles::U64 aTicks);
	bool AppSecond(Versailles::U64 aSeconds);
	bool AppFrame(Versailles::U64 aFrames);
	void AppAbort(const char* aMessage, const char* aFunction, const char* aFile, const Versailles::U64 aLine);
	bool AppExit();
}
