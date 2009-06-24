/*
Copyright (C) 2008-2009 Vana Development Team

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
#include "VersionConstants.h"
#include "GameConstants.h"
#include "MapleVersion.h"

uint32_t Levels::exps[Stats::PlayerLevels - 1] = {
	// 20 rows of 10 levels each (with 9 in the last row)
#if MAPLE_VERSION >= 70
	15, 34, 57, 92, 135, 372, 560, 840, 1242, 1144,
	1573, 2144, 2800, 3640, 4700, 5893, 7360, 9144, 11120, 13478,
	16268, 19320, 22881, 27009, 31478, 36601, 42446, 48722, 55816, 76560,
	86784, 98208, 110932, 124432, 139372, 155865, 173280, 192400, 213345, 235372,
	259392, 285532, 312928, 342624, 374760, 408336, 444544, 483532, 524160, 567772,
	598886, 631704, 666321, 702836, 741351, 781976, 824828, 870028, 917705, 967995,
	1021040, 1076993, 1136012, 1198265, 1263930, 1333193, 1406252, 1483314, 1564600, 1650340,
	1740778, 1836172, 1936794, 2042930, 2154882, 2272969, 2397528, 2528912, 2667496, 2813674,
	2967863, 3130501, 3302052, 3483004, 3673872, 3875200, 4087561, 4311559, 4547832, 4797052,
	5059931, 5337215, 5629694, 5938201, 6263614, 6606860, 6968915, 7350811, 7753635, 8178534,
	8626717, 9099461, 9598112, 10124088, 10678888, 11264090, 11881362, 12532460, 13219239, 13943652,
	14707764, 15513749, 16363902, 17260644, 18206527, 19204244, 20256636, 21366700, 22537594, 23772654,
	25075395, 26449526, 27898960, 29427822, 31040466, 32741483, 34535716, 36428272, 38424541, 40530206,
	42751261, 45094030, 47565183, 50171755, 52921167, 55821246, 58880250, 62106888, 65510344, 69100311,
	72887008, 76881216, 81094306, 85538273, 90225770, 95170142, 100385465, 105886588, 111689173, 117809740,
	124265713, 131075474, 138258409, 145834970, 153826726, 162256430, 171148082, 180526996, 190419876, 200854884,
	211861732, 223471754, 235718006, 248635352, 262260569, 276632448, 291791906, 307782102, 324648561, 342439302,
	361204976, 380999008, 401877753, 423900654, 447130409, 471633156, 497478652, 524740482, 553496260, 583827855,
	615821621, 649568646, 685165008, 722712050, 762316670, 804091623, 848155844, 894634784, 943660769, 995373379,
	1049919840, 1107455447, 1168144005, 1232158296, 1299680571, 1370903066, 1446028554, 1525270918, 1608855764
#else
	15, 34, 57, 92, 135, 372, 560, 840, 1242, 1716,
	2360, 3216, 4200, 5460, 7050, 8840, 11040, 13716, 16680, 20216,
	24402, 28980, 34320, 40512, 47216, 54900, 63666, 73080, 83720, 95700,
	108480, 122760, 138666, 155540, 174216, 194832, 216600, 240500, 266682, 294216,
	324240, 356916, 391160, 428280, 468450, 510420, 555680, 604416, 655200, 709716,
	748608, 789631, 832902, 878545, 926689, 977471, 1031036, 1087536, 1147132, 1209994,
	1276301, 1346242, 1420016, 1497832, 1579913, 1666492, 1757815, 1854143, 1955750, 2062925,
	2175973, 2295216, 2420993, 2553663, 2693603, 2841212, 2996910, 3161140, 3334370, 3517093,
	3709829, 3913127, 4127566, 4353756, 4592341, 4844001, 5109452, 5389449, 5684790, 5996316,
	6324914, 6671519, 7037118, 7422752, 7829518, 8258575, 8711144, 9188514, 9692044, 10223168,
	10783397, 11374327, 11997640, 12655110, 13348610, 14080113, 14851703, 15665576, 16524049, 17429566,
	18384706, 19392187, 20454878, 21575805, 22758159, 24005306, 25320796, 26708375, 28171993, 29715818,
	31344244, 33061908, 34873700, 36784778, 38800583, 40926854, 43169645, 45535341, 48030677, 50662758,
	53439077, 56367538, 59456479, 62714694, 66151459, 69776558, 73600313, 77633610, 81887931, 86375389,
	91108760, 96101520, 101367883, 106992842, 112782213, 118962678, 125481832, 132358236, 139611467, 147262175,
	155332142, 163844343, 172823012, 182293713, 192283408, 202820538, 213935103, 225658746, 238024845, 251068606,
	264827165, 279339639, 294647508, 310794191, 327825712, 345790561, 364739883, 384727628, 405810702, 428049128,
	451506220, 476248760, 502347192, 529875818, 558913012, 589541445, 621848316, 655925603, 691870326, 729784819,
	769777027, 811960808, 856456260, 903390063, 952895838, 1005114529, 1060194805, 1118293480, 1179575962, 1244216724,
	1312399800, 1384319309, 1460180007, 1540197871, 1624600714, 1713628833, 1807535693, 1906558648, 2011069705
#endif /* MAPLE_VERSION check for .70 */
};

int32_t TradeHandler::getTaxLevel(int32_t mesos) {
#if MAPLE_VERSION >= 67
	if (mesos < 100000)
		return 0;
	if (mesos >= 100000000)
		return 600;
	if (mesos >= 25000000)
		return 500;
	if (mesos >= 10000000)
		return 400;
	if (mesos >= 5000000)
		return 300;
	if (mesos >= 1000000)
		return 180;
	return 80;
#elif MAPLE_VERSION >= 17
	if (mesos < 50000)
		return 0;
	if (mesos >= 10000000)
		return 400;
	if (mesos >= 5000000)
		return 300;
	if (mesos >= 1000000)
		return 200;
	if (mesos >= 100000)
		return 100;
	return 50;
#endif /* MAPLE_VERSION check for tax levels */

	return 0; // There was no tax prior to .17
}