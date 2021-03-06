 /*
  * CVSCommon.cc
  *
  * Copyright (C) 2013 - Rocaloid Development Group(RDG)
  *
  * Created by rgwan
  * This program is free software; you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation; either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program. If not, see <http://www.gnu.org/licenses/>.
  */
#include "LibCyberBase/SPKit/defs.h"
#include "LibCyberBase/SPKit/structure/string.h"
#include "LibCyberBase/SPKit/misc/converter.h"
#include "LibCyberBase/SPKit/structure/array.h"
#include "LibCyberBase/SPKit/io/fileStream.h"

#include "LibCyberBase/Overall.h"
#include "CVSCommon.h"


namespace CVSCommon
{
	using namespace converter;
	EffectCollection::EffectCollection()
	{
		EnvelopeList.preservedSpace = 40;
		OpennessList.preservedSpace = 40;
	}
	Segment::Segment()
	{
		TPhoneList.preservedSpace = 40;
		FreqList.preservedSpace = 40;
	}
	CVS::CVS()
	{
		SegmentList.preservedSpace = 40;
	}
	double GetSegmentTime(Segment& _Segment)
	{
		int i ;
		double acc =0;
		for(i = 0;i <= _Segment.TPhoneListQ;i ++)
		{
			acc += _Segment.TPhoneList[i].Transition.Time;
		}
		return acc;
	}
	bool IsConsonant(string Symbol)
	{
		if (Symbol.getLength() == 1)
			return false;
		if (Symbol == "e-") return false;
		if (Symbol == "NN") return false;
		if (Symbol == "NN") return false;
		return true;				
	}
}