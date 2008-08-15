/*
Copyright (C) 2008 Vana Development Team

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; version 2
of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#ifndef CONNECTABLE_H
#define CONNECTABLE_H

#include <unordered_map>

using std::tr1::unordered_map;

typedef unordered_map<int, __int64> ConnectableMap;

class Connectable {
public:
	static Connectable * Instance() {
		if (singleton == 0)
			singleton = new Connectable;
		return singleton;
	}
	
	void newPlayer(int id);
	bool checkPlayer(int id);
private:
	Connectable() {};
	Connectable(const Connectable&);
	Connectable& operator=(const Connectable&);
	static Connectable *singleton;

	ConnectableMap map;
};

#endif
