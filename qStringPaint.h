/*
 * Original code by Arty McLabin 24/07/15
 *  for free usage
 *
 * you are welcome to contribute to it ofc.
 * maybe one day it will become a part of the next Qt version :)
 *
     GPLv2  Copyright (C) 2015  Arty McLabin

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.*/


#ifndef QSTRINGPAINT_H
#define QSTRINGPAINT_H

#include <QString>

#define qPaintString qStringPaint //alias

namespace qStringPaint
{
    void qStringPaint(QString* str, QString htmlColorCode="#000000");
    QString qStringPaint(QString str, QString htmlColorCode="#000000");

    void qStringPaint(QString* str, int qtcolor);
    QString qStringPaint(QString str, int qtcolor);
}




#endif // QSTRINGPAINT_H


