CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	qc = 4;
	rq = 0;
	tid = 1073;
	title = 107302;

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
				conv = 107309;
				ctype = 1;
				idx = 3184101;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 107308;
				gtype = 1;
				area = 107301;
				goal = 107304;
				grade = 132203;
				rwd = 100;
				scitem = -1;
				sort = 107305;
				stype = 2;
				taid = 1;
				title = 107302;
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 107307;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckLvl
			{
				maxlvl = 100;
				minlvl = 39;
			}
			CDboTSClickNPC
			{
				npcidx = "3184101;";
			}
			CDboTSCheckClrQst
			{
				flink = 1;
				flinknextqid = "1074;";
				not = 0;
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
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 107308;
			gtype = 1;
			oklnk = 2;
			area = 107301;
			goal = 107304;
			sort = 107305;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 107302;
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			rwdzeny = 0;
			desc = 107314;
			nextlnk = 254;
			rwdexp = 0;
			rwdtbl = 107301;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = "8031401;";
			}
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

