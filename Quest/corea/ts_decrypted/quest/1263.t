CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 1263;
	title = 126302;

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
				conv = 126309;
				ctype = 1;
				idx = 4372101;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 126308;
				gtype = 1;
				area = 126301;
				goal = 126304;
				grade = 132203;
				rwd = 100;
				sort = 126305;
				stype = 1;
				taid = 1;
				title = 126302;
			}
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 126308;
			gtype = 1;
			oklnk = 2;
			area = 126301;
			goal = 126304;
			sort = 126305;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 126302;
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
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 126314;
			nextlnk = 254;
			rwdtbl = 126301;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = 1781202;
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 126307;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 4372101;
			}
			CDboTSCheckLvl
			{
				maxlvl = 52;
				minlvl = 44;
			}
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;1;252;";
			type = 0;
		}
	}
}

