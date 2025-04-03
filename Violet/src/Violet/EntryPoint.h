#pragma once

#ifdef VL_PLATFORM_WINDOWS

extern Violet::Application* Violet::CreateApplication();

int main(int argc, char** argv)
{
	Violet::Log::Init();	//define two logger

	VL_CORE_WARN("Initialized Log!");
	int a = 5;
	VL_TRACE("Hello! Var={0}", a);
	a = 8;

	auto app = Violet::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif

