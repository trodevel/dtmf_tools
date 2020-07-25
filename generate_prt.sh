#!/bin/bash

# Generate prt file
#
# Copyright (C) 2020 Sergey Kolevatov
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <http://www.gnu.org/licenses/>.
#

# $Revision: 13410 $ $Date:: 2020-07-26 #$ $Author: serge $

FL=dtmf_tools.prt

echo "protocol dtmf_tools" > $FL
echo "enum tone_e" >> $FL

echo "    TONE_0 = 0" >> $FL
echo "    TONE_1 = 1" >> $FL
echo "    TONE_2 = 2" >> $FL
echo "    TONE_3 = 3" >> $FL
echo "    TONE_4 = 4" >> $FL
echo "    TONE_5 = 5" >> $FL
echo "    TONE_6 = 6" >> $FL
echo "    TONE_7 = 7" >> $FL
echo "    TONE_8 = 8" >> $FL
echo "    TONE_9 = 9" >> $FL
echo "    TONE_A = 10" >> $FL
echo "    TONE_B = 11" >> $FL
echo "    TONE_C = 12" >> $FL
echo "    TONE_E = 13" >> $FL
echo "    TONE_STAR = 14" >> $FL
echo "    TONE_HASH = 15" >> $FL

echo "enum_end" >> $FL
