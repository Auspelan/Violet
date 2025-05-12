#include <Violet.h>

class ExampleLayer : public Violet::Layer
{
public:
	ExampleLayer() : Layer("Example")
	{
	}

	void OnUpdate() override
	{
		//VL_INFO("ExampleLayer::Update");
	}

	void OnEvent(Violet::Event& event) override
	{
		VL_TRACE("{0}", event.ToString());
	}

private:

};




/*
Sandbox类
//用于创建沙盒程序
*/
class Sandbox : public Violet::Application 
{
public:
	Sandbox() 
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Violet::ImGuiLayer());
	}

	~Sandbox() 
	{
	
	}
};

Violet::Application* Violet::CreateApplication() 
{
	return new Sandbox();
}