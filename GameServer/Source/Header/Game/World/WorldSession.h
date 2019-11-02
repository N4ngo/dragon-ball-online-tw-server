#ifndef __WORLDSESSION_H
#define __WORLDSESSION_H

#include <Define.h>

#include <SharedDef.h>
#include <SharedType.h>

#include <deque>
#include <mutex>
#include <memory>

#include "NtlTSCoreDefine.h" //quitar

enum AccountTypes
{
	PLAYER = 0,
	GAME_MASTER
};



enum eCHARSTATE;

struct sITEM_PROFILE;
struct sUG_TS_CONFIRM_STEP_REQ;

class Packet;
class GameSocket;
class Player;
class CDboTSContStart;
class CDboTSContGAct;
class CDboTSContGCond;
class CDboTSContReward;
class CDboTSContEnd;


class WorldSession
{
public:
	WorldSession(uint32 id, GameSocket* sock, AccountTypes sec);
	~WorldSession();
	void			SendPacket(char* packet, size_t size);

	AccountTypes	GetSecurity() const { return _security; }
	uint32			GetAccountId() const { return _accountId; }
	void			SetSecurity(AccountTypes security) { _security = security; }
	const			std::string &GetRemoteAddress() const;
	void			QueuePacket(std::unique_ptr<Packet> new_packet);
	bool			Update();
	void			LogoutPlayer(bool save);
	void			KickPlayer();
	bool			CreatePlayer(CHARACTERID id);
	// PACKET
	void			PacketParser(Packet& packet);
	// PACKET PROCESS
	void			SendAvatarCharInfo();
	void			SendAvatarSkillInfo();
	void			SendUpdateSkillPassiveAtribute();
	void			SendUpdateSkillPassiveAtributeByID(TBLIDX SkillID, bool isRemove);
	void			SendAvatarItemInfo();
	void			SendAvatarBuffInfo();
	void			SendAvatarHTBInfo();
	void			SendPortalInfo();
	void			SendAvatarTitleInfo();
	void			SendMascotInfo();
	void			SendHoiPoiMixInfo();//Craft list
	void			SendSlotInfo();
	void			SendAvatarInfoEnd();
	void			SendAvatarWagguInfo();
	void			SendAvatarItemCashInfo();
	void			SendAvatarWarFogInfo();
	void			SendNetMarbleMemberShipNfy();
	void			SendWorldEnter();
	void			SendEnterWorldComplete();
	void			SendGameLeave(Packet& packet, bool moveToChar = false);
	void			SendShopRequest(Packet& packet, bool enter);
	void			SendTargetSelection(HOBJECT hTarget);
	// move
	void			SendCharMoveSync(Packet &packet);
	void			SendCharMove(Packet& packet);
	void			SendCharJump(Packet& packet);
	void			SendCharJumpEnd(Packet& packet);
	void			SendCharToggleSitDown(Packet& packet);
	void			SendCharHeadChanging(Packet& packet);
	void			SendCharDestLoc(Packet& packet);
	void			SendCharFollowMove(Packet& packet);
	void			SendCharSyncFollow(Packet& packet);
	void			SendAirJumpMove(Packet& packet);
	void			SendAirJMove(Packet& packet);
	void			SendAirDashMove(Packet& packet);
	void			SendAirFalling(Packet& packet);
	void			SendAirEnd(Packet& packet);
	// portal
	void			SendPortalTeleport(Packet& packet);
	void			SendAddPortal(Packet& packet);
	void			SendEnterWorldTeleport();
	//Dangeon Teleport
	void			SendDangeonTeleport(HOBJECT	handle, WORD Dificulty);
	// warfog
	void			SendFogOfWarRes(Packet& packet);
	// quick slot
	void			SendUpdateQuickSlots(Packet& packet);
	void			SendRemoveQuickSlots(Packet& packet);
	// inventory
	void			SendItemMove(Packet& packet);
	void			SendItemMoveStack(Packet& packet);
	void			SendRemoveItem(Packet& packet);
	void			SendItemCreate(sITEM_PROFILE *createdItem);

	void			SendPickUp(HOBJECT handle);
	// SHOP
	void			SendShopBuy(Packet& packet);
	void			SendShopEventBuy(Packet& packet);
	void			SendShopItemChange(Packet& packet);
	void			SendShopSell(Packet& packet);
	//HLS Shop
	void			SendHLSShopStart(Packet& packet);
	void			SendHLSShopEnd(Packet& packet);
	//Cash Shop
	void			SendCashItemStart(Packet& packet);
	void			SendCashItemBuy(Packet& packet);
	void			SendCashItemMove(Packet& packet);
	void			SendCashItemEnd(Packet& packet);
	//Token Shop
	void			SendNetPyStart(Packet& packet);
	void			SendNetPyBuy(Packet& packet);
	void			SendNetPyEnd(Packet& packet);
	//HoiPoiMix
	void			SendHoiPoiMixCreate(Packet& packet);
	// AutoAttck
	void			SendToggleAutoAttack(bool val);
	//Skills
	void			HandleUseSkill(Packet& packet);
	void			UseSkill(Packet& packet);
	void			LearnSkill(TBLIDX id);
	void			RewardSkill(TBLIDX id);
	void			LearnMestrySkill(TBLIDX id);
	void			UpgradeSkill(Packet& packet);
	void			ResetSkill(Packet& packet);
	//Budokay

	//Events
	void			SendDragonBallsCheck(Packet& packet);
	void			SendShenlongReward(Packet& packet);
	//Guilds
	void			SendGuildCreateReq(Packet& packet);
	// command
	void			ExecuteServerCommand(Packet& packet);
	// social
	void			SendSocialSkill(Packet& packet);
	// Quest Handle
	void			SendQuestAcept(Packet& packet);
	void			GetQuestInfo(DWORD QuestID, DWORD tcCurId, DWORD tcNextId);
	void			GetQuestPortalInfo(DWORD QuestID, DWORD tcCurId, DWORD tcNextId);	
	//void			SendQuestCompleteInfo();
	// TS Quest
	void			FindQuestInformation(sUG_TS_CONFIRM_STEP_REQ * req);
	void			ProcessTSContStart(CDboTSContStart * contStart);
	void			ProcessTsContGAct(CDboTSContGAct * contGAct);
	void			ProcessTsContGCond(CDboTSContGCond * contGCond);
	void			ProcessTsContReward(CDboTSContReward * contReward);
	void			ProcessTsContEnd(CDboTSContEnd * contEnd);
	void			SendQuestSVRevtStartNotify(NTL_TS_T_ID tid, NTL_TS_TC_ID tcId, NTL_TS_TA_ID taId);
	//RankBatle
	void			GetPlayerFromRankList();
	
	
private:
	GameSocket * const m_Socket;                       // socket pointer is owned by the network thread which created 
	AccountTypes	_security;
	uint32			_accountId;

	std::mutex		m_recvQueueLock;
	std::deque<std::unique_ptr<Packet>> m_recvQueue;	
	bool			requestToLogout;
	/*	 PLAYER INFO	*/
	Player*			_player;
	/*		END			*/
};
#endif
/// @}