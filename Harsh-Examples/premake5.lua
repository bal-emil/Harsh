project "Harsh-Examples"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("../bin/" .. outputdir .. "/%{prj.name}")
	objdir ("../bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"src/**.h",
		"src/**.cpp"
	}

	includedirs
	{
		"../Harsh-Engine/vendor/spdlog/include",
		"../Harsh-Engine/src",
		"../Harsh-Engine/vendor",
		"../Harsh-Engine/%{IncludeDir.glm}",
		"../Harsh-Engine/%{IncludeDir.Glad}",
		"../Harsh-Engine/%{IncludeDir.ImGui}"
	}

	links
	{
		"Harsh-Engine"
	}

	filter "system:windows"
		systemversion "latest"

		defines
		{
			"GLCORE_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "GLCORE_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "GLCORE_RELEASE"
		runtime "Release"
        optimize "on"
