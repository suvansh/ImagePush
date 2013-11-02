#pragma once

#include <Windows.h>

class Screen
{
public:
	static void TakeScreenshot(char* path);
	static void TakeScreenshot(RECT *location, char* path);
	static void TakeWindowScreenshot(HWND window, char* path);
};

