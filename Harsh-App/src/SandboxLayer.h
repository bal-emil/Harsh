#pragma once

#include <HarshCore.h>
#include <HarshCoreUtils.h>

class SandboxLayer : public HARSHCore::Layer
{
public:
	SandboxLayer();
	virtual ~SandboxLayer();

	virtual void OnAttach() override;
	virtual void OnDetach() override;
	virtual void OnEvent(HARSHCore::Event& event) override;
	virtual void OnUpdate(HARSHCore::Timestep ts) override;
	virtual void OnImGuiRender() override;
private:
};