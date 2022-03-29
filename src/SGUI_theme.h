/*
	schoki_gui
	Copyright (C) 2022	Andy Frank Schoknecht

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef SGUI_THEME_H
#define SGUI_THEME_H

#include <SDL_pixels.h>
#include "SGUI_menu.h"
#include "SGUI_label.h"
#include "SGUI_button.h"
#include "SGUI_entry.h"

typedef struct SGUI_Theme
{
    SGUI_MenuStyle menu;
    SGUI_LabelStyle label;
	SGUI_ButtonStyle button;
	SGUI_EntryStyle entry;
} SGUI_Theme ;

#endif /* SGUI_THEME_H */
