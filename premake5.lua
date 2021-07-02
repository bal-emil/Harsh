-- Harsh-App
workspace "Harsh-App"
	architecture "x64"
	startproject "Harsh-App"

	configurations
	{
		"Debug",
		"Release"
	}
	
	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to Harsh-Engine
IncludeDir = {}
IncludeDir["GLFW"] = "vendor/GLFW/include"
IncludeDir["Glad"] = "vendor/Glad/include"
IncludeDir["ImGui"] = "vendor/imgui"
IncludeDir["assimp"] = "../ExternalLibs/assimp/include"
IncludeDir["glm"] = "vendor/glm"
IncludeDir["stb_image"] = "vendor/stb_image"


-- Projects
group "Dependencies"
	include "Harsh-Engine/vendor/GLFW"
	include "Harsh-Engine/vendor/Glad"
	include "Harsh-Engine/vendor/imgui"
group ""

include "Harsh-Engine"
include "Harsh-App"

-- Harsh-Examples
workspace "Harsh-Examples"
    startproject "Harsh-Examples"
    architecture "x64"
    startproject "Harsh-Examples"

    configurations
    {
        "Debug",
        "Release"
    }

    flags
    {
        "MultiProcessorCompile"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to Harsh-Engine
IncludeDir = {}
IncludeDir["GLFW"] = "vendor/GLFW/include"
IncludeDir["Glad"] = "vendor/Glad/include"
IncludeDir["assimp"] = "../ExternalLibs/assimp/include"
IncludeDir["ImGui"] = "vendor/imgui"
IncludeDir["glm"] = "vendor/glm"
IncludeDir["stb_image"] = "vendor/stb_image"



-- Projects
group "Dependencies"
    includeexternal "Harsh-Engine/vendor/GLFW"
    includeexternal "Harsh-Engine/vendor/Glad"
    includeexternal "Harsh-Engine/vendor/imgui"
group ""

includeexternal "Harsh-Engine"
include "Harsh-App"