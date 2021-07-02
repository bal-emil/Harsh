#include "GLCore.h"
#include "ExampleLayer.h"
#include "glpch.h"
/* assimp include files. These three are usually needed. */
#include <assimp/cimport.h>
#include <assimp/scene.h>
#include <assimp/postprocess.h>


using namespace GLCore;



class Example : public Application
{
public:
	Example()
		: Application("OpenGL Examples")
	{
		PushLayer(new ExampleLayer());
	}
};

int main()
{
	std::unique_ptr<Example> app = std::make_unique<Example>();
	app->Run();

}