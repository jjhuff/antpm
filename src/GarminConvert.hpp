// -*- mode: c++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2; coding: utf-8-unix -*-
/***************************************************************************
 *   Copyright (C) 2010 by Oleg Khudyakov                                  *
 *   prcoder@gmail.com                                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
// ***** BEGIN LICENSE BLOCK *****
////////////////////////////////////////////////////////////////////
// Copyright (c) 2012-2013 RALOVICH, Kristóf                      //
//                                                                //
// This program is free software; you can redistribute it and/or  //
// modify it under the terms of the GNU General Public License    //
// version 2 as published by the Free Software Foundation.        //
//                                                                //
////////////////////////////////////////////////////////////////////
// ***** END LICENSE BLOCK *****
#pragma once


#include <stdintfwd.hpp>
#include <string>
#include <vector>

#define GARMIN_EPOCH 631065600

using namespace std;

class GarminConvert
{
public:
    static double coord(int32_t coord);
    static double altitude(uint16_t alt);
    static double length(uint32_t centimeters);
    static double speed(uint16_t speed);
    static double weight(uint16_t weight);
    static string gmTime(uint32_t time);
    static string localTime(uint32_t time);
    static string gTime(uint32_t time);
    static string gString(uint8_t *str, int maxSize);
    static string gHex(uint8_t *buf, int size);
    static string gHex(vector<uint8_t> &buf);
    static string hexDump(vector<uint8_t> &buf);
};
