CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 1159;
	title = 115902;

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
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 115908;
			gtype = 2;
			oklnk = 2;
			area = 115901;
			goal = 115904;
			sort = 115905;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 115902;
		}
		CDboTSContGAct
		{
			cid = 2;
			elnk = 252;
			nextlnk = 100;
			prelnk = "1;";

			CDboTSActNPCConv
			{
				conv = 115909;
				ctype = 1;
				idx = 8411116;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 115908;
				m1fx = "-576.000000";
				m2fz = "2949.000000";
				m1fy = "0.000000";
				sort = 115905;
				m2widx = 1;
				grade = 132203;
				m0fx = "-1078.000000";
				m0ttip = 115915;
				m1widx = 1;
				rwd = 100;
				taid = 1;
				title = 115902;
				gtype = 2;
				area = 115901;
				goal = 115904;
				m0fz = "2749.000000";
				m0widx = 1;
				m1ttip = 115915;
				m2fy = "0.000000";
				stype = 1;
				m0fy = "0.000000";
				m1fz = "3146.000000";
				m2fx = "-1012.000000";
				m2ttip = 115915;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 0;
				eitype = 3;
				idx0 = 919;
				cnt0 = 12;
				cnt2 = 0;
				ectype = -1;
				etype = 0;
				idx1 = -1;
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
				eitype = 3;
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
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 115914;
			nextlnk = 101;
			rwdtbl = 401;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSCheckSToCEvt
			{
				itype = 3;
			}
			CDboTSClickNPC
			{
				npcidx = 8411116;
			}
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
			stdiag = 115907;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 8411116;
			}
			CDboTSCheckLvl
			{
				maxlvl = 56;
				minlvl = 48;
			}
		}
	}
	CNtlTSGroup
	{
		gid = 254;

		CDboTSContEnd
		{
			cid = 254;
			prelnk = "1;";
			type = 0;
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 115907;
			nolnk = 255;
			rm = 0;
			yeslnk = 1;
		}
		CDboTSContGAct
		{
			cid = 1;
			elnk = 255;
			nextlnk = 254;
			prelnk = "0;";

			CDboTSActQItem
			{
				icnt0 = 255;
				iprob0 = "1.000000";
				iidx0 = 919;
				taid = 1;
				type = 1;
			}
		}
	}
}

