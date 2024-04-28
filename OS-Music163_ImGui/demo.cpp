#include "OS-ImGui/OS-ImGui.h"

/****************************************************
* Copyright (C)	: Liv
* @file			: demo.cpp
* @author		: Liv
* @email		: 1319923129@qq.com
* @version		: 1.0
* @date			: 2024/4/28	12:23
****************************************************/

void Draw()
{
	if (GetAsyncKeyState(VK_END))
		Gui.Quit();

	ImGui::Begin("Music163", 0, ImGuiWindowFlags_AlwaysAutoResize);
	{
		static bool a = false;
		Gui.MyCheckBox("CheckBox", &a);

		ImGui::Text("This is a text.");
	}ImGui::End();

	ImGui::GetBackgroundDrawList()->AddText({ 0,0 }, ImColor(255, 255, 255), "This is a text.");
}

int main()
{
	try
	{
		Gui.AttachToMusic163("Counter-Strike 2", "", Draw);
	}
	catch (OSImGui::OSException& e)
	{
		std::cout << e.what() << std::endl;
	}

	system("pause");
	return 0;
}