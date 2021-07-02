#pragma once

#include <memory>

#ifdef HARSHCORE_DEBUG
	#define HARSHCORE_ENABLE_ASSERTS
#endif

#ifdef HARSHCORE_ENABLE_ASSERTS
	#define HARSHCORE_ASSERT(x, ...) { if(!(x)) { LOG_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define HARSHCORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#define HARSHCORE_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)