CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 1647;
	title = 164702;

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
			stdiag = 164707;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 6313102;
			}
			CDboTSCheckLvl
			{
				maxlvl = 58;
				minlvl = 50;
			}
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 164714;
			nextlnk = 101;
			rwdtbl = 164701;
			rwdtype = 0;
			ltime = -1;
			prelnk = "3;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = 6313102;
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
				conv = 164709;
				ctype = 1;
				idx = 6313102;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 164708;
				m1fx = "-2589.000000";
				m2fz = "-483.000000";
				m1fy = "0.000000";
				sort = 164705;
				m2widx = 1;
				grade = 132203;
				m0fx = "-2685.000000";
				m0ttip = 164715;
				m1widx = 1;
				rwd = 100;
				taid = 1;
				title = 164702;
				gtype = 2;
				area = 164701;
				goal = 164704;
				m0fz = "-495.000000";
				m0widx = 1;
				m1ttip = 164716;
				m2fy = "0.000000";
				stype = 1;
				m0fy = "0.000000";
				m1fz = "-445.000000";
				m2fx = "-2739.000000";
				m2ttip = 164717;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 9;
				eitype = 0;
				idx0 = 3501100;
				cnt0 = 9;
				cnt2 = 9;
				ectype = -1;
				etype = 0;
				idx1 = 3502100;
				taid = 3;
				esctype = 0;
				idx2 = 3502105;
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
			cont = 164708;
			gtype = 2;
			oklnk = 2;
			area = 164701;
			goal = 164704;
			sort = 164705;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 164702;
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

