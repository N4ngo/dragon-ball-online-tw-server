CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 880;
	title = 88002;

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
			stdiag = 88007;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 3181203;
			}
			CDboTSCheckLvl
			{
				maxlvl = 35;
				minlvl = 27;
			}
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 88014;
			nextlnk = 101;
			rwdtbl = 88001;
			rwdtype = 0;
			ltime = -1;
			prelnk = "3;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = 3181203;
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
				conv = 88009;
				ctype = 1;
				idx = 3181203;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 88008;
				m1fx = "7315.000000";
				area = 88001;
				goal = 88004;
				m0fz = "1083.000000";
				m0widx = 1;
				m1fy = "0.000000";
				m1ttip = 88015;
				sort = 88005;
				stype = 1;
				m0fy = "0.000000";
				m1fz = "1620.000000";
				grade = 132203;
				m0fx = "5391.000000";
				m0ttip = 88015;
				m1widx = 1;
				rwd = 100;
				taid = 1;
				title = 88002;
				gtype = 2;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 0;
				eitype = 1;
				idx0 = 1026;
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
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 88008;
			gtype = 2;
			oklnk = 2;
			area = 88001;
			goal = 88004;
			sort = 88005;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 88002;
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

		CDboTSContGAct
		{
			cid = 2;
			elnk = 255;
			nextlnk = 254;
			prelnk = "0;";

			CDboTSActQItem
			{
				icnt0 = 255;
				iprob0 = "1.000000";
				iidx0 = 1026;
				taid = 1;
				type = 1;
			}
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "2;";
			type = 0;
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 88007;
			nolnk = 255;
			rm = 0;
			yeslnk = 2;
		}
	}
}

