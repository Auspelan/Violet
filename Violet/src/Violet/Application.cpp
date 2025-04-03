#include "Application.h"

#include "Violet/Events/ApplicationEvent.h"
#include "Violet/Log.h"

#include <iostream>

namespace Violet {

	Application::Application() {}
	Application::~Application() {}

	void Application::Run() 
	{
		WindowResizeEvent e(1280,720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			VL_TRACE(e.ToString());
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			VL_TRACE(e.ToString());
		}

		while (true)
		{

		}
	}

}