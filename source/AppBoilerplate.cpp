#include "AppBoilerplate.hpp"

namespace MyVariables {
	//declare your variables here, its going to be cleaner
}

namespace MyApp {
	bool AppInit() {
    	//your initialization code here
    }
	bool AppTick(Versailles::U64 aTicks) {
		//code executed once every N milliseconds (default 25ms)
	}
	bool AppSecond(Versailles::U64 aSeconds) {
		//code executed once every second
	}
	bool AppFrame(Versailles::U64 aFrame) {
		//code executed every frame
	}
	bool AppAbort(const char* aMessage, const char* aFunction, const char* aFile, const Versailles::U64 aLine) {
		//code executed on fatal error
	}
	bool AppExit() {
		//your cleanup code here
	}
}
