#pragma once

#include "Harsh-Engine/Core/Layer.h"

#include "Harsh-Engine/Events/ApplicationEvent.h"
#include "Harsh-Engine/Events/KeyEvent.h"
#include "Harsh-Engine/Events/MouseEvent.h"

namespace HARSHCore {

	class ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;

		void Begin();
		void End();

		virtual void ImGuiLayer::OnEvent(Event& event);
		bool ImGuiLayer::OnMouseButtonPressed(MouseButtonPressedEvent& e);
	private:
		float m_Time = 0.0f;
	};

}