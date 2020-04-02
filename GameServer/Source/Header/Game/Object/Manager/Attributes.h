#ifndef __ATTRIBUTES_H
#define __ATTRIBUTES_H

#pragma once

#include <Packet\Game\PacketGU.h>
#include <TableAll.h>
#include <DboTSCoreDefine.h>

class Player;

struct OutWorld
{
	sVECTOR3	position;
	sVECTOR3	rotation;
	TBLIDX		worldTblidx;
};

struct TeleportInfo
{
	sVECTOR3	position;
	sVECTOR3	rotation;
	bool		bIsToMoveAnotherServer;
	sWORLD_INFO worldInfo;
	OutWorld	outWorld;
};

struct ObjectDataQuest
{
	TBLIDX				objTblidx;
	NTL_TS_T_ID			specificQuestId;
	NTL_TS_T_ID			triggerObject;
	NTL_TS_T_ID			triggerId;
	int					evtId;
	std::vector<TBLIDX> mobsTblidx;
	std::vector<TBLIDX> NPCTblidx;
};
struct SubClassInfoQuest
{
	bool			inQuest;
	HOBJECT			npcHandle;
	TBLIDX			useItemTblidx;
	bool			majinKarmaObject;
	int				curQuestId;
	BYTE			objChoseIndex;
	ObjectDataQuest	objData[2];
};

struct TLQ1Info
{
	HOBJECT handleNpc;
};

struct TLQ2Info
{
	HOBJECT handleNpc;
};

struct TLQ3Info
{
	HOBJECT handleNpcMilk;
	HOBJECT handleNpc1;
	HOBJECT handleNpc2;
	HOBJECT handleNpc3;
	HOBJECT handleNpcGoku;
	int		maxKillMob;
	int		curKillMob;
};

struct GrowUpInfo
{
	bool			inQuest;
	TBLIDX			mobTblidx;
	int				countKill;
	int				maxKill;
};

struct QuestData
{
	int						QuestID;
	int						RewardID;
	bool					sPawnMobQuest;
	TBLIDX					npcClick;
	TBLIDX					lastNPCQuest;
	HOBJECT					mobHandle;
	NTL_TS_TC_ID			tcId;
	NTL_TS_TA_ID			taId;
	eSTOC_EVT_DATA_TYPE		evtDataType;
	/*int MobID;
	int count;
	int Maxcount;*/
	uSTOC_EVT_DATA			uEvtData;
	sQUEST_PROGRESS_INFO	progressInfo;
	GrowUpInfo				growUpInfo;
	SubClassInfoQuest		questSubCls;
	TLQ1Info				tlq1Info;
	TLQ2Info				tlq2Info;
	TLQ3Info				tlq3Info;
};

class AttributesManager
{
public:
	AttributesManager();
	~AttributesManager();
	int Stats[200];
	int MinValue;
	int MaxValue;
	int countstats;
	//Quest
	int KillerCount;
	//bool sPawnMobQuest;
	//TBLIDX			lastNPCQuest;
	//QuestData		QuestDat[30];

	//TLQ 1
	//TLQ1Info tlq1Info;

	// GROW UP

	//GrowUpInfo growUpInfo;

	// SUB CLASS
	//SubClassInfoQuest questSubCls;

	// Teleport
	TeleportInfo teleportInfo;

	//CashShop Info
	DWORD		cashpoit;
	DWORD		WagguCoin;
	DWORD		EventCoin;
	//Player Help get Class/Race
	int			PlayerClassID;
	int			PlayerRaceID;
	int			PlayerGanderID;
	//Free PVP
	DWORD		ReviveDelay;
	bool		ActiveDelay;
	bool        IsinPVP;
	//Control Food Time/Buff Need change	
	struct FoodInfo
	{
		bool		GetFood = false;
		bool		IsRemovedBuff = true;
		TBLIDX		FoodItemID;
		DWORD		TypeEffect;
		float		FoodHealAumont[2];
		DWORD		BuffTime;
		DWORD		BuffKeepTime;
	};
	bool LpFoodIsActive = false;
	bool EpFoodIsActive = false;
	FoodInfo sFoodInfo[16];
	struct BuffTimeInfo
	{
		HOBJECT		PlayerHandle;
		bool		BuffIsActive;
		DWORD		BuffTime;
		DWORD		BuffEndTime;
		TBLIDX		BuffID;
		BYTE		BuffSlot;		
		bool        isAffectPlayer;
		DWORD		EffectType;
		float		EffectValue[2];
		bool		isMob;
		int			StunedType;
	};

	struct SpinningInfo
	{
		DWORD		spinTime;
		DWORD		spinEndTime;
		DWORD		attackValue;
	};

	// Control of spin
	SpinningInfo spinInfo;
	
	//Control Stun Time Need change
	BuffTimeInfo sBuffTimeInfo[34];
	int StunedTypes[34];
	//////////
	//Caontrol FreeBatle Need change
	int			atackerType;
	int			Type;
	HOBJECT		FreeBatleChellenger;
	bool		PlayerInFreeBatle;
	bool		OutBatle;
	bool		showMensageOut;
	bool		LoseBatle ;
	DWORD		OutBatleTime;
	DWORD		OutBatleFinalTime;
	sVECTOR3	vRefreeLoc;
	//////
	// Control Player Trade Need change
	bool		PlayerTradeOK;
	sITEM_DATA	Tradeinvent[13];
	BYTE		tradecount = 0;
	//Get pet in use
	BYTE		PetInUse;
	//Get Party Info Need change
	HOBJECT		PartyLeader;
	//Transformations

	//RP Passive
	bool		IsPowerUp;
	bool			LoadAttributes(CHARACTERID _id, Player* _plr);
	bool			SaveAvatarAttribute(void* pvBuffer, DWORD* pwdDataSize);
	void			UpdateLevelUpAtributes();
	void			LoadAttributesFromItems(sITEM_BRIEF *brief);
	void			FillAttributesLink();
	void			SendRpBallInformation();
	void			CreatePlayerBaseAttributesBitFlag();
	void			UpdateAttributes();
	void			UpdateAttributesFromItem(sITEM_TBLDAT& item, BYTE Grade, bool remove = false);
	void			UpdateExtraAttributesFromItem(sITEM_EFFECT aitemEffect[6], bool isRemove = false);

	// Calcule stats
	int				CalculeBasicStats(WORD basicStat, float basicStatLvUp, BYTE playerLevel);
	DWORD			CalculeLP(BYTE pcClass, int lastCon);
	WORD			CalculeEP(BYTE pcClass, int lastEng);
	int				CalculeRP(BYTE playerLevel);
	WORD			CalculePhysicalOffence(BYTE pcClass, BYTE playerLevel, int lastStr, int lastDex);
	WORD			CalculeEnergyOffence(BYTE pcClass, BYTE playerLevel, int lastSol, int lastFoc);
	WORD			CalculePhysicalCriticalRate(BYTE pcClass, int lastDex);
	WORD			CalculeEnergyCriticalRate(BYTE pcClass, int lastFoc);
	WORD			CalculeHitRate(int lastFoc);
	WORD			CalculeDodgeRate(int lastDex);
	WORD			CalculeBlockRate(int lastDex, int lastCon);
	WORD			CalculePhysicalCriticalDefenceRate(int lastCon);
	WORD			CalculeEnergyCriticalDefenceRate(int lastEng);
	float			CalculePhysicalCriticalRange(BYTE pcClass, int lastDex);
	float			CalculeEnergyCriticalRange(BYTE pcClass, int lastFoc);
	WORD			CalculeLPRegeneration(int lastCon);
	WORD			CalculeLPSitDownRegeneration(WORD lastLpRegeneration);
	WORD			CalculeEPRegeneration(int lastEng);
	WORD			CalculeEPSitDownRegeneration(WORD lastEpRegeneration);
	WORD			CalculeEPBattleRegeneration(WORD lastEpRegeneration);
	WORD			CalculeRPRegeneration(WORD maxRP);
	WORD			CalculeRPDiminution(WORD maxRP);
	WORD			CalculeRPHitCharge(BYTE deffLevel, BYTE attLevel);
	WORD			CalculeRPHitChargeRate(BYTE deffLevel, BYTE attLevel);

	// Update cascading stats bool addSet = 0 add, 1 set
	// Update phyicalOffence
	void			UpdateStr(int lastStr, bool addSet);
	// Update LP, blockRate, physicalCriticalDefenceRate
	void			UpdateCon(int lastCon, bool addSet);
	// Update energyOffence, energyCriticalRate, hitRate(attackRate), energyCriticalRange
	void			UpdateFoc(int lastFoc, bool addSet);
	// Update physicalOffence, physicalCriticalRate, dodgeRate, blockRate, physicalCriticalRange
	void			UpdateDex(int lastDex, bool addSet);
	// Update energyOffence
	void			UpdateSol(int lastSol, bool addSet);
	// Update EP and EnergyCriticalDefenceRate
	void			UpdateEng(int lastEng, bool addSet);
	void			UpdateLP(DWORD lp, bool addSet);
	void			UpdateEP(WORD ep, bool addSet);
	void			UpdateRP(int rp, bool addSet);
	void			UpdatePhysicalOffence(WORD physicalOffence, bool addSet);
	void			UpdateEnergyOffence(WORD energyOffence, bool addSet);
	void			UpdatePhysicalCriticalRate(WORD physicalCriticalRate, bool addSet);
	void			UpdateEnergyCriticalRate(WORD energyCriticalRate, bool addSet);
	void			UpdateHitRate(WORD hitRate, bool addSet);
	void			UpdateDodgeRate(WORD dodgeRate, bool addSet);
	void			UpdateBlockRate(WORD blockRate, bool addSet);
	void			UpdatePhysicalCriticalDefenceRate(WORD physicalCriticalDefenceRate, bool addSet);
	void			UpdateEnergyCriticalDefenceRate(WORD energyCriticalDefenceRate, bool addSet);
	void			UpdatePhysicalCriticalRange(float physicalCriticalRange, bool addSet);
	void			UpdateEnergyCriticalRange(float energyCriticalRange, bool addSet);
	// Update LPSitDownRegeneration
	void			UpdateLPRegeneration(WORD LpRegen, bool addSet);
	void			UpdateLPSitDownRegeneration(WORD lpSitDownRegen, bool addSet);
	// Update EPSitDownRegeneration, EPBattleRegeneration
	void			UpdateEPRegeneration(WORD EpRegen, bool addSet);
	void			UpdateEPSitDownRegeneration(WORD epSitDownRegen, bool addSet);
	void			UpdateEPBattleRegeneration(WORD epBattleRegen, bool addSet);
	//	------------------------------------------------------------------------
	// GETTER
	//	------------------------------------------------------------------------
	sPC_PROFILE*	GetPlayerProfile() { return &PlayerProfile; }
	int				GetNumRpBall();
	int				GetNumFilledRpBall();
	//	------------------------------------------------------------------------
	// SETTERS
	//	------------------------------------------------------------------------
	void			SetNumFilledRpBall(int newBall);
	
	
private:
	bool			LoadCharacterAttrFromDB(sPC_TBLDAT* pTblData);
	bool			LoadAttributeFromDB();
	void			SetRPBall();

	// CHARACTER
	sPC_PROFILE		PlayerProfile;
	sAVATAR_ATTRIBUTE_LINK	attrLink;
	// RP BALL
	int				RPCounter;
	int				RPFilledCounter;
	// UPDATE ATTRIBUTES
	CNtlBitFlagManager	changedFlag;

	CHARACTERID		charid;
	Player			*plr;

public:
	void SetLastStr(WORD val);
	void SetLastCon(WORD val);
	void SetLastFoc(WORD val);
	void SetLastDex(WORD val);
	void SetLastEng(WORD val);
	void SetLastSol(WORD val);
	void SetLastMaxLP(DWORD val);
	void SetLastMaxEP(WORD val);
	void SetLastMaxAP(DWORD val);
	void SetLastMaxRP(WORD val);
	void SetLastLPRegen(WORD val);
	void SetLastEPRegen(WORD val);
	void SetLastAPRegen(WORD val);
	void SetLastPhysicalOffence(WORD val);
	void SetLastPhysicalDefence(WORD val);
	void SetLastEnergyOffence(WORD val);
	void SetLastEnergyDefence(WORD val);
	void SetLastAttackRate(WORD val);
	void SetLastDodgeRate(WORD val);
	void SetLastBlockRate(WORD val);
	void SetLastCurseSuccessRate(WORD val);
	void SetLastCurseToleranceRate(WORD val);
	void SetLastPhysicalCriticalRate(WORD val);
	void SetLastEnergyCriticalRate(WORD val);
	void SetLastRunSpeed(float val);
	void SetLastAirSpeed(float val);
	void SetLastAirDashSpeed(float val);
	void SetLastAirDash2Speed(float val);
	void SetLastAttackSpeedRate(WORD val);
	void SetLastAttackRange(float val);
	void SetCastingTimeChangePercent(float val);
	void SetCoolTimeChangePercent(float val);
	void SetKeepTimeChangePercent(float val);
	void SetDotValueChangePercent(float val);
	void SetDotTimeChangeAbsolute(float val);
	void SetRequiredEpChangePercent(float val);
	void SetHonestOffence(float val);
	void SetHonestDefence(float val);
	void SetStrangeOffence(float val);
	void SetStrangeDefence(float val);
	void SetWildOffence(float val);
	void SetWildDefence(float val);
	void SetEleganceOffence(float val);
	void SetEleganceDefence(float val);
	void SetFunnyOffence(float val);
	void SetFunnyDefence(float val);
	void SetParalyzeToleranceRate(WORD val);
	void SetTerrorToleranceRate(WORD val);
	void SetConfuseToleranceRate(WORD val);
	void SetStoneToleranceRate(WORD val);
	void SetCandyToleranceRate(WORD val);
	void SetParalyzeKeepTimeDown(float val);
	void SetTerrorKeepTimeDown(float val);
	void SetConfuseKeepTimeDown(float val);
	void SetStoneKeepTimeDown(float val);
	void SetCandyKeepTimeDown(float val);
	void SetBleedingKeepTimeDown(float val);
	void SetPoisonKeepTimeDown(float val);
	void SetStomachacheKeepTimeDown(float val);
	void SetCriticalBlockSuccessRate(float val);
	void SetGuardRate(WORD val);
	void SetSkillDamageBlockModeSuccessRate(float val);
	void SetCurseBlockModeSuccessRate(float val);
	void SetKnockdownBlockModeSuccessRate(float val);
	void SetHtbBlockModeSuccessRate(float val);
	void SetSitDownLpRegenBonusRate(float val);
	void SetSitDownEpRegenBonusRate(float val);
	void SetPhysicalCriticalDamageBonusRate(float val);
	void SetEnergyCriticalDamageBonusRate(float val);
	void SetItemUpgradeBonusRate(float val);
	void SetItemUpgradeBreakBonusRate(float val);
	void SetSkillSpeed(float val);
	void SetPhysicalCriticalDefenceRate(WORD val);
	void SetEnergyCriticalDefenceRate(WORD val);
	void SetLastPhysicalCriticalRange(float val);
	void SetLastEnergyCriticalRange(float val);
	void SetLastApDegeneration(WORD val);
	void SetLastApBattleDegeneration(WORD val);
	void SetLastBlockDamageRate(WORD val);
	void SetLastLPSitDownRegeneration(WORD val);
	void SetLastEPSitDownRegeneration(WORD val);
	void SetLastEPBattleRegeneration(WORD val);

	// Add
	void AddLastStr(WORD val);
	void AddLastCon(WORD val);
	void AddLastFoc(WORD val);
	void AddLastDex(WORD val);
	void AddLastEng(WORD val);
	void AddLastSol(WORD val);
	void AddLastMaxLP(DWORD val);
	void AddLastMaxEP(WORD val);
	void AddLastMaxAP(DWORD val);
	void AddLastMaxRP(WORD val);
	void AddLastLPRegen(WORD val);
	void AddLastEPRegen(WORD val);
	void AddLastAPRegen(WORD val);
	void AddLastPhysicalOffence(WORD val);
	void AddLastPhysicalDefence(WORD val);
	void AddLastEnergyOffence(WORD val);
	void AddLastEnergyDefence(WORD val);
	void AddLastAttackRate(WORD val);
	void AddLastDodgeRate(WORD val);
	void AddLastBlockRate(WORD val);
	void AddLastCurseSuccessRate(WORD val);
	void AddLastCurseToleranceRate(WORD val);
	void AddLastPhysicalCriticalRate(WORD val);
	void AddLastEnergyCriticalRate(WORD val);
	void AddLastRunSpeed(float val);
	void AddLastAirSpeed(float val);
	void AddLastAirDashSpeed(float val);
	void AddLastAirDash2Speed(float val);
	void AddLastAttackSpeedRate(WORD val);
	void AddLastAttackRange(float val);
	void AddCastingTimeChangePercent(float val);
	void AddCoolTimeChangePercent(float val);
	void AddKeepTimeChangePercent(float val);
	void AddDotValueChangePercent(float val);
	void AddDotTimeChangeAbsolute(float val);
	void AddRequiredEpChangePercent(float val);
	void AddHonestOffence(float val);
	void AddHonestDefence(float val);
	void AddStrangeOffence(float val);
	void AddStrangeDefence(float val);
	void AddWildOffence(float val);
	void AddWildDefence(float val);
	void AddEleganceOffence(float val);
	void AddEleganceDefence(float val);
	void AddFunnyOffence(float val);
	void AddFunnyDefence(float val);
	void AddParalyzeToleranceRate(WORD val);
	void AddTerrorToleranceRate(WORD val);
	void AddConfuseToleranceRate(WORD val);
	void AddStoneToleranceRate(WORD val);
	void AddCandyToleranceRate(WORD val);
	void AddParalyzeKeepTimeDown(float val);
	void AddTerrorKeepTimeDown(float val);
	void AddConfuseKeepTimeDown(float val);
	void AddStoneKeepTimeDown(float val);
	void AddCandyKeepTimeDown(float val);
	void AddBleedingKeepTimeDown(float val);
	void AddPoisonKeepTimeDown(float val);
	void AddStomachacheKeepTimeDown(float val);
	void AddCriticalBlockSuccessRate(float val);
	void AddGuardRate(WORD val);
	void AddSkillDamageBlockModeSuccessRate(float val);
	void AddCurseBlockModeSuccessRate(float val);
	void AddKnockdownBlockModeSuccessRate(float val);
	void AddHtbBlockModeSuccessRate(float val);
	void AddSitDownLpRegenBonusRate(float val);
	void AddSitDownEpRegenBonusRate(float val);
	void AddPhysicalCriticalDamageBonusRate(float val);
	void AddEnergyCriticalDamageBonusRate(float val);
	void AddItemUpgradeBonusRate(float val);
	void AddItemUpgradeBreakBonusRate(float val);
	void AddSkillSpeed(float val);
	void AddPhysicalCriticalDefenceRate(WORD val);
	void AddEnergyCriticalDefenceRate(WORD val);
	void AddLastPhysicalCriticalRange(float val);
	void AddLastEnergyCriticalRange(float val);
	void AddLastApDegeneration(WORD val);
	void AddLastApBattleDegeneration(WORD val);
	void AddLastBlockDamageRate(WORD val);
	void AddLastLPSitDownRegeneration(WORD val);
	void AddLastEPSitDownRegeneration(WORD val);
	void AddLastEPBattleRegeneration(WORD val);
};

#endif