CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	qc = 4;
	rq = 0;
	tid = 977;
	title = 97702;

	CNtlTSGroup
	{
		gid = 0;

		CDboTSContStart
		{
			cid = 0;
			stdiag = 97707;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckLvl
			{
				maxlvl = 100;
				minlvl = 35;
			}
			CDboTSClickNPC
			{
				npcidx = "7091103;";
			}
			CDboTSCheckClrQst
			{
				flink = 1;
				flinknextqid = "985;";
				not = 0;
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
				conv = 97709;
				ctype = 1;
				idx = 7091103;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 97708;
				gtype = 1;
				area = 97701;
				goal = 97704;
				grade = 132203;
				rwd = 100;
				scitem = -1;
				sort = 97705;
				stype = 2;
				taid = 1;
				title = 97702;
			}
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "100;";
			type = 1;
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			rwdzeny = 0;
			desc = 97714;
			nextlnk = 254;
			rwdexp = 0;
			rwdtbl = 97701;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = "1752101;";
			}
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 97708;
			gtype = 1;
			oklnk = 2;
			area = 97701;
			goal = 97704;
			sort = 97705;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 97702;
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;1;252;";
			type = 0;
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

