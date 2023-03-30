#include "AppBoilerplate.hpp"

//This is just some boilerplate Versailles code.
//Feel free to use this.

int main(int argc, char** argv) {
	Versailles::Init(argc, argv);
	
	Versailles::ApplicationInfo Info;
	
	Info.AppName = "[Your project name here]";
	Info.AuthorName = "[Your author name here]";
	Info.OnStart = MyApp::AppInit;
	Info.OnTick = MyApp::AppTick;
	Info.OnSecond = MyApp::AppSecond;
	Info.OnFrame = MyApp::AppFrame;
	Info.OnAbort = MyApp::AppAbort;
	Info.OnExit = MyApp::AppExit;
	
	Versailles::SetCompileInfo(&Info, __DATE__, __TIME__);
	Versailles::SetVersionInfo(&Info, 0, 1, 0, 1000);
	
	Versailles::Application::RunApplication(&Info);
}
