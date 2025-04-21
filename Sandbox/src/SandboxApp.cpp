#include <Violet.h>

/*
Sandbox类
//用于创建沙盒程序
*/
class Sandbox : public Violet::Application 
{
public:
	Sandbox() {}
	~Sandbox() {}
};

Violet::Application* Violet::CreateApplication() 
{
	return new Sandbox();
}