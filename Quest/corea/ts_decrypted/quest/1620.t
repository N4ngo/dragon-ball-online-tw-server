CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 1620;
	title = 162002;

	CNtlTSGroup
	{
		gid = 0;

		CDboTSContGAct
		{
			cid = 2;
			elnk = 252;
			nextlnk = 100;
			prelnk = "1;";

			CDboTSActNPCConv
			{
				conv = 162009;
				ctype = 1;
				idx = 6412107;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 162008;
				gtype = 1;
				area = 162001;
				goal = 162004;
				grade = 132203;
				rwd = 100;
				sort = 162005;
				stype = 1;
				taid = 1;
				title = 162002;
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 162007;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 6412107;
			}
			CDboTSCheckLvl
			{
				maxlvl = 57;
				minlvl = 49;
			}
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;1;252;";
			type = 0;
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "100;";
			type = 1;
		}
		CDboTSContGAct
		{
			cid = 252;
			elnk = 255;
			nextlnk = 253;
			prelnk = "2;";
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 162008;
			gtype = 1;
			oklnk = 2;
			area = 162001;
			goal = 162004;
			sort = 162005;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 162002;
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 162014;
			nextlnk = 254;
			rwdtbl = 162001;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = 6204201;
			}
		}
	}
}

