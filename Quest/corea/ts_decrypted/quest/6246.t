CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 6246;
	title = 624602;

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
			stdiag = 624607;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 6111102;
			}
			CDboTSCheckLvl
			{
				maxlvl = 58;
				minlvl = 45;
			}
			CDboTSCheckClrQst
			{
				and = "6245;";
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
				conv = 624609;
				ctype = 1;
				idx = 6111102;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 624608;
				gtype = 3;
				area = 624601;
				goal = 624604;
				grade = 132203;
				rwd = 100;
				sort = 624605;
				stype = 2;
				taid = 1;
				title = 624602;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 5;
				eitype = 1;
				idx0 = 1172;
				cnt0 = 5;
				cnt2 = 0;
				ectype = -1;
				etype = 0;
				idx1 = 1173;
				taid = 3;
				esctype = 0;
				idx2 = -1;
			}
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 624614;
			nextlnk = 101;
			rwdtbl = 624601;
			rwdtype = 0;
			ltime = -1;
			prelnk = "3;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = 6111102;
			}
			CDboTSCheckQItem
			{
				ct = 0;
				icnt = 5;
				iidx = 1173;
			}
			CDboTSCheckQItem
			{
				ct = 0;
				icnt = 5;
				iidx = 1172;
			}
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 624608;
			gtype = 3;
			oklnk = 2;
			area = 624601;
			goal = 624604;
			sort = 624605;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 624602;
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

		CDboTSContStart
		{
			cid = 0;
			stdiag = 624607;
			nolnk = 255;
			rm = 0;
			yeslnk = 1;
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "1;";
			type = 0;
		}
		CDboTSContGAct
		{
			cid = 1;
			elnk = 255;
			nextlnk = 254;
			prelnk = "0;";

			CDboTSActQItem
			{
				taid = 2;
				type = 1;
			}
			CDboTSActQItem
			{
				icnt0 = 255;
				iidx1 = 1173;
				iprob0 = "1.000000";
				icnt1 = 255;
				iidx0 = 1172;
				iprob1 = "1.000000";
				taid = 1;
				type = 1;
			}
		}
	}
}

