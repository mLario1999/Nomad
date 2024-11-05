#pragma once

#ifdef _WIN32
	#ifdef NM_BUILD_DLL
		#define NM_API __declspec(dllexport)
	#else
		#define NM_API __declspec(dllimport)
	#endif
#else 
	#error Nomad only supports Windows.
#endif 
