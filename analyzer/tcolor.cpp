/*
 * Traceshark - a visualizer for visualizing ftrace and perf traces
 * Copyright (C) 2015  Viktor Rosendahl <viktor.rosendahl@gmail.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "analyzer/tcolor.h"
#include <cstdlib>
#include <QColor>

TColor::TColor(int r, int g, int b):
	red(r), green(g), blue(b) {}

TColor::TColor() {}

QColor TColor::toQColor()
{
	QColor color(red, green, blue, 255);
	return color;
}

TColor TColor::fromQColor(const QColor &qColor)
{
	TColor color(qColor.red(), qColor.green(), qColor.blue());
	return color;
}

TColor TColor::getRandomColor()
{
	TColor color(rand() % 256, rand() % 256, rand() % 256);
	return color;
}