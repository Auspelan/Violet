#include "vlpch.h"
#include "Application.h"

#include "Violet/Events/ApplicationEvent.h"
#include "Violet/Log.h"

#include "GLFW/glfw3.h"


namespace Violet {

	Application::Application() 
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}
	Application::~Application() {}
	
	void Application::Run() 
	{
		while (m_Running)
		{
			m_Window->OnUpdate();
		}

	}

}