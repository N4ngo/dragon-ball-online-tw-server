CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 78;
	title = 7802;

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
				conv = 7809;
				ctype = 1;
				idx = 8751101;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 7808;
				gtype = 1;
				area = 7801;
				goal = 7804;
				grade = 132203;
				rwd = 100;
				sort = 7805;
				stype = 2;
				taid = 1;
				title = 7802;
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 7807;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckPCRace
			{
				raceflg = 1;
			}
			CDboTSClickNPC
			{
				npcidx = 8751101;
			}
			CDboTSCheckLvl
			{
				maxlvl = 20;
				minlvl = 12;
			}
			CDboTSCheckClrQst
			{
				and = "79;";
			}
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;1;252;";
			type = 0;
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 7808;
			gtype = 1;
			oklnk = 2;
			area = 7801;
			goal = 7804;
			sort = 7805;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 7802;
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 7814;
			nextlnk = 254;
			rwdtbl = 7801;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = 4072102;
			}
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
	}
}

