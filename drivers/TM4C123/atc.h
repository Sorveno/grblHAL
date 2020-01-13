/*
  atc.c - An embedded CNC Controller with rs274/ngc (g-code) support

  Driver code for my ATC

  Part of Grbl

  Copyright (c) 2018 Terje Io

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _ATC_H_
#define _ATC_H_

#include "GRBL/grbl.h"

void atc_tool_select (uint8_t tool);
void atc_tool_selected (tool_data_t *tool);
void atc_tool_change (parser_state_t *gc_block);

#endif
