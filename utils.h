/*
* Face Masks for SlOBS
*
* Copyright (C) 2017 General Workings Inc
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/
#pragma once
#include <Windows.h>
#include <string>
#include <fstream>
#include <vector>
#include "base64.h"

namespace Utils {

	extern const char* GetTempPath();
	extern const char* GetTempFileName();
	extern const char* Base64ToTempFile(std::string base64String);
	extern void DeleteTempFile(std::string filename);
	extern std::vector<std::string> ListFolder(std::string path, std::string glob="*");
}
