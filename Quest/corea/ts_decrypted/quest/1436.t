CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 1436;
	title = 143602;

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
			prelnk = "100;";
			type = 1;
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 143607;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 5531101;
			}
			CDboTSCheckLvl
			{
				maxlvl = 55;
				minlvl = 47;
			}
		}
		CDboTSContGAct
		{
			cid = 2;
			elnk = 252;
			nextlnk = 100;
			prelnk = "1;";

			CDboTSActNPCConv
			{
				conv = 143609;
				ctype = 1;
				idx = 5531101;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 143608;
				gtype = 2;
				area = 143601;
				goal = 143604;
				grade = 132203;
				rwd = 100;
				sort = 143605;
				stype = 1;
				taid = 1;
				title = 143602;
			}
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 143614;
			nextlnk = 254;
			rwdtbl = 143601;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSClickObject
			{
				objidx = "693;";
				widx = 1;
			}
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;252;1;";
			type = 0;
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 143608;
			gtype = 1;
			oklnk = 2;
			area = 143601;
			goal = 143604;
			sort = 143605;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 143602;
		}
	}
}

