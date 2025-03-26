#pragma once

#ifdef VL_PLATFORM_WINDOWS

extern Violet::Application* Violet::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Violet::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif

