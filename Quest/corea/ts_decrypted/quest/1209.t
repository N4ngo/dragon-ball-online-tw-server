CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 1209;
	title = 120902;

	CNtlTSGroup
	{
		gid = 0;

		CDboTSContGAct
		{
			cid = 102;
			elnk = 255;
			nextlnk = 103;
			prelnk = "101;";

			CDboTSActWorldPlayScript
			{
				sid = 1209;
				start = 0;
				taid = 1;
				uof = 0;
			}
		}
		CDboTSContGAct
		{
			cid = 103;
			elnk = 255;
			nextlnk = 254;
			prelnk = "102;";

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
		CDboTSContStart
		{
			cid = 0;
			stdiag = 120907;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 5062102;
			}
			CDboTSCheckLvl
			{
				maxlvl = 50;
				minlvl = 42;
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
			cont = 120908;
			gtype = 2;
			oklnk = 2;
			area = 120901;
			goal = 120904;
			sort = 120905;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 120902;
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "103;";
			type = 1;
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 120914;
			nextlnk = 101;
			rwdtbl = 120901;
			rwdtype = 0;
			ltime = -1;
			prelnk = "101;3;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = 5062102;
			}
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
		CDboTSContGAct
		{
			cid = 101;
			elnk = 100;
			nextlnk = 102;
			prelnk = "100;";

			CDboTSActWorldPlayScript
			{
				sid = 1209;
				start = 1;
				taid = 1;
				uof = 0;
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
				conv = 120909;
				ctype = 1;
				idx = 5062102;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 120908;
				gtype = 2;
				area = 120901;
				goal = 120904;
				m0fz = "3230.000000";
				m0widx = 1;
				sort = 120905;
				stype = 1;
				m0fy = "0.000000";
				grade = 132203;
				m0fx = "1130.000000";
				m0ttip = 120915;
				rwd = 100;
				taid = 1;
				title = 120902;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 0;
				eitype = 1;
				idx0 = 164;
				cnt0 = 1;
				cnt2 = 0;
				ectype = -1;
				etype = 0;
				idx1 = -1;
				taid = 3;
				esctype = 0;
				idx2 = -1;
			}
		}
	}
	CNtlTSGroup
	{
		gid = 254;

		CDboTSContEnd
		{
			cid = 254;
			prelnk = "1;";
			type = 0;
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 0;
			nolnk = 255;
			rm = 0;
			yeslnk = 1;
		}
		CDboTSContGAct
		{
			cid = 1;
			elnk = 255;
			nextlnk = 254;
			prelnk = "0;";

			CDboTSActQItem
			{
				icnt0 = 255;
				iprob0 = "1.000000";
				iidx0 = 164;
				taid = 1;
				type = 1;
			}
		}
	}
}

