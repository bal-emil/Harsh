#include "SandboxLayer.h"

using namespace HARSHCore;
using namespace HARSHCore::Utils;

SandboxLayer::SandboxLayer()
{
}

SandboxLayer::~SandboxLayer()
{
}

void SandboxLayer::OnAttach()
{
	EnableHarshDebugging();

	// Init here
}

void SandboxLayer::OnDetach()
{
	// Shutdown here
}

void SandboxLayer::OnEvent(Event& event)
{
	// Events here
}

void SandboxLayer::OnUpdate(Timestep dt)
{
	// Render here
}

void SandboxLayer::OnImGuiRender()
{
	// ImGui here
}
