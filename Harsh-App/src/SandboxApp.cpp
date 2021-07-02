#include "Harsh-Engine/Core/Core.h"
#include "SandboxLayer.h"


using namespace HARSHCore;

class Sandbox : public Application
{
public:
	Sandbox()
	{
		PushLayer(new SandboxLayer());
	}
};

int main()
{
	std::unique_ptr<Sandbox> app = std::make_unique<Sandbox>();
	app->Run();
}