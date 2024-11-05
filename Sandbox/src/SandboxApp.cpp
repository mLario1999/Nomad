#include <Nomad.h>

class Sandbox : public Nomad::Application 
{

};

Nomad::Application* Nomad::CreateApplication()
{
	return new Sandbox;
}