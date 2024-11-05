#pragma once

#ifdef _WIN32

extern Nomad::Application* Nomad::CreateApplication();

int main() 
{
	auto app = Nomad::CreateApplication();
	app->Run();
	delete app;
}

#endif
