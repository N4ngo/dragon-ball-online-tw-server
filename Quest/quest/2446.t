CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	qc = 8;
	rq = 0;
	tid = 2446;
	title = 244602;

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
				conv = 244609;
				ctype = 1;
				idx = 4072301;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 244608;
				gtype = 1;
				area = 244601;
				goal = 244604;
				grade = 132203;
				rwd = 100;
				scitem = -1;
				sort = 244605;
				stype = 2;
				taid = 1;
				title = 244602;
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 244607;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckLvl
			{
				maxlvl = 100;
				minlvl = 53;
			}
			CDboTSClickNPC
			{
				npcidx = "4072301;";
			}
			CDboTSCheckClrQst
			{
				and = "2445;";
				flink = 1;
				flinknextqid = "2447;";
				not = 0;
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
			cont = 244608;
			gtype = 1;
			oklnk = 2;
			area = 244601;
			goal = 244604;
			sort = 244605;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 244602;
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			rwdzeny = 0;
			desc = 244614;
			nextlnk = 254;
			rwdexp = 0;
			rwdtbl = 244601;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = "4511513;";
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

