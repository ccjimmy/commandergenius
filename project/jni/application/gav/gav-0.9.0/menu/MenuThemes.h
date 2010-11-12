/* -*- C++ -*- */
/*
  GAV - Gpl Arcade Volleyball
  
  Copyright (C) 2002
  GAV team (http://sourceforge.net/projects/gav/)

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef __MENUTHEMES_H__
#define __MENUTHEMES_H__

#include <SDL.h>
#include "MenuItem.h"
#include "globals.h"

class MenuThemes: public Menu {
  bool firstTime;

public:
  MenuThemes(ScreenFont *nf, ScreenFont *rf) {
    normal_font = nf;
    selected_font = rf;
    firstTime = false;
  }

  virtual int execute(InputState *is, std::stack<Menu *> &s) {
    if ( firstTime ) {
      DIR *dir;
      if ((dir = opendir(ThemeDir.c_str())) )
    }

    Menu::execute(is, s);
  }
};

#endif
