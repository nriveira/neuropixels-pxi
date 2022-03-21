/*
------------------------------------------------------------------

This file is part of the Open Ephys GUI
Copyright (C) 2020 Allen Institute for Brain Science and Open Ephys

------------------------------------------------------------------

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef __SIMULATEDCOMPONENTS_H_2C4C2D67__
#define __SIMULATEDCOMPONENTS_H_2C4C2D67__

#include <stdio.h>
#include <string.h>

#include "../NeuropixComponents.h"

class SimulatedBasestationConnectBoard;
class SimulatedFlex;
class SimulatedHeadstage;
class SimulatedProbe;

#define MAXPACKETS 64

struct SimulatedData {

	std::vector<float> ap_band
	{
		4.68,9.36,28.08,30.42,42.12,51.48,30.42,11.7,11.7,16.38,21.06,14.04,9.36,-11.7,-16.38,-16.38,-7.02,16.38,14.04,11.7,9.36,4.68,2.34,-16.38,9.36,7.02,-2.34,9.36,0.0,0.0,14.04,14.04,21.06,30.42,9.36,2.34,0.0,2.34,2.34,-14.04,-4.68,7.02,-2.34,0.0,0.0,-7.02,0.0,9.36,11.7,18.72,11.7,-4.68,-18.72,-11.7,-7.02,-4.68,-14.04,-16.38,-21.06,-14.04,-4.68,2.34,11.7,2.34,-9.36,-28.08,-35.1,-4.68,4.68,7.02,-7.02,7.02,7.02,-14.04,-16.38,-42.12,-35.1,-37.44,-42.12,-16.38,-2.34,14.04,4.68,0.0,-14.04,-14.04,2.34,4.68,-7.02,-14.04,-21.06,-21.06,-14.04,4.68,0.0,-11.7,-14.04,-28.08,-23.4,18.72,23.4,35.1,11.7,0.0,14.04,18.72,9.36,0.0,2.34,-2.34,0.0,-7.02,-9.36,-18.72,-42.12,-49.14,-74.88,-65.52,-16.38,0.0,14.04,21.06,7.02,-4.68,2.34,-11.7,-14.04,11.7,16.38,0.0,-2.34,14.04,21.06,16.38,0.0,-21.06,-37.44,-37.44,-14.04,0.0,-4.68,2.34,-7.02,-4.68,-2.34,2.34,16.38,37.44,46.8,44.46,42.12,25.74,39.78,18.72,4.68,-21.06,-18.72,-28.08,-28.08,-23.4,-14.04,-4.68,23.4,0.0,-2.34,2.34,2.34,-7.02,-9.36,-9.36,-18.72,-7.02,25.74,28.08,21.06,0.0,16.38,14.04,7.02,11.7,11.7,14.04,18.72,-4.68,-4.68,-7.02,18.72,7.02,21.06,18.72,7.02,18.72,7.02,4.68,0.0,-9.36,2.34,-4.68,-14.04,-4.68,-4.68,-7.02,0.0,-9.36,-18.72,-18.72,-4.68,4.68,16.38,16.38,25.74,18.72,4.68,2.34,-21.06,-7.02,-7.02,4.68,16.38,4.68,-7.02,4.68,-4.68,-18.72,-16.38,0.0,9.36,18.72,18.72,23.4,0.0,0.0,0.0,0.0,-2.34,0.0,2.34,-32.76,-44.46,-16.38,14.04,14.04,25.74,28.08,9.36,4.68,9.36,0.0,2.34,14.04,2.34,7.02,-4.68,-14.04,-9.36,-2.34,-32.76,-11.7,-16.38,7.02,16.38,4.68,-9.36,7.02,7.02,-2.34,2.34,18.72,14.04,23.4,0.0,-23.4,-11.7,9.36,11.7,25.74,23.4,7.02,2.34,-4.68,16.38,37.44,42.12,35.1,25.74,9.36,4.68,0.0,-9.36,0.0,0.0,11.7,51.48,42.12,21.06,0.0,14.04,16.38,25.74,21.06,14.04,18.72,21.06,18.72,0.0,-7.02,2.34,2.34,-11.7,-11.7,2.34,4.68,21.06,18.72,18.72,18.72,16.38,28.08,11.7,7.02,7.02,0.0,18.72,14.04,16.38,-7.02,-7.02,-7.02,-4.68,4.68,4.68,-7.02,-14.04,-9.36,-14.04,-11.7,4.68,4.68,18.72,21.06,4.68,-2.34,-2.34,0.0,-16.38,-4.68,9.36,21.06,4.68,-4.68,11.7,18.72,14.04,2.34,0.0,11.7,-2.34,-42.12,-100.62,-131.24,-164.0,-210.8,-238.88,-105.3,14.04,114.66,171.02,173.36,159.32,140.6,102.96,58.5,18.72,18.72,18.72,23.4,25.74,9.36,7.02,23.4,25.74,23.4,32.76,14.04,28.08,32.76,35.1,37.44,21.06,7.02,18.72,4.68,18.72,21.06,11.7,0.0,9.36,-4.68,-18.72,-30.42,-23.4,-18.72,-11.7,-2.34,-7.02,-2.34,16.38,9.36,2.34,0.0,-9.36,-9.36,9.36,16.38,28.08,18.72,28.08,25.74,16.38,14.04,0.0,-7.02,-14.04,-4.68,-7.02,-16.38,-18.72,-14.04,-4.68,9.36,16.38,7.02,2.34,2.34,2.34,0.0,0.0,-14.04,-14.04,0.0,0.0,-9.36,-21.06,-21.06,0.0,-2.34,-2.34,4.68,2.34,16.38,11.7,4.68,-7.02,-2.34,-7.02,2.34,2.34,0.0,-14.04,-23.4,-2.34,-2.34,4.68,2.34,4.68,0.0,-2.34,-16.38,-16.38,0.0,-7.02,-14.04,-32.76,-23.4,-23.4,-18.72,-2.34,-14.04,2.34,2.34,0.0,-23.4,-28.08,2.34,4.68,14.04,14.04,14.04,-2.34,0.0,-7.02,-16.38,-4.68,0.0,4.68,2.34,4.68,-2.34,-9.36,-18.72,-32.76,-30.42,-30.42,-42.12,-18.72,11.7,28.08,28.08,21.06,14.04,4.68,4.68,14.04,-2.34,-18.72,-4.68,2.34,-11.7,0.0,0.0,-9.36,-16.38,-16.38,-4.68,0.0,0.0,0.0,-2.34,-30.42,-65.52,-49.14,-35.1,-21.06,-7.02,-2.34,14.04,9.36,18.72,35.1,4.68,-2.34,-4.68,-18.72,4.68,37.44,23.4,18.72,-2.34,-2.34,-9.36,0.0,9.36,9.36,2.34,-14.04,-14.04,-11.7,11.7,18.72,21.06,4.68,-4.68,-14.04,-11.7,-14.04,-14.04,-11.7,2.34,-4.68,-4.68,-4.68,7.02,-9.36,-46.8,-46.8,-49.14,-16.38,16.38,30.42,14.04,4.68,-35.1,-21.06,-9.36,0.0,18.72,37.44,35.1,35.1,28.08,4.68,7.02,0.0,0.0,-2.34,-4.68,-11.7,7.02,11.7,14.04,0.0,2.34,0.0,0.0,16.38,39.78,28.08,2.34,-11.7,-2.34,-7.02,-9.36,-25.74,-11.7,-9.36,-4.68,-14.04,0.0,0.0,9.36,0.0,-7.02,-30.42,-46.8,-28.08,-25.74,-14.04,7.02,-7.02,-2.34,-4.68,-14.04,-14.04,-16.38,-18.72,-23.4,-18.72,-14.04,2.34,7.02,-25.74,0.0,2.34,16.38,42.12,37.44,35.1,39.78,32.76,18.72,11.7,7.02,0.0,-11.7,7.02,23.4,16.38,-18.72,-16.38,-46.8,-18.72,7.02,39.78,37.44,37.44,37.44,35.1,-2.34,-9.36,23.4,39.78,37.44,21.06,9.36,-25.74,-35.1,-11.7,18.72,18.72,21.06,18.72,16.38,21.06,23.4,21.06,21.06,25.74,23.4,28.08,7.02,18.72,9.36,-4.68,4.68,-14.04,-14.04,9.36,2.34,2.34,4.68,7.02,18.72,16.38,9.36,16.38,32.76,32.76,14.04,-7.02,-16.38,-2.34,0.0,-4.68,0.0,4.68,-9.36,-21.06,-16.38,-25.74,-32.76,-16.38,-11.7,-16.38,-9.36,11.7,7.02,-14.04,-14.04,-4.68,0.0,-4.68,-16.38,0.0,16.38,0.0,23.4,32.76,63.18,58.5,0.0,-21.06,-14.04,23.4,21.06,9.36,2.34,14.04,2.34,-4.68,-9.36,4.68,2.34,28.08,21.06,14.04,14.04,0.0,-11.7,-9.36,-2.14,-7.02,-2.34,-4.68,-4.68,2.34,0.0,-2.34,2.34,14.04,23.4,21.06,21.06,44.46,30.42,18.72,16.38,25.74,11.7,-23.4,-32.76,-32.76,-16.38,0.0,2.34,28.08,32.76,14.04,4.68,7.02,16.38,23.4,11.7,-9.36,-14.04,2.34,14.04,23.4,42.12,56.16,35.1,9.36,4.68,11.7,7.02,-9.36,-7.02,-2.34,11.7,7.02,-7.02,-7.02,9.36,-9.36,-16.38,-21.06,-18.72,-4.68,-18.72,11.7,18.72,4.68,-25.74,-16.38,4.68,9.36,28.08,30.42,60.84,46.8,42.12,25.74,0.0,11.7,23.4,0.0,16.38,9.36,21.06,23.4,28.08,18.72,16.38,7.02,9.36,4.68,4.68,-14.04,-16.38,-21.06,-21.06,0.0,7.02,11.7,9.36,4.68,-16.38,-37.44,-30.42,-9.36,-14.04,-11.7,-18.72,0.0,-4.68,23.4,30.42,18.72,7.02,21.06,28.08,18.72,18.72,0.0,0.0,0.0,18.72,7.02,-21.06,-35.1,-23.4,-23.4,-39.78,-39.78,-25.74,-23.4,-23.4,-18.72,-4.68,-14.04,-14.04,-11.7,-7.02,-14.04,-11.7,2.34,2.34,11.7,16.38,0.0,-18.72,-30.42,-14.04,-7.02,21.06,14.04,23.4,28.08,25.74,44.46,56.16,39.78,21.06,4.68,-7.02,-11.7,-2.34,2.34,9.36,0.0,-35.1,-35.1,-25.74,-18.72,2.34,-2.34,14.04,14.04,18.72,-4.68,2.34,-7.02,4.68,18.72,18.72,-7.02,-18.72,-4.68,2.34,2.34,-9.36,0.0,0.0,-11.7,0.0,0.0,11.7,-9.36,-14.04,-21.06,-14.04,14.04,18.72,18.72,14.04,16.38,32.76,35.1,30.42,18.72,0.0,7.02,11.7,7.02,14.04,28.08,4.68,14.04,4.68,2.34,0.0,0.0,11.7,16.38,21.06,9.36,0.0,-11.7,-18.72,-2.34,7.02,4.68,18.72,14.04,0.0,-4.68,0.0,14.04,7.02,0.0,9.36,14.04,30.42,32.76,25.74,18.72,-2.34,-23.4,-28.08,-37.44,-56.16,-30.42,-2.34,-11.7,-14.04,-7.02,-14.04,-18.72,-16.38,-9.36,-21.06,-28.08,-18.72,0.0,4.68,7.02,7.02,0.0,2.34,7.02,-2.34,16.38,9.36,7.02,2.34,9.36,35.1,51.48,25.74,-7.02,-18.72,-16.38,-4.68,0.0,-9.36,-7.02,-2.34,-21.06,-21.06,-7.02,-7.02,-4.68,23.4,21.06,0.0,0.0,-7.02,0.0,0.0,7.02,2.34,-2.34,11.7,9.36,-9.36,-28.08,-9.36,2.34,16.38,9.36,9.36,4.68,30.42,21.06,7.02,4.68,-7.02,-2.34,18.72,21.06,9.36,21.06,4.68,0.0,-18.72,-37.44,-30.42,-18.72,-18.72,9.36,30.42,35.1,30.42,0.0,-18.72,-11.7,2.34,7.02,-23.4,-39.78,-35.1,-18.72,2.34,23.4,11.7,-7.02,14.04,4.68,2.34,9.36,18.72,0.0,9.36,2.34,11.7,-11.7,-25.74,-30.42,-11.7,-25.74,-23.4,-14.04,0.0,21.06,21.06,-9.36,-28.08,-35.1,-44.46,-35.1,-28.08,-14.04,-11.7,-4.68,-16.38,7.02,4.68,14.04,23.4,42.12,37.44,4.68,-7.02,0.0,-2.34,23.4,2.34,0.0,0.0,-18.72,-35.1,-44.46,-32.76,-21.06,-14.04,23.4,23.4,18.72,9.36,11.7,2.34,-11.7,-2.34,-4.68,7.02,16.38,7.02,-18.72,-25.74,-11.7,0.0,-2.34,16.38,23.4,37.44,25.74,28.08,2.34,0.0,0.0,0.0,2.34,-4.68,-16.38,-11.7,2.34,0.0,-4.68,-7.02,-2.34,7.02,0.0,-2.34,-21.06,-14.04,-23.4,-14.04,-4.68,-14.04,0.0,0.0,-11.7,-32.76,-7.02,9.36,9.36,-16.38,-44.46,-14.04,4.68,21.06,4.68,-46.8,-79.56,-91.26,-53.82,0.0,21.06,46.8,58.5,44.46,30.42,9.36,4.68,23.4,25.74,9.36,23.4,32.76,49.14,42.12,25.74,2.34,-11.7,9.36,2.34,0.0,0.0,9.36,14.04,23.4,35.1,32.76,44.46,46.8,42.12,44.46,25.74,-2.34,-7.02,-16.38,-37.44,-18.72,-18.72,-14.04,0.0,25.74,23.4,9.36,2.34,2.34,7.02,23.4,14.04,-11.7,-11.7,-35.1,-14.04,-14.04,-16.38,-11.7,-14.04,-18.72,4.68,21.06,21.06,2.34,-11.7,-28.08,-18.72,-7.02,-9.36,-9.36,0.0,2.34,-2.34,14.04,11.7,16.38,21.06,4.68,23.4,16.38,11.7,18.72,2.34,-21.06,-14.04,-11.7,-2.34,-7.02,2.34,16.38,37.44,11.7,18.72,28.08,9.36,-9.36,7.02,21.06,21.06,21.06,30.42,18.72,14.04,4.68,0.0,2.34,-7.02,-7.02,-18.72,-11.7,-18.72,-7.02,2.34,11.7,4.68,7.02,2.34,-11.7,-11.7,-2.34,-11.7,-9.36,-7.02,-4.68,-2.34,-14.04,-4.68,2.34,-11.7,-7.02,9.36,21.06,11.7,16.38,18.72,18.72,18.72,0.0,23.4,4.68,14.04,28.08,44.46,28.08,25.74,30.42,30.42,56.16,37.44,25.74,25.74,23.4,25.74,23.4,16.38,-7.02,-14.04,-4.68,-18.72,-21.06,-4.68,9.36,42.12,44.46,42.12,35.1,23.4,18.72,16.38,14.04,4.68,-4.68,-25.74,-21.06,-23.4,-18.72,-14.04,-2.34,11.7,2.34,2.34,-4.68,2.34,-14.04,-25.74,-11.7,-30.42,-46.8,-28.08,0.0,-2.34,11.7,4.68,21.06,9.36,0.0,2.34,2.34,-7.02,7.02,9.36,2.34,9.36,11.7,4.68,23.4,16.38,0.0,-2.34,-7.02,7.02,-7.02,9.36,2.34,0.0,9.36,16.38,18.72,7.02,0.0,4.68,0.0,-4.68,0.0,4.68,7.02,21.06,2.34,4.68,4.68,7.02,21.06,42.12,23.4,4.68,25.74,9.36,-9.36,-7.02,-28.08,-30.42,-9.36,4.68,-2.34,9.36,-4.68,14.04,28.08,-2.34,-18.72,-28.08,-23.4,-11.7,-2.34,0.0,4.68,21.06,9.36,-7.02,-9.36,-21.06,-23.4,-21.06,-14.04,-14.04,-9.36,0.0,-4.68,-7.02,-2.34,9.36,0.0,-2.34,-4.68,28.08,16.38,2.34,-4.68,4.68,11.7,2.34,14.04,2.34,-16.38,-21.06,-2.34,2.34,25.74,30.42,42.12,23.4,16.38,18.72,9.36,0.0,-21.06,0.0,-11.7,-11.7,11.7,14.04,28.08,28.08,4.68,21.06,16.38,4.68,21.06,14.04,-2.34,7.02,9.36,0.0,7.02,-4.68,0.0,-7.02,-16.38,-11.7,-4.68,-2.34,-2.34,0.0,-7.02,2.34,9.36,28.08,23.4,18.72,2.34,-14.04,-14.04,-16.38,-14.04,-9.36,4.68,18.72,30.42,30.42,25.74,9.36,-2.34,-2.34,2.34,11.7,0.0,7.02,-2.34,-11.7,-16.38,-14.04,-7.02,4.68,21.06,44.46,32.76,14.04,-11.7,-4.68,-14.04,-4.68,-14.04,-7.02,0.0,-16.38,0.0,4.68,4.68,0.0,-9.36,-23.4,-11.7,7.02,9.36,18.72,18.72,14.04,28.08,23.4,49.14,25.74,16.38,4.68,-2.34,0.0,7.02,14.04,2.34,-32.76,-42.12,-23.4,16.38,32.76,30.42,18.72,4.68,-9.36,-16.38,0.0,0.0,11.7,28.08,16.38,21.06,30.42,32.76,39.78,30.42,18.72,14.04,25.74,14.04,7.02,-7.02,2.34,11.7,11.7,2.34,11.7,14.04,7.02,21.06,-2.34,-2.34,0.0,-4.68,-11.7,-4.68,-4.68,7.02,0.0,9.36,9.36,0.0,0.0,7.02,0.0,23.4,37.44,32.76,30.42,28.08,30.42,16.38,9.36,14.04,14.04,-14.04,0.0,18.72,35.1,21.06,11.7,0.0,4.68,18.72,25.74,30.42,28.08,18.72,7.02,0.0,-7.02,0.0,-2.34,-42.12,-49.14,-58.5,-32.76,-21.06,0.0,-2.34,2.34,2.34,2.34,-7.02,7.02,-11.7,-35.1,-32.76,-16.38,-7.02,-2.34,7.02,-2.34,-4.68,-21.06,-21.06,0.0,-2.34,21.06,9.36,0.0,0.0,-56.16,-65.52,-16.38,28.08,2.34,-9.36,2.34,9.36,14.04,7.02,16.38,0.0,0.0,14.04,11.7,11.7,-14.04,-32.76,-28.08,-18.72,0.0,28.08,23.4,9.36,14.04,4.68,11.7,18.72,21.06,7.02,-4.68,-2.34,-14.04,-23.4,-16.38,0.0,9.36,18.72,23.4,23.4,2.34,-23.4,-7.02,-14.04,-35.1,-30.42,-14.04,-11.7,-4.68,0.0,7.02,21.06,14.04,11.7,14.04,-2.34,-11.7,-25.74,-28.08,-18.72,-37.44,-23.4,-9.36,-11.7,0.0,9.36,0.0,7.02,-14.04,-35.1,-18.72,30.42,32.76,37.44,21.06,25.74,-7.02,-18.72,2.34,21.06,21.06,18.72,28.08,30.42,32.76,39.78,25.74,37.44,37.44,28.08,18.72,-2.34,11.7,30.42,28.08,32.76,39.78,30.42,-9.36,-35.1,-32.76,-4.68,-2.34,0.0,-4.68,2.34,7.02,7.02,-30.42,-37.44,-28.08,-53.82,-44.46,-35.1,-32.76,-32.76,-51.48,-49.14,-37.44,-32.76,0.0,2.34,11.7,30.42,23.4,16.38,9.36,-4.68,2.34,-7.02,-16.38,-23.4,-14.04,-16.38,-7.02,-16.38,-2.34,-11.7,-21.06,-16.38,-14.04,-18.72,-32.76,-32.76,-56.16,-51.48,-44.46,-23.4,-21.06,-9.36,-11.7,-7.02,9.36,4.68,-18.72,-32.76,-39.78,-21.06,-21.06,-16.38,-4.68,28.08,30.42,18.72,-4.68,4.68,18.72,23.4,14.04,11.7,7.02,2.34,4.68,9.36,16.38,7.02,4.68,11.7,21.06,7.02,-11.7,-7.02,0.0,4.68,9.36,4.68,-14.04,-9.36,2.34,-14.04,-30.42,-37.44,-25.74,-11.7,-4.68,23.4,18.72,4.68,21.06,16.38,9.36,0.0,-4.68,-7.02,-9.36,-2.34,0.0,18.72,35.1,25.74,0.0,-9.36,-9.36,9.36,11.7,9.36,-9.36,-21.06,2.34,9.36,11.7,21.06,16.38,7.02,-2.34,0.0,2.34,7.02,2.34,4.68,14.04,4.68,-2.34,4.68,-9.36,-16.38,-18.72,-9.36,-11.7,-9.36,0.0,-11.7,-9.36,2.34,4.68,0.0,21.06,4.68,4.68,4.68,11.7,0.0,-11.7,-16.38,4.68,2.34,-9.36,-30.42,-37.44,-28.08,-44.46,-44.46,-14.04,0.0,23.4,28.08,21.06,7.02,7.02,-16.38,-23.4,0.0,11.7,-2.34,-9.36,-35.1,-42.12,-30.42,-28.08,-14.04,-14.04,-9.36,-2.34,-21.06,-9.36,0.0,-9.36,-46.8,-84.24,-112.52,-178.04,-234.39,-140.6,-30.42,46.8,109.98,109.98,107.64,112.32,102.96,88.92,70.2,60.84,53.82,63.18,23.4,0.0,21.06,30.42,28.08,16.38,9.36,-9.36,-11.7,-2.34,18.72,30.42,21.06,0.0,2.34,21.06,4.68,7.02,-2.34,-16.38,-7.02,-11.7,-35.1,-21.06,-7.02,16.38,21.06,25.74,16.38,18.72,16.38,21.06,35.1,2.34,4.68,2.34,0.0,-2.34,-4.68,-16.38,0.0,-9.36,-14.04,14.04,25.74,23.4,35.1,14.04,7.02,-2.34,-14.04,-30.42,-7.02,-9.36,0.0,0.0,4.68,-7.02,-9.36,-30.42,-30.42,-14.04,9.36,14.04,9.36,18.72,9.36,2.34,23.4,18.72,11.7,0.0,16.38,14.04,-2.34,9.36,7.02,18.72,21.06,25.74,2.34,-25.74,-25.74,-9.36,0.0,9.36,11.7,2.34,9.36,14.04,4.68,2.34,0.0,11.7,-14.04,-32.76,-14.04,14.04,2.34,-2.34,-23.4,-23.4,-14.04,-18.72,-2.34,-4.68,-2.34,0.0,2.34,0.0,-2.34,-30.42,-42.12,-7.02,25.74,35.1,18.72,14.04,-2.34,-18.72,-30.42,-42.12,-32.76,-14.04,11.7,2.34,16.38,11.7,2.34,-18.72,-9.36,-7.02,0.0,16.38,7.02,16.38,21.06,-9.36,-25.74,-63.18,-42.12,-35.1,-7.02,14.04,42.12,44.46,35.1,30.42,-16.38,-46.8,-37.44,2.34,18.72,37.44,25.74,16.38,18.72,16.38,9.36,21.06,21.06,7.02,-4.68,-21.06,-39.78,-39.78,-35.1,-35.1,-4.68,21.06,28.08,60.84,53.82,21.06,9.36,-4.68,-14.04,-11.7,-18.72,-44.46,-46.8,-44.46,-39.78,-42.12,-11.7,9.36,2.34,21.06,23.4,23.4,23.4,25.74,9.36,-4.68,0.0,4.68,9.36,7.02,-4.68,2.34,2.34,0.0,7.02,30.42,35.1,23.4,2.34,-16.38,-14.04,-7.02,7.02,-18.72,-7.02,-18.72,-2.34,-9.36,4.68,11.7,-2.34,0.0,-11.7,-4.68,-9.36,9.36,18.72,35.1,32.76,30.42,11.7,9.36,2.34,-21.06,-16.38,-4.68,4.68,-16.38,-2.34,-2.34,7.02,18.72,7.02,9.36,14.04,18.72,21.06,2.34,-9.36,0.0,0.0,-2.34,-28.08,-32.76,-39.78,-53.82,-56.16,-39.78,-42.12,-49.14,-35.1,-35.1,0.0,-2.34,9.36,11.7,7.02,0.0,4.68,-2.34,-14.04,-23.4,-2.34,2.34,4.68,-4.68,-25.74,-16.38,7.02,-7.02,0.0,-11.7,-2.34,7.02,0.0,0.0,-7.02,-18.72,-25.74,-9.36,7.02,14.04,16.38,11.7,-2.34,-9.36,-7.02,4.68,11.7,-2.34,28.08,14.04,-7.02,-11.7,-16.38,7.02,35.1,30.42,23.4,11.7,7.02,-11.7,-25.74,-32.76,-35.1,-18.72,-7.02,-9.36,-9.36,-9.36,-18.72,-37.44,-11.7,-4.68,-2.34,-11.7,-4.68,11.7,2.34,-2.34,0.0,-9.36,-11.7,0.0,-9.36,-9.36,0.0,0.0,2.34,0.0,7.02,9.36,0.0,4.68,0.0,-7.02,0.0,-2.34,-28.08,-42.12,4.68,28.08,4.68,-2.34,2.34,14.04,28.08,32.76,14.04,-30.42,-49.14,-39.78,-11.7,7.02,0.0,-9.36,-23.4,-11.7,-30.42,-16.38,-9.36,2.34,-14.04,-11.7,-4.68,-11.7,-4.68,-4.68,4.68,-2.34,-14.04,-2.34,-9.36,2.34,-21.06,-39.78,0.0,2.34,23.4,32.76,23.4,-2.34,-11.7,-32.76,-23.4,14.04,7.02,14.04,0.0,-2.34,2.34,-7.02,14.04,16.38,30.42,21.06,21.06,39.78,23.4,35.1,37.44,30.42,11.7,14.04,0.0,-18.72,-16.38,-7.02,2.34,9.36,4.68,7.02,2.34,23.4,23.4,14.04,-2.34,0.0,4.68,0.0,-4.68,2.34,23.4,9.36,21.06,16.38,25.74,25.74,32.76,14.04,14.04,4.68,16.38,21.06,21.06,28.08,14.04,-7.02,-18.72,-9.36,9.36,18.72,14.04,7.02,18.72,30.42,58.5,56.16,30.42,2.34,16.38,9.36,0.0,2.34,14.04,32.76,23.4,11.7,7.02,-18.72,-14.04,-2.34,-2.34,7.02,-14.04,-44.46,-67.86,-49.14,-23.4,-2.34,21.06,23.4,42.12,42.12,44.46,56.16,49.14,65.52,63.18,21.06,9.36,-4.68,9.36,14.04,28.08,30.42,32.76,35.1,18.72,7.02,7.02,2.34,0.0,2.34,2.34,0.0,4.68,9.36,7.02,-4.68,21.06,7.02,4.68,-16.38,-18.72,-18.72,2.34,14.04,16.38,16.38,16.38,9.36,18.72,11.7,28.08,14.04,21.06,-16.38,-21.06,-4.68,4.68,-7.02,-25.74,2.34,16.38,16.38,16.38,32.76,23.4,23.4,23.4,25.74,16.38,32.76,25.74,11.7,2.34,14.04,11.7,0.0,11.7,18.72,18.72,23.4,21.06,9.36,9.36,30.42,37.44,14.04,23.4,25.74,9.36,7.02,14.04,9.36,21.06,23.4,28.08,11.7,-11.7,-14.04,-9.36,-7.02,-18.72,0.0,16.38,35.1,30.42,35.1,32.76,30.42,46.8,21.06,16.38,2.34,-4.68,2.34,11.7,18.72,21.06,14.04,-11.7,-39.78,-44.46,-51.48,-37.44,-28.08,-2.34,16.38,28.08,18.72,14.04,14.04,11.7,14.04,0.0,7.02,0.0,-2.34,9.36,30.42,14.04,11.7,4.68,0.0,11.7,14.04,-2.34,0.0,0.0,-7.02,0.0,0.0,0.0,-7.02,-14.04,-18.72,-30.42,-35.1,-44.46,-25.74,-21.06,-21.06,-16.38,2.34,18.72,30.42,42.12,9.36,0.0,4.68,21.06,0.0,-16.38,-23.4,-21.06,-9.36,-7.02,0.0,0.0,2.34,0.0,11.7,16.38,30.42,32.76,39.78,37.44,30.42,16.38,0.0,-2.34,-7.02,-4.68,-11.7,-30.42,-18.72,-16.38,-9.36,0.0,-16.38,-9.36,-2.34,9.36,9.36,-14.04,-23.4,0.0,2.34,4.68,9.36,14.04,7.02,0.0,7.02,4.68,-2.34,-11.7,-7.02,4.68,4.68,2.34,9.36,11.7,9.36,0.0,-11.7,-25.74,-11.7,-4.68,-2.34,-21.06,-16.38,-21.06,-14.04,0.0,-11.7,-9.36,-2.34,-11.7,-25.74,-16.38,-16.38,-11.7,9.36,7.02,0.0,21.06,21.06,16.38,14.04,-9.36,-18.72,-21.06,2.34,4.68,16.38,30.42,0.0,2.34,21.06,14.04,4.68,-39.78,-28.08,-14.04,0.0,14.04,23.4,35.1,32.76,2.34,-11.7,-39.78,-25.74,2.34,21.06,11.7,14.04,9.36,-2.34,-2.34,18.72,28.08,32.76,7.02,4.68,7.02,7.02,14.04,4.68,21.06,21.06,30.42,28.08,35.1,32.76,16.38,0.0,0.0,4.68,11.7,4.68,7.02,-4.68,-7.02,-32.76,-21.06,-23.4,0.0,11.7,4.68,-23.4,-14.04,-7.02,-11.7,-18.72,-28.08,-2.34,0.0,11.7,16.38,4.68,23.4,16.38,4.68,2.34,4.68,28.08,35.1,18.72,9.36,-4.68,-11.7,-2.34,-56.16,-81.9,-126.56,-222.5,-236.73,-117.2,30.42,117.0,147.62,156.98,135.72,112.32,93.6,53.82,58.5,49.14,46.8,37.44,14.04,21.06,-9.36,-30.42,-23.4,-30.42,-28.08,-25.74,-9.36,-14.04,2.34,2.34,4.68,2.34,7.02
		,9.36,4.68,0.0,18.72,-2.34,-16.38,-23.4,-7.02,2.34,-4.68,-4.68,11.7,16.38,14.04,16.38,32.76,30.42,21.06,4.68,-2.34,14.04,11.7,2.34,18.72,28.08,30.42,16.38,16.38,42.12,46.8,18.72,0.0,4.68,-2.34,-11.7,7.02,28.08,39.78,14.04,0.0,-4.68,-25.74,-67.86,-72.54,-44.46,-16.38,9.36,14.04,-9.36,-9.36,-2.34,-23.4,-18.72,-9.36,4.68,35.1,46.8,4.68,-42.12,-25.74,-2.34,18.72,46.8,37.44,32.76,11.7,23.4,28.08,11.7,-16.38,-9.36,-9.36,9.36,7.02,9.36,4.68,18.72,14.04,16.38,7.02,2.34,-16.38,-11.7,-9.36,0.0,0.0,2.34,35.1,18.72,16.38,14.04,11.7,-9.36,-4.68,4.68,14.04,7.02,14.04,16.38,30.42,14.04,-7.02,9.36,18.72,18.72,18.72,4.68,2.34,30.42,18.72,30.42,0.0,-28.08,-16.38,-28.08,-2.34,0.0,23.4,25.74,21.06,21.06,23.4,30.42,37.44,21.06,7.02,-2.34,-46.8,-65.52,-67.86,-16.38,37.44,56.16,39.78,39.78,42.12,49.14,0.0,-21.06,-11.7,0.0,0.0,-11.7,-11.7,0.0,-14.04,-4.68,0.0,7.02,-2.34,-32.76,-37.44,-11.7,-14.04,-16.38,-7.02,-4.68,7.02,28.08,39.78,32.76,35.1 
	};

	std::vector<float> lfp_band
	{
		0.0,12.58,24.97,36.95,48.35,58.98,68.68,77.28,84.65,90.68,95.26,98.33,99.84,99.76,98.09,94.87,90.14,83.97,76.47,67.75,57.96,47.24,35.78,23.74,11.33,-1.26,-13.83,-26.19,-38.12,-49.45,-60.0,-69.59,-78.07,-85.31,-91.2,-95.64,-98.55,-99.9,-99.66,-97.84,-94.46,-89.58,-83.28,-75.65,-66.82,-56.93,-46.13,-34.6,-22.52,-10.08,2.52,15.08,27.4,39.29,50.55,61.0,70.49,78.85,85.96,91.71,96.0,98.76,99.95,99.55,97.57,94.04,89.01,82.57,74.82,65.88,55.88,45.01,33.41,21.28,8.82,-3.78,-16.33,-28.61,-40.44,-51.63,-62.0,-71.38,-79.62,-86.6,-92.21,-96.34,-98.95,-99.98,-99.43,-97.29,-93.6,-88.43,-81.85,-73.98,-64.92,-54.83,-43.87,-32.22,-20.05,-7.56,5.04,17.57,29.82,41.59,52.71,62.98,72.25,80.38,87.23,92.69,96.67,99.12,100.0,99.28,96.99,93.15,87.84,81.12,73.12,63.96,53.77,42.74,31.02,18.81,6.3,-6.3,-18.81,-31.02,-42.74,-53.77,-63.96,-73.12,-81.12,-87.84,-93.15,-96.99,-99.28,-100.0,-99.12,-96.67,-92.69,-87.23,-80.38,-72.25,-62.98,-52.71,-41.59,-29.82,-17.57,-5.04,7.56,20.05,32.22,43.87,54.83,64.92,73.98,81.85,88.43,93.6,97.29,99.43,99.98,98.95,96.34,92.21,86.6,79.62,71.38,62.0,51.63,40.44,28.61,16.33,3.78,-8.82,-21.28,-33.41,-45.01,-55.88,-65.88,-74.82,-82.57,-89.01,-94.04,-97.57,-99.55,-99.95,-98.76,-96.0,-91.71,-85.96,-78.85,-70.49,-61.0,-50.55,-39.29,-27.4,-15.08,-2.52,10.08,22.52,34.6,46.13,56.93,66.82,75.65,83.28,89.58,94.46,97.84,99.66,99.9,98.55,95.64,91.2,85.31,78.07,69.59,60.0,49.45,38.12,26.19,13.83,1.26,-11.33,-23.74,-35.78,-47.24,-57.96,-67.75,-76.47,-83.97,-90.14,-94.87,-98.09,-99.76,-99.84,-98.33,-95.26,-90.68,-84.65,-77.28,-68.68,-58.98,-48.35,-36.95,-24.97,-12.58,-0.0
	};
};

class SimulatedProbe : public Probe
{
public:
	SimulatedProbe(Basestation* bs,
		Headstage* hs,
		Flex* fl,
		int dock,
		String partNumber,
		int serialNumber);

	bool open() override;
	bool close() override;

	void initialize(bool signalChainIsLoading) override;

	void selectElectrodes() override;
	void setAllReferences() override;
	void setAllGains() override;
	void setApFilterState() override;
	
	void writeConfiguration() override;

	void startAcquisition() override;
	void stopAcquisition() override;

	bool runBist(BIST bistType) override;

	void calibrate() override;

	void getInfo() override;

	bool generatesLfpData(); 
	bool hasApFilterSwitch() {
		return apFilterSwitch;
	}

	void run() override;

	bool apFilterSwitch;

	SimulatedData simulatedData;

	int SKIP;

	float apSamples[385 * 12 * MAXPACKETS];
	float lfpSamples[385 * MAXPACKETS];
	int64 ap_timestamps[12 * MAXPACKETS];
	uint64 event_codes[12 * MAXPACKETS];
	int64 lfp_timestamps[MAXPACKETS];
	uint64 lfp_event_codes[MAXPACKETS];

};



#endif  // __SIMULATEDCOMPONENTS_H_2C4C2D67__