//    Copyright (C) 2017 Joaquim Broquetas Ruiz

//    This file is part of IV-X Delay.
//    IV-X Delay is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.

//    IV-X Delay is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.

//   You should have received a copy of the GNU General Public License
//   along with IV-X Delay.  If not, see <http://www.gnu.org/licenses/>.

#include "level_processor.h"


level_processor::level_processor()
{
  SetGain(1.0f);
}

void level_processor::process (float* p_samples, int buffer_size)
{
  for (int i = 0; i < buffer_size; i++)
    {
      p_samples[i] = p_samples[i] * m_gain;
    }
}
