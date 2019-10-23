CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 1140;
	title = 114002;

	CNtlTSGroup
	{
		gid = 0;

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
				eitype = 1;
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
			stdiag = 114007;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 7151128;
			}
			CDboTSCheckLvl
			{
				maxlvl = 56;
				minlvl = 48;
			}
			CDboTSCheckClrQst
			{
				and = "1138;";
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
				conv = 114009;
				ctype = 1;
				idx = 7151128;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 114008;
				m1fx = "-1108.000000";
				m2fz = "2968.000000";
				m1fy = "0.000000";
				sort = 114005;
				m2widx = 1;
				grade = 132203;
				m0fx = "-1134.000000";
				m0ttip = 114015;
				m1widx = 1;
				rwd = 100;
				taid = 1;
				title = 114002;
				gtype = 2;
				area = 114001;
				goal = 114004;
				m0fz = "3025.000000";
				m0widx = 1;
				m1ttip = 114016;
				m2fy = "0.000000";
				stype = 1;
				m0fy = "0.000000";
				m1fz = "3052.000000";
				m2fx = "-1353.000000";
				m2ttip = 114017;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 0;
				eitype = 1;
				idx0 = 909;
				cnt0 = 18;
				cnt2 = 0;
				ectype = -1;
				etype = 0;
				idx1 = -1;
				taid = 3;
				esctype = 0;
				idx2 = -1;
			}
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 114014;
			nextlnk = 101;
			rwdtbl = 114001;
			rwdtype = 0;
			ltime = -1;
			prelnk = "3;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = 7151128;
			}
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 114008;
			gtype = 2;
			oklnk = 2;
			area = 114001;
			goal = 114004;
			sort = 114005;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 114002;
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
				itype = 1;
			}
		}
	}
	CNtlTSGroup
	{
		gid = 254;

		CDboTSContEnd
		{
			cid = 254;
			prelnk = "1;2;";
			type = 0;
		}
		CDboTSContGCond
		{
			cid = 1;
			prelnk = "0;";
			nolnk = 254;
			rm = 0;
			yeslnk = 2;

			CDboTSCheckQItem
			{
				ct = 1;
				icnt = 1;
				iidx = 909;
			}
		}
		CDboTSContGAct
		{
			cid = 2;
			elnk = 255;
			nextlnk = 254;
			prelnk = "1;";

			CDboTSActQItem
			{
				icnt0 = 255;
				iprob0 = "1.000000";
				iidx0 = 720;
				taid = 1;
				type = 1;
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 114007;
			nolnk = 255;
			rm = 0;
			yeslnk = 1;
		}
	}
}

