#pragma once

#include "core/system/subsystem.h"
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include "imgui/imgui_user.h"
#include <memory>

struct gui_style
{
	struct hsv_setup
	{
		float col_main_hue = 0.0f / 255.0f;
		float col_main_sat = 0.0f / 255.0f;
		float col_main_val = 80.0f / 255.0f;

		float col_area_hue = 0.0f / 255.0f;
		float col_area_sat = 0.0f / 255.0f;
		float col_area_val = 50.0f / 255.0f;

		float col_back_hue = 0.0f / 255.0f;
		float col_back_sat = 0.0f / 255.0f;
		float col_back_val = 35.0f / 255.0f;

		float col_text_hue = 0.0f / 255.0f;
		float col_text_sat = 0.0f / 255.0f;
		float col_text_val = 255.0f / 255.0f;
		float frame_rounding = 0.0f;
	};

	void reset_style();
	void set_style_colors(const hsv_setup& _setup);
	void load_style();
	void save_style();

	hsv_setup setup;
};
//-----------------------------------------------------------------------------
// Main Class Declarations
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//  Name : gui_system (Class)
/// <summary>
/// Class for the management of interface elements.
/// </summary>
//-----------------------------------------------------------------------------
struct gui_system : public core::subsystem
{
	bool initialize();
	void dispose();
	void frame_begin(std::chrono::duration<float>);
};

struct texture;
namespace gui
{
using namespace ImGui;
static const int drag_button = 0;

ImFont* GetFont(const std::string& id);
// Helper function for passing Texture to ImGui::Image.
void Image(std::shared_ptr<texture> texture, const ImVec2& _size, const ImVec2& _uv0 = ImVec2(0.0f, 0.0f),
		   const ImVec2& _uv1 = ImVec2(1.0f, 1.0f), const ImVec4& _tintCol = ImVec4(1.0f, 1.0f, 1.0f, 1.0f),
		   const ImVec4& _borderCol = ImVec4(0.0f, 0.0f, 0.0f, 0.0f));

// Helper function for passing Texture to ImGui::ImageButton.
bool ImageButton(std::shared_ptr<texture> texture, const ImVec2& _size,
				 const ImVec2& _uv0 = ImVec2(0.0f, 0.0f), const ImVec2& _uv1 = ImVec2(1.0f, 1.0f),
				 int _framePadding = -1, const ImVec4& _bgCol = ImVec4(0.0f, 0.0f, 0.0f, 0.0f),
				 const ImVec4& _tintCol = ImVec4(1.0f, 1.0f, 1.0f, 1.0f));
bool ImageButtonEx(std::shared_ptr<texture> texture, const ImVec2& size, const char* tooltip = nullptr,
				   bool selected = false, bool enabled = true);

void ImageWithAspect(std::shared_ptr<texture> texture, const ImVec2& texture_size, const ImVec2& size,
					 const ImVec2& uv0 = ImVec2(0, 0), const ImVec2& uv1 = ImVec2(1, 1),
					 const ImVec4& tint_col = ImVec4(1, 1, 1, 1),
					 const ImVec4& border_col = ImVec4(0, 0, 0, 0));

int ImageButtonWithAspectAndLabel(std::shared_ptr<texture> texture, const ImVec2& texture_size,
								  const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1, bool selected,
								  bool* edit_label, const char* label, char* buf, size_t buf_size,
								  ImGuiInputTextFlags flags = 0);

gui_style& get_gui_style();
};
