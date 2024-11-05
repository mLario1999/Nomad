#pragma once

#include "Core.h"

namespace Nomad
{
	class NM_API Application
	{
	public:
		void Run();
	};

	Application* CreateApplication();
}



