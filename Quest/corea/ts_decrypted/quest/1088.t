CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 1088;
	title = 108802;

	CNtlTSGroup
	{
		gid = 0;

		CDboTSContGAct
		{
			cid = 252;
			elnk = 255;
			nextlnk = 253;
			prelnk = "2;";
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "101;";
			type = 1;
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;252;1;";
			type = 0;
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 108807;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 1655301;
			}
			CDboTSCheckLvl
			{
				maxlvl = 49;
				minlvl = 41;
			}
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 108814;
			nextlnk = 101;
			rwdtbl = 108801;
			rwdtype = 0;
			ltime = -1;
			prelnk = "3;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = 1655301;
			}
		}
		CDboTSContGAct
		{
			cid = 2;
			elnk = 252;
			nextlnk = 3;
			prelnk = "1;";

			CDboTSActNPCConv
			{
				conv = 108809;
				ctype = 1;
				idx = 1655301;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 108808;
				m1fx = "-85.000000";
				area = 108801;
				goal = 108804;
				m0fz = "376.000000";
				m0widx = 4;
				m1fy = "0.000000";
				m1ttip = 108816;
				sort = 108805;
				stype = 2;
				m0fy = "0.000000";
				m1fz = "376.000000";
				grade = 132203;
				m0fx = "-85.000000";
				m0ttip = 108815;
				m1widx = 4;
				rwd = 100;
				taid = 1;
				title = 108802;
				gtype = 5;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 4;
				eitype = 0;
				idx0 = 9414100;
				cnt0 = 1;
				cnt2 = 0;
				ectype = -1;
				etype = 0;
				idx1 = 6612207;
				taid = 3;
				esctype = 0;
				idx2 = -1;
			}
		}
		CDboTSContGAct
		{
			cid = 101;
			elnk = 255;
			nextlnk = 254;
			prelnk = "100;";

			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 0;
				eitype = 0;
				idx0 = -1;
				cnt0 = 0;
				cnt2 = 0;
				ectype = -1;
				etype = 1;
				idx1 = -1;
				taid = 1;
				esctype = 0;
				idx2 = -1;
			}
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 108808;
			gtype = 5;
			oklnk = 2;
			area = 108801;
			goal = 108804;
			sort = 108805;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 108802;
		}
		CDboTSContGCond
		{
			cid = 3;
			prelnk = "2;";
			nolnk = 255;
			rm = 0;
			yeslnk = 100;

			CDboTSCheckSToCEvt
			{
				itype = 0;
			}
		}
	}
}

