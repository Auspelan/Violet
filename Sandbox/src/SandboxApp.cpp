#include <Violet.h>

/*
Sandbox��
//���ڴ���ɳ�г���
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