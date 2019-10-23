CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	rq = 0;
	tid = 1818;
	title = 181802;

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
			cid = 2;
			elnk = 252;
			nextlnk = 3;
			prelnk = "1;";

			CDboTSActNPCConv
			{
				conv = 181809;
				ctype = 1;
				idx = 5592101;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 181808;
				gtype = 2;
				area = 181801;
				goal = 181804;
				m0fz = "-56.000000";
				m0widx = 1;
				sort = 181805;
				stype = 1;
				m0fy = "0.000000";
				grade = 132203;
				m0fx = "3453.000000";
				m0ttip = 181815;
				rwd = 100;
				taid = 1;
				title = 181802;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 0;
				eitype = 1;
				idx0 = 1097;
				cnt0 = 16;
				cnt2 = 0;
				ectype = -1;
				etype = 0;
				idx1 = -1;
				taid = 3;
				esctype = 0;
				idx2 = -1;
			}
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 181808;
			gtype = 2;
			oklnk = 2;
			area = 181801;
			goal = 181804;
			sort = 181805;
			prelnk = "0;";
			ds = 1;
			grade = 0;
			rwd = 100;
			title = 181802;
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			desc = 181814;
			nextlnk = 101;
			rwdtbl = 181801;
			rwdtype = 0;
			ltime = -1;
			prelnk = "3;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = 5592101;
			}
			CDboTSCheckQItem
			{
				ct = 1;
				icnt = 16;
				iidx = 1097;
			}
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "252;0;1;";
			type = 0;
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "101;";
			type = 1;
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 181807;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSClickNPC
			{
				npcidx = 5592101;
			}
			CDboTSCheckLvl
			{
				maxlvl = 42;
				minlvl = 34;
			}
			CDboTSCheckClrQst
			{
				and = "956;";
			}
		}
	}
	CNtlTSGroup
	{
		gid = 254;

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
				iidx0 = 1097;
				taid = 1;
				type = 1;
			}
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "1;";
			type = 0;
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 181807;
			nolnk = 255;
			rm = 0;
			yeslnk = 1;
		}
	}
}

