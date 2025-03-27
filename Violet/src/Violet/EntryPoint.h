#pragma once

#ifdef VL_PLATFORM_WINDOWS

extern Violet::Application* Violet::CreateApplication();

int main(int argc, char** argv)
{
	Violet::Log::Init();
	VL_CORE_WARN("Initialized Log!");
	int a = 5;
	VL_INFO("Hello! Var={0}", a);
	auto app = Violet::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif

