#include <Nomad.h>

class Sandbox : public Nomad::Application 
{
	void Run() {

	}
	
};

Nomad::Application* Nomad::CreateApplication()
{
	return new Sandbox;
}