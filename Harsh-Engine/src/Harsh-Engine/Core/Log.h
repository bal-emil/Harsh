#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace HARSHCore {

	class Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetLogger() { return s_Logger; }
	private:
		static std::shared_ptr<spdlog::logger> s_Logger;
	};

}

// Client log macros
#define LOG_TRACE(...)         ::HARSHCore::Log::GetLogger()->trace(__VA_ARGS__)
#define LOG_INFO(...)          ::HARSHCore::Log::GetLogger()->info(__VA_ARGS__)
#define LOG_WARN(...)          ::HARSHCore::Log::GetLogger()->warn(__VA_ARGS__)
#define LOG_ERROR(...)         ::HARSHCore::Log::GetLogger()->error(__VA_ARGS__)
#define LOG_CRITICAL(...)      ::HARSHCore::Log::GetLogger()->critical(__VA_ARGS__)
