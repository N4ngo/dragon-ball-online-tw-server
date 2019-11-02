#ifndef _DBO_TSCOREDEFINE_H_
#define _DBO_TSCOREDEFINE_H_

#include "NtlQuest.h"

//////////////////////////////////////////////////////////////////////////
//
//	Ʈ���� �ý����� �з�
//
//////////////////////////////////////////////////////////////////////////

#define TS_TYPE_QUEST_CS				(0)
#define TS_TYPE_PC_TRIGGER_CS			(1)
#define TS_TYPE_OBJECT_TRIGGER_S		(2)
#define TS_TYPE_INVALID					(0xff)


//////////////////////////////////////////////////////////////////////////
//
//	TS Key
//
//////////////////////////////////////////////////////////////////////////

struct sTS_KEY
{
	void Init( void )
	{
		byTSType = TS_TYPE_INVALID;
		tID = NTL_TS_T_ID_INVALID;
		tgID = NTL_TS_TG_ID_INVALID;
		tcID = NTL_TS_TC_ID_INVALID;
		taID = NTL_TS_TA_ID_INVALID;
	}

	unsigned char						byTSType;
	NTL_TS_T_ID							tID;
	NTL_TS_TG_ID						tgID;
	NTL_TS_TC_ID						tcID;
	NTL_TS_TA_ID						taID;
};


//////////////////////////////////////////////////////////////////////////
//
//	Quest mark key
//
//////////////////////////////////////////////////////////////////////////

typedef struct sQuestMark_Key
{
	unsigned char	byQProgType;
	NTL_TS_T_ID		tId;
	NTL_TS_TC_ID	tcId;
	unsigned char	byType;
	unsigned int	uiUserData1;
	unsigned int	uiUserData2;

	void Init( void )
	{
		byQProgType = 0;
		tId = NTL_TS_T_ID_INVALID;
		tcId = NTL_TS_TC_ID_INVALID;
		byType = 0xff;
		uiUserData1 = 0xffffffff;
		uiUserData2 = 0xffffffff;
	}

	bool operator < ( const sQuestMark_Key& data ) const
	{
		return _memicmp( this, &data, sizeof( sQuestMark_Key ) ) < 0 ? true : false;
	}

} QM_KEY;


enum eQMI_TARGET_TYPE
{
	eQMI_TARGET_TYPE_NPC,
	eQMI_TARGET_TYPE_OBJECT,
	eQMI_TARGET_TYPE_POSITION,

	NUM_eQMI_TARGET_TYPE
};


//////////////////////////////////////////////////////////////////////////
//
//	Branch info
//
//////////////////////////////////////////////////////////////////////////

enum { eBRANCH_INFO_MAX = 10 };

struct sTS_BRANCH_INFO
{
	unsigned int						uiBranchText;
	NTL_TS_TC_ID						tcID;
};


//////////////////////////////////////////////////////////////////////////
//
//	TS state
//
//////////////////////////////////////////////////////////////////////////

enum
{
	// ���� ����� ����� ����
	eTS_PROG_STATE_PROGRESS_FAILED				= 0x00000001,	// ����Ʈ ���� ���� �÷���
	eTS_PROG_STATE_ERROR_BLOCK					= 0x00000002,	// ����Ʈ ���� ó���� ���� �÷���
	eTS_PROG_STATE_ESCORT						= 0x00000004,	// ȣ�� ����
	eTS_PROG_STATE_SVR_EVT_WORLD_RANGE			= 0x00000008,	// �����̺�Ʈ(��ų...)�� ���� ����� ���� ( �� �÷��װ� ���� ���� ������ ��Ƽ �������� ó���� )
	eTS_PROG_STATE_WPS_MODE						= 0x00000010,	// World play script �׼��� ������
	eTS_PROG_STATE_USER_OUT_FAILED_WPS			= 0x00000020,	// World play script ������ ������ �α� �ƿ� �� ��� Failed ó�� �Ǿ�� �ϴ� ��츦 �����ϴ� �÷���

	// ���� ����� ������� ����
	eTS_PROG_STATE_CLEARED						= 0x00010000,	// ����Ʈ Ŭ����
	eTS_PROG_STATE_EXIT							= 0x00020000,	// ���� ����
	eTS_PROG_STATE_CS_COM_WAIT					= 0x00040000,	// ������ Ŭ���̾�Ʈ ��� ��
	eTS_PROG_STATE_CLIENT_COM_WAIT				= 0x00080000,	// Ŭ���̾�Ʈ�� ��� ��
	eTS_PROG_STATE_SVR_COM_WAIT					= 0x00100000,	// ������ ��� ��
	eTS_PROG_STATE_UI_PROGRESS					= 0x00200000,	// ����Ʈ �������� ����
	eTS_PROG_STATE_SVR_COM_AFTER_CLIENT_WAIT	= 0x00400000,	// ������ ����� Ŭ���̾�Ʈ ���
	eTS_PROG_STATE_SUCCESS						= 0x00800000,	// Success
	eTS_PROG_STATE_COMPLETE						= 0x01000000,	// Complete
};


//////////////////////////////////////////////////////////////////////////
//
//	����Ʈ ����
//
//////////////////////////////////////////////////////////////////////////

enum eQUEST_SORT_TYPE
{
	eQUEST_SORT_TYPE_BEGIN						= 0,

	eQUEST_SORT_TYPE_TASK						= eQUEST_SORT_TYPE_BEGIN,
	eQUEST_SORT_TYPE_SCENARIO,
	eQUEST_SORT_TYPE_TIMEMACHINE,
	eQUEST_SORT_TYPE_CHANGEJOB,
	eQUEST_SORT_TYPE_DRAGONBALL,
	eQUEST_SORT_TYPE_TIMELEAPQUEST,

	eQUEST_SORT_TYPE_END,

	eQUEST_SORT_TYPE_INVALID			= 0xffffffff
};


//////////////////////////////////////////////////////////////////////////
//
//	Storage slot memory
//
//////////////////////////////////////////////////////////////////////////

enum eSSM_ID
{
	eSSM_ID_0,
	eSSM_ID_1,
	eSSM_ID_2,
	eSSM_ID_3,
	eSSM_ID_4,
	eSSM_ID_5,
	eSSM_ID_6,
	eSSM_ID_7,
	eSSM_ID_MAX,

	eSSM_ID_INVALID						= 0xffffffff
};


//////////////////////////////////////////////////////////////////////////
//
//	Parameter stack
//
//////////////////////////////////////////////////////////////////////////

enum ePS_TYPE
{
	ePS_TYPE_AVATAR,
	ePS_TYPE_CLICKED_OBJECT,
	ePS_TYPE_CLICKED_NPC,
	ePS_TYPE_MAX,

	ePS_TYPE_INVALID					= 0xffffffff
};


//////////////////////////////////////////////////////////////////////////
//
//	Group
//
//////////////////////////////////////////////////////////////////////////

// Main group id�� 0 ���� ����
#define NTL_TS_MAIN_GROUP_ID			(0)

// Except time limit group id�� 1 ~ 10 ������ ���� ���� �� ����
#define NTL_TS_EXCEPT_TLIMT_GROUP_ID_BEGIN		(1)
#define NTL_TS_EXCEPT_TLIMT_GROUP_ID_END		(10)

// Except server group id�� 11 ~ 20 ������ ���� ���� �� ����
#define NTL_TS_EXCEPT_SERVER_GROUP_ID_BEGIN		(11)
#define NTL_TS_EXCEPT_SERVER_GROUP_ID_END		(20)

// Except client group id�� 21 ~ 30 ������ ���� ���� �� ����
#define NTL_TS_EXCEPT_CLIENT_GROUP_ID_BEGIN		(21)
#define NTL_TS_EXCEPT_CLIENT_GROUP_ID_END		(30)

// Except give up group id�� 254 ���� ���� �� ����
#define NTL_TS_EXCEPT_GIVEUP_ID					(254)


//////////////////////////////////////////////////////////////////////////
//
//	Container
//
//////////////////////////////////////////////////////////////////////////

#define START_CONTAINER_ID				(0)


enum eNARRATION_PROGRESS_STATE
{
	eNARRATION_PROGRESS_STATE_START,
	eNARRATION_PROGRESS_STATE_PROGRESS,
	eNARRATION_PROGRESS_STATE_END,
	eNARRATION_PROGRESS_STATE_SINGLE,

	eNARRATION_PROGRESS_STATE_INVALID	= 0xffffffff
};

enum eNARRATION_OWNER_TYPE
{
	eNARRATION_OWNER_NPC,
	eNARRATION_OWNER_MOB,
	eNARRATION_OWNER_PC,

	eNARRATION_OWNER_INVALID			= 0xffffffff
};

enum eNARRATION_OWNER_STATE
{
	eNARRATION_OWNER_STATE_1,
	eNARRATION_OWNER_STATE_2,
	eNARRATION_OWNER_STATE_3,
	eNARRATION_OWNER_STATE_4,

	eNARRATION_OWNER_STATE_INVALID		= 0xffffffff
};

enum eNARRATION_DIALOG_DIR_TYPE
{
	eNARRATION_DIALOG_DIR_TYPE_NORMAL,
	eNARRATION_DIALOG_DIR_TYPE_BLENDING,
	eNARRATION_DIALOG_DIR_TYPE_LINE,

	eNARRATION_DIALOG_DIR_TYPE_INVALID	= 0xffffffff
};

enum eNARRATION_GUI_TYPE
{
	eNARRATION_GUI_TYPE_NORMAL,
	eNARRATION_GUI_TYPE_BOMB,

	eNARRATION_GUI_TYPE_INVALID	= 0xffffffff
};

enum eUSER_SEL_TYPE
{
	eUSER_SEL_TYPE_GENERAL,
	eUSER_SEL_TYPE_NARRATION,

	eUSER_SEL_TYPE_INVALID
};

enum eUSER_SEL_PROGRESS_STATE
{
	eUSER_SEL_PROGRESS_STATE_START,
	eUSER_SEL_PROGRESS_STATE_PROGRESS,
	eUSER_SEL_PROGRESS_STATE_END,
	eUSER_SEL_PROGRESS_STATE_SINGLE,

	eUSER_SEL_PROGRESS_STATE_INVALID	= 0xffffffff
};

enum eUSER_SEL_TARGET_TYPE
{
	eUSER_SEL_TARGET_TYPE_NPC,
	eUSER_SEL_TARGET_TYPE_OBJECT,

	eUSER_SEL_TARGET_TYPE_INVALID	= 0xffffffff
};

enum eBROAD_MSG_TYPE
{
	eBROAD_MSG_TYPE_TS,
	eBROAD_MSG_TYPE_EMERGENCY,
	eBROAD_MSG_TYPE_MINI_NARRATION
};

enum eBROAD_MSG_EXCUTION_TYPE
{
	eBROAD_MSG_EXCUTION_TYPE_START,
	eBROAD_MSG_EXCUTION_TYPE_END,
	eBROAD_MSG_EXCUTION_TYPE_TIME,

	eBROAD_MSG_EXCUTION_TYPE_INVALID = 0xff
};

/**
* \brief Mini Narration UI �� ��鸮�� ����
*/
enum eBROAD_MSG_UI_DIR_TYPE
{
	eBROAD_MSG_UI_DIR_TYPE_NORMAL,				///< Shake ����
	eBROAD_MSG_UI_DIR_TYPE_WARNING,				///< Shake ��
	eBROAD_MSG_UI_DIR_TYPE_DANGER				///< Shake ��
};

/**
* \brief Mini Narration UI�� Show/Hide ���� Type
*/
enum eBROAD_MSG_UI_SHOWHIDE_DIR_TYPE
{
	eBROAD_MSG_UI_SHOWHIDE_DIR_TYPE_NORMAL,			///< �׳� ��Ÿ����
	eBROAD_MSG_UI_SHOWHIDE_DIR_TYPE_FADE,			///< Fade in/out
	eBROAD_MSG_UI_SHOWHIDE_DIR_TYPE_SLIDE,			///< Slide in/out
	eBROAD_MSG_UI_SHOWHIDE_DIR_TYPE_FADE_SLIDE		///< Fade/Slide in/out
};

/**
* \brief Mini Narration UI�� ��ǳ����� Type
*/
enum eBROAD_MSG_UI_BALLOON_SHAPE_TYPE
{
	eBROAD_MSG_UI_BALLOON_SHAPE_TYPE_BC_NORMAL,		///< �Ϲ� ��ǳ��
	eBROAD_MSG_UI_BALLOON_SHAPE_TYPE_BC_STAR,		///< ��ġ�� ��ǳ��
	eBROAD_MSG_UI_BALLOON_SHAPE_TYPE_BC_THINK		///< �����ϴ� ��ǳ��
};

/**
* \brief Mini Narration UI�� Text ���� Type
*/
enum eBROAD_MSG_UI_SPEECH_DIR_TYPE
{
	eBROAD_MSG_UI_SPEECH_DIR_TYPE_NORMAL,			///< �׳� ��Ÿ����
	eBROAD_MSG_UI_SPEECH_DIR_TYPE_BLENDING,			///< ������ �Ǹ鼭 ��Ÿ����
	eBROAD_MSG_UI_SPEECH_DIR_TYPE_LINE				///< �ѱ��ھ� ��Ÿ����
};

/**
* \brief Mini Narration UI�� Owner�� Condition(����, Type�� ���� �Ϸ���Ʈ�� �ٲ��.)
*/
enum eBROAD_MSG_OWNER_CONDITION
{
	eBROAD_MSG_OWNER_CONDITION_1,					///< %tblidx%_1_m.png
	eBROAD_MSG_OWNER_CONDITION_2,					///< %tblidx%_2_m.png
	eBROAD_MSG_OWNER_CONDITION_3,					///< %tblidx%_3_m.png
	eBROAD_MSG_OWNER_CONDITION_4					///< %tblidx%_4_m.png
};

/**
* \brief Mini Narration UI���� �о���� Table
*/
enum eBROAD_MSG_OWNER_TYPE
{
	eBROAD_MSG_OWNER_TYPE_NPC,			///< Npc Table
	eBROAD_MSG_OWNER_TYPE_MOB			///< Mob Table
};

/**
* \brief BroadCast Msg�� Data ����ü
*/
struct sBROAD_MSG_DATA
{
	eBROAD_MSG_UI_DIR_TYPE				eUIDirType;				///< ��ü ���� Type
	eBROAD_MSG_UI_SHOWHIDE_DIR_TYPE		eUIShowHideType;		///< ���� ���� Type
	eBROAD_MSG_UI_BALLOON_SHAPE_TYPE	eUIBalloonShapeType;	///< ��ǳ�� Type
	eBROAD_MSG_UI_SPEECH_DIR_TYPE		eUISpeechDirType;		///< �ؽ�Ʈ ���� Type

	eBROAD_MSG_OWNER_CONDITION			eOwnerCondition;		///< �Ϸ���Ʈ Type

	eBROAD_MSG_OWNER_TYPE				eOwnerType;				///< NPC/MOB Table
	unsigned int						uiOwnerTblIdx;			///< Table Index

	std::wstring						wstrSpeech;				///< Text ( load from table )

	float								fDisplayTime;			///< ��� â�� ���� �ִ� �ð� (�ʴ���)
};

typedef std::vector< sBROAD_MSG_DATA > vecdef_BroadMsgDataList;

//////////////////////////////////////////////////////////////////////////
//
//	Event
//
//////////////////////////////////////////////////////////////////////////

// �̺�Ʈ �������� Ÿ��
enum eEVENT_GEN_TYPE
{
	eEVENT_GEN_TYPE_CLICK_NPC,
	eEVENT_GEN_TYPE_CLICK_OBJECT,
	eEVENT_GEN_TYPE_COL_OBJECT,
	eEVENT_GEN_TYPE_ITEM_USE,
	eEVENT_GEN_TYPE_ITEM_GET,
	eEVENT_GEN_TYPE_ITEM_EQUIP,
	eEVENT_GEN_TYPE_SCOUT_USE,
	eEVENT_GEN_TYPE_RCV_SVR_EVT,
	eEVENT_GEN_TYPE_SKILL_USE,
	eEVENT_GEN_TYPE_COL_REGION,
	eEVENT_GEN_TYPE_RB,
	eEVENT_GEN_TYPE_CLICK_MOB,
	eEVENT_GEN_TYPE_SKIP_CONT,
	eEVENT_GEN_TYPE_BIND_STONE,
	eEVENT_GEN_TYPE_SEARCH_QUEST,
	eEVENT_GEN_TYPE_ITEM_UPGRADE,
	eEVENT_GEN_TYPE_TELEPORT,
	eEVENT_GEN_TYPE_BUDOKAI,
	eEVENT_GEN_TYPE_SLOTMACHINE,
	eEVENT_GEN_TYPE_HOIPOIMIX,
	eEVENT_GEN_TYPE_PRIVATESHOP,
	eEVENT_GEN_TYPE_FREEBATTLE,
	eEVENT_GEN_TYPE_ITEMIDENTITY,
	eEVENT_GEN_TYPE_USEMAIL,
	eEVENT_GEN_TYPE_PARTY,

	eEVENT_GEN_TYPE_INVALID				= 0xffffffff
};

// ������ ��� ����� ����
enum eEVENT_ITEM_TARGET_TYPE
{
	eEVENT_ITEM_TARGET_TYPE_MOB,
	eEVENT_ITEM_TARGET_TYPE_NPC,
	eEVENT_ITEM_TARGET_TYPE_AVATAR,
	eEVENT_ITEM_TARGET_TYPE_ALL,

	eEVENT_ITEM_TARGET_TYPE_INVALID		= 0xffffffff
};

// ��ī���� ��� ����� ����
enum eEVENT_SCOUTER_TARGET_TYPE
{
	eEVENT_SCOUTER_TARGET_TYPE_MOB,
	eEVENT_SCOUTER_TARGET_TYPE_NPC,
	eEVENT_SCOUTER_TARGET_TYPE_AVATAR,
	eEVENT_SCOUTER_TARGET_TYPE_ALL,

	eEVENT_SCOUTER_TARGET_TYPE_INVALID	= 0xffffffff
};

// ��ų Ÿ��
enum eEVENT_SKILL_TYPE
{
	eEVENT_SKILL_TYPE_DASH,
	eEVENT_SKILL_TYPE_GUARD,
	eEVENT_SKILL_TYPE_CHARGING,
	eEVENT_SKILL_TYPE_SKILLIDX,
	eEVENT_SKILL_TYPE_INVALID
};

// ��ų ��� ����� ����
enum eEVENT_SKILL_TARGET_TYPE
{
	eEVENT_SKILL_TARGET_TYPE_MOB,
	eEVENT_SKILL_TARGET_TYPE_NPC,
	eEVENT_SKILL_TARGET_TYPE_ALL,

	eEVENT_SKILL_TARGET_TYPE_INVALID	= 0xffffffff
};

enum eEVENT_SKILL_RP
{
	eEVENT_SKILL_RP_KNOCKDOWN,
	eEVENT_SKILL_RP_POWER,
	eEVENT_SKILL_RP_EP_MINUS,
	eEVENT_SKILL_RP_KEEP_TIME_PLUS,
	eEVENT_SKILL_RP_CASTING_TIME_MINUS,
	eEVENT_SKILL_RP_COOL_TIME_NINUS,
	eEVENT_SKILL_RP_GUARD_CRASH,

	eEVENT_SKILL_RP_INVALID				= 0xffffffff
};

enum eEVENT_COL_RGN_TYPE
{
	eEVENT_COL_RGN_TYPE_RADIUS,
	eEVENT_COL_RGN_TYPE_RECTANGLE,

	eEVENT_COL_RGN_TYPE_INVALID			= 0xffffffff
};

enum eCOL_RESULT_TYPE
{
	// ���浹��
	eCOL_RESULT_TYPE_NOT_COLLISION		= 0x00000000,	// �浹�� �߻����� ����

	// �浹��
	eCOL_RESULT_TYPE_ENTER				= 0x00000001,	// �浹 ���� ������ ����
	eCOL_RESULT_TYPE_LEAVE				= 0x00000002,	// �浹 ���� ������ ����
	eCOL_RESULT_TYPE_THROUGH			= 0x00000004,	// �浹 ������ �����
};

enum eRB_COND_FLAG
{
	eRB_COND_FLAG_INVALID				= 0x00000000,

	eRB_COND_FLAG_PRIVATE_ENTER			= 0x00000001,	// ������ ����
	eRB_COND_FLAG_PARTY_ENTER			= 0x00000002,	// ��Ƽ�� ����
	eRB_COND_FLAG_PRIVATE_WIN			= 0x00000004,	// ������ �¸�
	eRB_COND_FLAG_PARTY_WIN				= 0x00000008,	// ��Ƽ�� �¸�
};

//////////////////////////////////////////////////////////////////////////
//
//	Condition
//
//////////////////////////////////////////////////////////////////////////

// SSM ���� ���
enum eSSM_OP_TYPE
{
	eSSM_OP_TYPE_EQUAL,
	eSSM_OP_TYPE_NOT_EQUAL,
	eSSM_OP_TYPE_LESS,
	eSSM_OP_TYPE_LESS_EQUAL,
	eSSM_OP_TYPE_MORE,
	eSSM_OP_TYPE_MORE_EQUAL,
	eSSM_OP_TYPE_MAX,

	eSSM_OP_TYPE_INVALID				= 0xffffffff
};

// PS ���� ���
enum ePS_OP_TYPE
{
	ePS_OP_TYPE_EMPTY,
	ePS_OP_TYPE_POP,
	ePS_OP_TYPE_MAX,

	ePS_OP_TYPE_INVALID					= 0xffffffff
};

// Quest item
enum eQUEST_ITEM_CHECK_TYPE
{
	eQUEST_ITEM_CHECK_TYPE_EQUAL,
	eQUEST_ITEM_CHECK_TYPE_MORE,
	eQUEST_ITEM_CHECK_TYPE_LESS,

	eQUEST_ITEM_CHECK_TYPE_INVALID		= 0xffffffff
};

// Budokai
enum eTS_BUDOKAI_MODE
{
	eTS_BUDOKAI_MODE_ADULT,
	eTS_BUDOKAI_MODE_CHILD,
	eTS_BUDOKAI_MODE_ALL
};

enum eTS_BUDOKAI_STATE
{
	eTS_BUDOKAI_STATE_OPEN,
	eTS_BUDOKAI_STATE_CLOSE
};

//////////////////////////////////////////////////////////////////////////
//
//	Action
//
//////////////////////////////////////////////////////////////////////////

// ����Ʈ ������
enum eQITEM_TYPE
{
	eQITEM_TYPE_CREATE,
	eQITEM_TYPE_DELETE
};

// �Ϲ� ������
enum eTSITEM_TYPE
{
	eTSITEM_TYPE_CREATE,
	eTSITEM_TYPE_DELETE
};

enum eTSITEM_SLOT_TYPE
{
	eTSITEM_SLOT_TYPE_EQUIP,
	eTSITEM_SLOT_TYPE_BAG,
	eTSITEM_SLOT_TYPE_PARTS
};

// ���� Ÿ�̸� ����
enum eEXCEPT_TIMER_SORT
{
	eEXCEPT_TIMER_SORT_LIMIT_TIMER,
	eEXCEPT_TIMER_SORT_SERVER_TIMER,
	eEXCEPT_TIMER_SORT_CLIENT_TIMER
};

// ���� �̺�Ʈ ���� / ����
enum eSTOC_EVT_TYPE
{
	eSTOC_EVT_TYPE_START,
	eSTOC_EVT_TYPE_END
};

// ���� �̺�Ʈ�� ����
enum eSTOC_EVT_DATA_TYPE
{
	eSTOC_EVT_DATA_TYPE_MOB_KILL_CNT,
	eSTOC_EVT_DATA_TYPE_MOB_KILL_ITEM_CNT,
	eSTOC_EVT_DATA_TYPE_DELIVERY_ITEM,
	eSTOC_EVT_DATA_TYPE_OBJECT_ITEM,
	eSTOC_EVT_DATA_TYPE_PUBLIC_MOB_ITEM_CNT,
	eSTOC_EVT_DATA_TYPE_CUSTOM_EVT_CNT,
	eSTOC_EVT_DATA_TYPE_VISIT,

	eSTOC_EVT_DATA_TYPE_MAX,
	eSTOC_EVT_DATA_TYPE_INVALID			= 0xffffffff
};


// �� ���̱�
struct sSTOC_EVT_DATA_MOB_KILL_CNT
{
	unsigned int								uiMobIdx;
	int											nMobCnt;
	int											nCurMobCnt;
};

// �� ������ ���� �ϱ�
struct sSTOC_EVT_DATA_MOB_KILL_ITEM_CNT
{
	unsigned int								uiMobLIIdx;
	int											nMobLICnt;
	int											nCurMobLICnt;
};

// ������ ����ϱ�
struct sSTOC_EVT_DATA_DELIVERY_ITEM
{
	unsigned int								uiItemIdx;
	int											nItemCnt;
	int											nCurItemCnt;
};

// ������Ʈ ������
struct sSTOC_EVT_DATA_OBJECT_ITEM
{
	unsigned int								uiItemIdx;
	int											nItemCnt;
	int											nCurItemCnt;
};

// public �� ������ ���� - �� ���� ��� �̺�Ʈ
struct sSTOC_EVT_DATA_PUBLIC_MOB_ITEM_CNT
{
	unsigned int								uiItemIdx;
	unsigned int								uiRequireItemIdx;
	float										fDropRate;				// drop rate : 0.0 ~ 1.0
	int											nItemCnt;
	int											nCurItemCnt;
};

// Ŀ���� �̺�Ʈ ī��Ʈ ( ���� )
struct sSTOC_EVT_DATA_CUSTOM_EVT_CNT
{
	unsigned int								uiQTextTblIdx;			// ����Ʈ �ؽ�Ʈ ���̺� �ε���
	unsigned int								uiCustomEvtID;			// ��� 
	int											nMaxCnt;				// �ִ� ī����
	int											nCurCnt;				// �ּ� ī����
};

// NPC... ���� �湮�ϴ� ���� �̺�Ʈ
struct sSTOC_EVT_DATA_VISIT_EVT
{
	bool										bCompleted;
	unsigned char								byObjType;				// eOBJTYPE : [ OBJTYPE_NPC | OBJTYPE_TOBJECT ] �� ��� �Ѵ�.
	unsigned int								uiWorldTblIdx;
	unsigned int								uiObjTblIdx;
	unsigned int								uiIndicatorQText;
	unsigned int								uiDialogText;
	unsigned int								uiItemTblIdx;			// ������ ����Ʈ ������ tblidx [10/15/2008 niam]
};

union uSTOC_EVT_DATA
{
	enum
	{
		MAX_MOB_KILL							= 3,
		MAX_MOB_KILL_ITEM						= 3,
		MAX_DELIVERY_ITEM						= 3,
		MAX_OBJECT_ITEM							= 3,
		MAX_PUBLIC_MOB_ITEM						= 1,
		MAX_CUSTOM_EVT_CNT						= 1,
		MAX_VISIT_EVT							= 3,
	};

	sSTOC_EVT_DATA_MOB_KILL_CNT					sMobKillCnt[MAX_MOB_KILL];
	sSTOC_EVT_DATA_MOB_KILL_ITEM_CNT			sMobKillItemCnt[MAX_MOB_KILL_ITEM];
	sSTOC_EVT_DATA_DELIVERY_ITEM				sDeliveryItemCnt[MAX_DELIVERY_ITEM];
	sSTOC_EVT_DATA_OBJECT_ITEM					sObjectItemCnt[MAX_OBJECT_ITEM];
	sSTOC_EVT_DATA_PUBLIC_MOB_ITEM_CNT			sPublicMobItemCnt[MAX_PUBLIC_MOB_ITEM];
	sSTOC_EVT_DATA_CUSTOM_EVT_CNT				sCustomEvtCnt[MAX_CUSTOM_EVT_CNT];
	sSTOC_EVT_DATA_VISIT_EVT					sVisitEvt[MAX_VISIT_EVT];
};

// ���� �̺�Ʈ �˻� ������ ����
enum eSTOC_EVT_COND_DATA_TYPE
{
	eSTOC_EVT_COND_DATA_TYPE_AUTO_EQUIP_ITEM,
	eSTOC_EVT_COND_DATA_TYPE_EQUIP_ITEM,
	eSTOC_EVT_COND_DATA_TYPE_HAVE_ITEM,
	eSTOC_EVT_COND_DATA_TYPE_HAVE_QITEM,

	eSTOC_EVT_COND_DATA_TYPE_MAX,
	eSTOC_EVT_COND_DATA_TYPE_INVALID			= 0xffffffff
};

struct sSTOC_EVT_COND_DATA_AUTO_EQUIP_ITEM
{
	unsigned int								uiItemTblIdx;
};

struct sSTOC_EVT_COND_DATA_EQUIP_ITEM
{
	unsigned int								uiItemTblIdx;
};

struct sSTOC_EVT_COND_DATA_HAVE_ITEM
{
	unsigned int								uiItemTblIdx;
};

struct sSTOC_EVT_COND_DATA_HAVE_QITEM
{
	unsigned int								uiQItemTblIdx;
	int											nQITemCnt;
};

union uSTOC_EVT_COND_DATA
{
	enum
	{
		MAX_AUTO_EQUIP_ITEM						= 1,
		MAX_EQUIP_ITEM							= 1,
		MAX_HAVE_ITEM							= 1,
		MAX_HAVE_QITEM							= 1,
	};

	sSTOC_EVT_COND_DATA_AUTO_EQUIP_ITEM			sAutoEquipItem[MAX_AUTO_EQUIP_ITEM];
	sSTOC_EVT_COND_DATA_EQUIP_ITEM				sEquipItem[MAX_EQUIP_ITEM];
	sSTOC_EVT_COND_DATA_HAVE_ITEM				sHaveItem[MAX_HAVE_ITEM];
	sSTOC_EVT_COND_DATA_HAVE_QITEM				sHaveQItem[MAX_HAVE_QITEM];
};

// ���� �̺�Ʈ �˻� ���� ������ ����
enum eSTOC_EVT_SUB_COND_DATA_FLAG
{
	eSTOC_EVT_SUB_COND_DATA_FLAG_INVALID			= 0x00000000,

	eSTOC_EVT_SUB_COND_DATA_FLAG_LEVEL_DIFF_LESS	= 0x00000001
};

struct sSTOC_EVT_SUB_COND_DATA_LEVEL_DIFF_LESS
{
	int											nLevelDiff;
};

struct sSTOC_EVT_SUB_COND_DATA
{
	sSTOC_EVT_SUB_COND_DATA_LEVEL_DIFF_LESS		sLevelDiffLess;
};

// NPC ��ȭ Ÿ��
enum eNPCCONV_TYPE
{
	eNPCCONV_TYPE_DIALOGBOX,
	eNPCCONV_TYPE_TOOLTIP,

	eNPCCONV_TYPE_INVALID						= 0xffffffff
};

// Object ��ȭ Ÿ��
enum eOBJCONV_TYPE
{
	eOBJCONV_TYPE_DIALOGBOX,
	eOBJCONV_TYPE_TOOLTIP,

	eOBJCONV_TYPE_INVALID						= 0xffffffff
};

// Grade type
enum eGRADE_TYPE
{
	eGRADE_TYPE_VERY_EASY,
	eGRADE_TYPE_EASY,
	eGRADE_TYPE_NORMAL,
	eGRADE_TYPE_HARD,
	eGRADE_TYPE_VERY_HARD,
	eGRADE_TYPE_IMPOSSIBLE,

	eGRADE_TYPE_INVALID							= 0xffffffff
};

// �� ���� Ÿ��
enum eCINE_TYPE
{
	eCINE_TYPE_NARRATION,
	eCINE_TYPE_INVALID							= 0xffffffff
};

// Ʈ���� ���� Ÿ��
enum eEXC_TRIG_TYPE
{
	eEXC_TRIG_TYPE_QUEST,
	eEXC_TRIG_TYPE_OBJECT,
	eEXC_TRIG_TYPE_NPC,
	eEXC_TRIG_TYPE_WORLD
};

// ��Ż Ÿ��
enum ePORTAL_TYPE
{
	ePORTAL_TYPE_TELEPORT,
	ePORTAL_TYPE_GATEWAY,
};

// ������ Ÿ��
enum eWINDOW_TYPE
{
	eWINDOW_TYPE_TUTORIALHINT,
	eWINDOW_TYPE_HELP,
	eWINDOW_TYPE_INVENTORY,
	eWINDOW_TYPE_SKILL,
	eWINDOW_TYPE_CHARINFO,

	eWINDOW_TYPE_INVALID
};

// ������ �ִ� ���� ����
#define MAX_DEFAULT_REWARD				(4)
#define MAX_SELECTION_REWARD			(4)

enum eREWARD_CONTAINER_TYPE
{
	eREWARD_CONTAINER_TYPE_QUEST,
	eREWARD_CONTAINER_TYPE_TMQ
};

// ���� ����
enum eREWARD_TYPE
{
	eREWARD_TYPE_NORMAL_ITEM,
	eREWARD_TYPE_QUEST_ITEM,
	eREWARD_TYPE_EXP,
	eREWARD_TYPE_SKILL,
	eREWARD_TYPE_ZENY,
	eREWARD_TYPE_CHANGE_CLASS,
	eREWARD_TYPE_BUFF,
	eREWARD_TYPE_PROBABILITY,
	eREWARD_TYPE_REPUTATION,
	eREWARD_TYPE_CHANGE_ADULT,
	eREWARD_TYPE_GET_CONVERT_CLASS_RIGHT,

	eREWARD_TYPE_INVALID				= 0xffffffff
};


// TS ���¿� ���� Ÿ��
enum eTSSTATE_TYPE
{
	eTSSTATE_TYPE_ADD,
	eTSSTATE_TYPE_REMOVE
};

// TS ��� Ÿ��
enum eTSTELECAST_TYPE
{
	eTSTELECAST_TYPE_TIME,
	eTSTELECAST_TYPE_BEGIN,
	eTSTELECAST_TYPE_END,

	eTSTELECAST_TYPE_INVALID = 0xff
};

// ��Ƽ �ν��Ͻ� ����
enum ePARTY_DUNGEON_TYPE
{
	ePARTY_DUNGEON_TYPE_ENTER,
	ePARTY_DUNGEON_TYPE_LEAVE,
	ePARTY_DUNGEON_TYPE_INVALID
};

// Time Leap Quest ����
enum eTLQ_DUNGEON_TYPE
{
	eTLQ_DUNGEON_TYPE_ENTER,
	eTLQ_DUNGEON_TYPE_LEAVE,
	eTLQ_DUNGEON_TYPE_INVALID
};

// Dojo ����
enum eDOJO_DUNGEON_TYPE
{
	eDOJO_DUNGEON_TYPE_ENTER,
	eDOJO_DUNGEON_TYPE_LEAVE,
	eDOJO_DUNGEON_TYPE_INVALID
};

// Ʈ���� ������Ʈ ģ�е� Ÿ��
enum eTOBJ_FRIENDLY
{
	eTOBJ_FRIENDLY_PC,
	eTOBJ_FRIENDLY_NPC,
	eTOBJ_FRIENDLY_MOB,

	eTOBJ_FRIENDLY_MAX
};

enum eTOBJ_FRIENDLY_FLAG
{
	eTOBJ_FRIENDLY_FLAG_PC = 1 << eTOBJ_FRIENDLY_PC,
	eTOBJ_FRIENDLY_FLAG_NPC = 1 << eTOBJ_FRIENDLY_NPC,
	eTOBJ_FRIENDLY_FLAG_MOB = 1 << eTOBJ_FRIENDLY_MOB,
};

enum eREG_C_TIMING
{
	eREG_C_TIMING_MOB_CLICK,
	eREG_C_TIMING_NPC_CLICK,
	eREG_C_TIMING_OBJ_CLICK,
	eREG_C_TIMING_ENTER_RGN,
	eREG_C_TIMING_GET_QITEM,
	eREG_C_TIMING_QLISTWND_QTITLE_CLICK,
	eREG_C_TIMING_ACCEPT_QUEST,
	eREG_C_TIMING_SUCCESS_QUEST,
	eREG_C_TIMING_PRE_REWARD,
	eREG_C_TIMING_POST_REWARD,

	eREG_C_TIMING_MAX
};

enum eREG_C_TIMING_FLAG
{
	eREG_C_TIMING_MOB_CLICK_FLAG =				1 << eREG_C_TIMING_MOB_CLICK,
	eREG_C_TIMING_NPC_CLICK_FLAG =				1 << eREG_C_TIMING_NPC_CLICK,
	eREG_C_TIMING_OBJ_CLICK_FLAG =				1 << eREG_C_TIMING_OBJ_CLICK,
	eREG_C_TIMING_ENTER_RGN_FLAG =				1 << eREG_C_TIMING_ENTER_RGN,
	eREG_C_TIMING_GET_QITEM_FLAG =				1 << eREG_C_TIMING_GET_QITEM,
	eREG_C_TIMING_QLISTWND_QTITLE_CLICK_FLAG =	1 << eREG_C_TIMING_QLISTWND_QTITLE_CLICK,
	eREG_C_TIMING_ACCEPT_QUEST_FLAG =			1 << eREG_C_TIMING_ACCEPT_QUEST,
	eREG_C_TIMING_SUCCESS_QUEST_FLAG =			1 << eREG_C_TIMING_SUCCESS_QUEST,
	eREG_C_TIMING_PRE_REWARD_FLAG =				1 << eREG_C_TIMING_PRE_REWARD,
	eREG_C_TIMING_POST_REWARD_FLAG =			1 << eREG_C_TIMING_POST_REWARD,
};

struct sREG_C_TIMING_DATA_MOB_CLICK
{
	unsigned int		uiMobGroupIdx;
};

struct sREG_C_TIMING_DATA_NPC_CLICK
{
	unsigned int		uiNpcIdx;
};

struct sREG_C_TIMING_DATA_OBJ_CLICK
{
	unsigned int		uiWorldIdx;
	unsigned int		uiObjIdx;
};

struct sREG_C_TIMING_DATA_ENTER_RGN
{
	unsigned int		uiWorldIdx;
	float				fMinX, fMinZ;
	float				fMaxX, fMaxZ;
};

struct sREG_C_TIMING_DATA_GET_QITEM
{
	unsigned int		uiQItemIdx;
};

enum eREG_C_TIMING_EXCUTE_TYPE
{
	eREG_C_TIMING_EXCUTE_TYPE_MINI_NARRATION,

	eREG_C_TIMING_EXCUTE_TYPE_INVALID = 0xff
};

struct sREG_C_TIMING_EXCUTE_DATA_MINI_NARRATION
{
	unsigned int		uiTblIdx;
};

union uREG_C_TIMING_EXCUTE_DATA
{
	sREG_C_TIMING_EXCUTE_DATA_MINI_NARRATION	sMiniNarration;
};

//////////////////////////////////////////////////////////////////////////
//
//	��Ÿ
//
//////////////////////////////////////////////////////////////////////////

// GUI �� ��� �ϴ� �������� �ʿ��� Ÿ��
enum eQUEST_PROGRESS_TYPE
{
	eQUEST_PROGRESS_TYPE_NEW,
	eQUEST_PROGRESS_TYPE_PROGRESS,
	eQUEST_PROGRESS_TYPE_REWARD
};

// GUI �� ��� �ϴ� �������� �ʿ��� ����ü
struct sQUEST_INFO 
{
	sTS_KEY					sKey;
	bool					bVisitOP;				// Visit������ ����
	unsigned int			uiVisitTitle;			// Visit������ ����
	unsigned int			uiVisitDiag;			// Visit������ ����
	eQUEST_PROGRESS_TYPE	eProgType;
	DWORD					dwQuestTitle;
	DWORD					dwQuestStartDialog;
	unsigned int			uiNPCTblIdx;			// Quest search������ ����
	float					fXPos, fZPos;			// Quest search������ ����
};

typedef std::vector<sQUEST_INFO> vecdef_QUEST_INFO_LIST;

struct SGET_QUEST_INFO
{
	DWORD					dwType;
	vecdef_QUEST_INFO_LIST	QuestInfoList;
};

struct SSkillUseTargetInfo
{
	unsigned int			uiClassID;
	TBLIDX					tblIdx;
};

typedef std::vector< SSkillUseTargetInfo > vecdef_SkillTargetList;

struct SSkillUseInfo
{
	eEVENT_SKILL_TYPE		eSkillType;
	unsigned char			byRpBonusType;
	vecdef_SkillTargetList	defSkillTargetList;
};

struct SItemUseTargetInfo
{
	unsigned int			uiClassID;
	TBLIDX					tblIdx;
};

typedef std::vector< SItemUseTargetInfo > vecdef_ItemTargetList;

struct SScouterUseTargetInfo
{
	unsigned int			uiClassID;
	TBLIDX					tblIdx;

	void Clear( void )
	{
		uiClassID	= 0xffffffff;
		tblIdx		= 0xffffffff;
	}
};

struct SMobTargetInfo
{
	unsigned int			hTarget;

	void Clear( void )
	{
		hTarget		= 0xffffffff;
	}
};

struct sCOL_RGN_DATA
{
	enum eWORLD_CHANGE_TYPE
	{
		eWORLD_CHANGE_TYPE_ENTER,
		eWORLD_CHANGE_TYPE_LEAVE,
		eWORLD_CHANGE_TYPE_NO
	};

	eWORLD_CHANGE_TYPE		eWorldChangeType;
	unsigned int			uiWorldIdx;
	float					fBeginX, fBeginZ;
	float					fEndX, fEndZ;

	void Clear( void )
	{
		eWorldChangeType = eWORLD_CHANGE_TYPE_NO;
		uiWorldIdx = 0xffffffff;
		fBeginX = 3.402823466e+38F;
		fBeginZ = 3.402823466e+38F;
		fEndX = 3.402823466e+38F;
		fEndZ = 3.402823466e+38F;
	}
};

struct SRB_DATA
{
	eRB_COND_FLAG			eRBCondFlag;

	void Clear( void )
	{
		eRBCondFlag = eRB_COND_FLAG_INVALID;
	}
};


//////////////////////////////////////////////////////////////////////////
//
//	Entity id
//
//////////////////////////////////////////////////////////////////////////

// �̺�Ʈ ������Ʈ�� ���̵�
#define DBO_EVENT_TYPE_ID_CLICK_NPC				(NTL_TSENTITY_TYPE_EVENT_NEXT+0)
#define DBO_EVENT_TYPE_ID_CLICK_OBJECT			(NTL_TSENTITY_TYPE_EVENT_NEXT+1)
#define DBO_EVENT_TYPE_ID_COL_OBJECT			(NTL_TSENTITY_TYPE_EVENT_NEXT+2)
#define DBO_EVENT_TYPE_ID_ITEM_USE				(NTL_TSENTITY_TYPE_EVENT_NEXT+3)
#define DBO_EVENT_TYPE_ID_ITEM_GET				(NTL_TSENTITY_TYPE_EVENT_NEXT+4)
#define DBO_EVENT_TYPE_ID_ITEM_EQUIP			(NTL_TSENTITY_TYPE_EVENT_NEXT+5)
#define DBO_EVENT_TYPE_ID_SCOUT_USE				(NTL_TSENTITY_TYPE_EVENT_NEXT+6)
#define DBO_EVENT_TYPE_ID_RCV_SVR_EVT			(NTL_TSENTITY_TYPE_EVENT_NEXT+7)
#define DBO_EVENT_TYPE_ID_SKILL_USE				(NTL_TSENTITY_TYPE_EVENT_NEXT+8)
#define DBO_EVENT_TYPE_ID_COL_RGN				(NTL_TSENTITY_TYPE_EVENT_NEXT+9)
#define DBO_EVENT_TYPE_ID_RB					(NTL_TSENTITY_TYPE_EVENT_NEXT+10)
#define DBO_EVENT_TYPE_ID_CLICK_MOB				(NTL_TSENTITY_TYPE_EVENT_NEXT+11)
#define DBO_EVENT_TYPE_ID_BIND_STONE			(NTL_TSENTITY_TYPE_EVENT_NEXT+12)
#define DBO_EVENT_TYPE_ID_SEARCH_QUEST			(NTL_TSENTITY_TYPE_EVENT_NEXT+13)
#define DBO_EVENT_TYPE_ID_ITEM_UPGRADE			(NTL_TSENTITY_TYPE_EVENT_NEXT+14)
#define DBO_EVENT_TYPE_ID_TELEPORT				(NTL_TSENTITY_TYPE_EVENT_NEXT+15)
#define DBO_EVENT_TYPE_ID_BUDOKAI				(NTL_TSENTITY_TYPE_EVENT_NEXT+16)
#define DBO_EVENT_TYPE_ID_SLOTMACHINE			(NTL_TSENTITY_TYPE_EVENT_NEXT+17)
#define DBO_EVENT_TYPE_ID_HOIPOIMIX				(NTL_TSENTITY_TYPE_EVENT_NEXT+18)
#define DBO_EVENT_TYPE_ID_PRIVATESHOP			(NTL_TSENTITY_TYPE_EVENT_NEXT+19)
#define DBO_EVENT_TYPE_ID_FREEBATTLE			(NTL_TSENTITY_TYPE_EVENT_NEXT+20)
#define DBO_EVENT_TYPE_ID_ITEMIDENTITY			(NTL_TSENTITY_TYPE_EVENT_NEXT+21)
#define DBO_EVENT_TYPE_ID_USERMAIL				(NTL_TSENTITY_TYPE_EVENT_NEXT+22)
#define DBO_EVENT_TYPE_ID_PARTY					(NTL_TSENTITY_TYPE_EVENT_NEXT+23)
#define DBO_EVENT_TYPE_ID_DIALOG_OPEN			(NTL_TSENTITY_TYPE_EVENT_NEXT+24)


// ���� ������Ʈ�� ���̵�
#define DBO_COND_TYPE_ID_CHECK_LVL				(NTL_TSENTITY_TYPE_COND_NEXT+0)
#define DBO_COND_TYPE_ID_CHECK_PCCLS			(NTL_TSENTITY_TYPE_COND_NEXT+1)
#define DBO_COND_TYPE_ID_CHECK_PCRACE			(NTL_TSENTITY_TYPE_COND_NEXT+2)
#define DBO_COND_TYPE_ID_CHECK_QITEM			(NTL_TSENTITY_TYPE_COND_NEXT+3)
#define DBO_COND_TYPE_ID_CHECK_CLRQST			(NTL_TSENTITY_TYPE_COND_NEXT+4)
#define DBO_COND_TYPE_ID_CHECK_STOCEVT			(NTL_TSENTITY_TYPE_COND_NEXT+5)
#define DBO_COND_TYPE_ID_CHECK_ITEM				(NTL_TSENTITY_TYPE_COND_NEXT+6)
#define DBO_COND_TYPE_ID_CHECK_WITEM			(NTL_TSENTITY_TYPE_COND_NEXT+7)
#define DBO_COND_TYPE_ID_CHECK_SSM				(NTL_TSENTITY_TYPE_COND_NEXT+8)
#define DBO_COND_TYPE_ID_CHECK_OBJITEM			(NTL_TSENTITY_TYPE_COND_NEXT+9)
#define DBO_COND_TYPE_ID_CHECK_IN_NPC			(NTL_TSENTITY_TYPE_COND_NEXT+10)
#define DBO_COND_TYPE_ID_CHECK_OBJ_STATE		(NTL_TSENTITY_TYPE_COND_NEXT+11)
#define DBO_COND_TYPE_ID_CHECK_IN_WORLD			(NTL_TSENTITY_TYPE_COND_NEXT+12)
#define DBO_COND_TYPE_ID_CHECK_OPERATEOBJECT	(NTL_TSENTITY_TYPE_COND_NEXT+13)
#define DBO_COND_TYPE_ID_CHECK_HASCOUPON		(NTL_TSENTITY_TYPE_COND_NEXT+14)
#define DBO_COND_TYPE_ID_CHECK_NPCDEAD			(NTL_TSENTITY_TYPE_COND_NEXT+15)
#define DBO_COND_TYPE_ID_CHECK_DIST_WITH_NPC	(NTL_TSENTITY_TYPE_COND_NEXT+16)
#define DBO_COND_TYPE_ID_CHECK_STOC_DELIVERTY	(NTL_TSENTITY_TYPE_COND_NEXT+17)
#define DBO_COND_TYPE_ID_CHECK_ATTACH_OBJ		(NTL_TSENTITY_TYPE_COND_NEXT+18)
#define DBO_COND_TYPE_ID_CHECK_PROG_QUEST		(NTL_TSENTITY_TYPE_COND_NEXT+19)
#define DBO_COND_TYPE_ID_CHECK_REPUTATION		(NTL_TSENTITY_TYPE_COND_NEXT+20)
#define DBO_COND_TYPE_ID_CHECK_BUDOKAI_STATE	(NTL_TSENTITY_TYPE_COND_NEXT+21)
#define DBO_COND_TYPE_ID_CHECK_CUSTOMEVENT		(NTL_TSENTITY_TYPE_COND_NEXT+22)
#define DBO_COND_TYPE_ID_CHECK_AVATARDEAD		(NTL_TSENTITY_TYPE_COND_NEXT+23)
#define DBO_COND_TYPE_ID_CHECK_OUTRGN			(NTL_TSENTITY_TYPE_COND_NEXT+24)
#define DBO_COND_TYPE_ID_CLICK_SIDEICON			(NTL_TSENTITY_TYPE_COND_NEXT+25)
#define DBO_COND_TYPE_ID_LEVEL_CHECK			(NTL_TSENTITY_TYPE_COND_NEXT+26)
#define DBO_COND_TYPE_ID_QUEST					(NTL_TSENTITY_TYPE_COND_NEXT+27)


// �׼� ������Ʈ�� ���̵�
#define DBO_ACT_TYPE_ID_ACT_ITEM				(NTL_TSENTITY_TYPE_ACT_NEXT+0)
#define DBO_ACT_TYPE_ID_ACT_STOCEVT				(NTL_TSENTITY_TYPE_ACT_NEXT+1)
#define DBO_ACT_TYPE_ID_ACT_QITEM				(NTL_TSENTITY_TYPE_ACT_NEXT+2)
#define DBO_ACT_TYPE_ID_ACT_NPCCONV				(NTL_TSENTITY_TYPE_ACT_NEXT+3)
#define DBO_ACT_TYPE_ID_ACT_REGQINFO			(NTL_TSENTITY_TYPE_ACT_NEXT+4)
#define DBO_ACT_TYPE_ID_ACT_DIR					(NTL_TSENTITY_TYPE_ACT_NEXT+5)
#define DBO_ACT_TYPE_ID_ACT_OPCAM				(NTL_TSENTITY_TYPE_ACT_NEXT+6)
#define DBO_ACT_TYPE_ID_ACT_TWAITTS				(NTL_TSENTITY_TYPE_ACT_NEXT+7)
#define DBO_ACT_TYPE_ID_ACT_INSSM				(NTL_TSENTITY_TYPE_ACT_NEXT+8)
#define DBO_ACT_TYPE_ID_ACT_TSSTATE				(NTL_TSENTITY_TYPE_ACT_NEXT+9)
#define DBO_ACT_TYPE_ID_ACT_EXCEPT_TIMER_S		(NTL_TSENTITY_TYPE_ACT_NEXT+10)
#define DBO_ACT_TYPE_ID_ACT_EXCEPT_TIMER_E		(NTL_TSENTITY_TYPE_ACT_NEXT+11)
#define DBO_ACT_TYPE_ID_ACT_PORTAL				(NTL_TSENTITY_TYPE_ACT_NEXT+12)
#define DBO_ACT_TYPE_ID_ACT_OBJSTATE			(NTL_TSENTITY_TYPE_ACT_NEXT+13)
#define DBO_ACT_TYPE_ID_ACT_CONC_CHECK			(NTL_TSENTITY_TYPE_ACT_NEXT+14)
#define DBO_ACT_TYPE_ID_ACT_OBJCONV				(NTL_TSENTITY_TYPE_ACT_NEXT+15)
#define DBO_ACT_TYPE_ID_ACT_HINT				(NTL_TSENTITY_TYPE_ACT_NEXT+16)
#define DBO_ACT_TYPE_ID_ACT_SEND_SVR_EVT		(NTL_TSENTITY_TYPE_ACT_NEXT+17)
#define DBO_ACT_TYPE_ID_ACT_TMQ_STAGE			(NTL_TSENTITY_TYPE_ACT_NEXT+18)
#define DBO_ACT_TYPE_ID_ACT_OPEN_WINDOW			(NTL_TSENTITY_TYPE_ACT_NEXT+19)
#define DBO_ACT_TYPE_ID_ACT_TMQ_TIMEBONUS		(NTL_TSENTITY_TYPE_ACT_NEXT+20)
#define DBO_ACT_TYPE_ID_ACT_TELECAST			(NTL_TSENTITY_TYPE_ACT_NEXT+21)
#define DBO_ACT_TYPE_ID_ACT_DIRINDICATOR		(NTL_TSENTITY_TYPE_ACT_NEXT+22)
#define DBO_ACT_TYPE_ID_ACT_OPERATEOBJECT		(NTL_TSENTITY_TYPE_ACT_NEXT+23)
#define DBO_ACT_TYPE_ID_ACT_DROP				(NTL_TSENTITY_TYPE_ACT_NEXT+24)
#define DBO_ACT_TYPE_ID_ACT_RMV_COUPON			(NTL_TSENTITY_TYPE_ACT_NEXT+25)
#define DBO_ACT_TYPE_ID_ACT_ESCORT				(NTL_TSENTITY_TYPE_ACT_NEXT+26)
#define DBO_ACT_TYPE_ID_ACT_TMQINFOTYPE			(NTL_TSENTITY_TYPE_ACT_NEXT+27)
#define DBO_ACT_TYPE_ID_ACT_WORLDPLAYSCRIPT		(NTL_TSENTITY_TYPE_ACT_NEXT+28)
#define DBO_ACT_TYPE_ID_ACT_SWPROBSF			(NTL_TSENTITY_TYPE_ACT_NEXT+29)
#define DBO_ACT_TYPE_ID_ACT_PCCONV				(NTL_TSENTITY_TYPE_ACT_NEXT+30)
#define DBO_ACT_TYPE_ID_ACT_CUSTOMEVT			(NTL_TSENTITY_TYPE_ACT_NEXT+31)
#define DBO_ACT_TYPE_ID_ACT_TELMUDOSA			(NTL_TSENTITY_TYPE_ACT_NEXT+32)
#define DBO_ACT_TYPE_ID_ACT_TELMINORMATCH		(NTL_TSENTITY_TYPE_ACT_NEXT+33)
#define DBO_ACT_TYPE_ID_ACT_PIDGN				(NTL_TSENTITY_TYPE_ACT_NEXT+34)
#define DBO_ACT_TYPE_ID_ACT_TLQ					(NTL_TSENTITY_TYPE_ACT_NEXT+35)
#define DBO_ACT_TYPE_ID_ACT_DO_SKILL			(NTL_TSENTITY_TYPE_ACT_NEXT+36)
#define DBO_ACT_TYPE_ID_ACT_TOBJ_FRIENDLY		(NTL_TSENTITY_TYPE_ACT_NEXT+37)
#define DBO_ACT_TYPE_ID_ACT_BROAD_MSG			(NTL_TSENTITY_TYPE_ACT_NEXT+38)
#define DBO_ACT_TYPE_ID_ACT_MINI_NARRATION		(NTL_TSENTITY_TYPE_ACT_NEXT+39)
#define DBO_ACT_TYPE_ID_ACT_REG_C_TIMING		(NTL_TSENTITY_TYPE_ACT_NEXT+40)
#define DBO_ACT_TYPE_ID_ACT_EXC_C_GROUP			(NTL_TSENTITY_TYPE_ACT_NEXT+41)
#define DBO_ACT_TYPE_ID_ACT_SKIP_CONT			(NTL_TSENTITY_TYPE_ACT_NEXT+42)
#define DBO_ACT_TYPE_ID_ACT_OBJ_WPS				(NTL_TSENTITY_TYPE_ACT_NEXT+43)
#define DBO_ACT_TYPE_ID_ACT_DOJO				(NTL_TSENTITY_TYPE_ACT_NEXT+44)
#define DBO_ACT_TYPE_ID_ACT_OUTMSG				(NTL_TSENTITY_TYPE_ACT_NEXT+45)
#define DBO_ACT_TYPE_ID_ACT_WPSFD				(NTL_TSENTITY_TYPE_ACT_NEXT+46)
#define DBO_ACT_TYPE_ID_ACT_AVATAR_DEAD			(NTL_TSENTITY_TYPE_ACT_NEXT+47)
#define DBO_ACT_TYPE_ID_ACT_MAIL				(NTL_TSENTITY_TYPE_ACT_NEXT+48)
#define DBO_ACT_TYPE_ID_ACT_SKYDGN				(NTL_TSENTITY_TYPE_ACT_NEXT+49)


// �����̳� ������Ʈ�� ���̵�
#define DBO_CONT_TYPE_ID_CONT_GCOND				(NTL_TSENTITY_TYPE_CONT_NEXT+0)
#define DBO_CONT_TYPE_ID_CONT_START				(NTL_TSENTITY_TYPE_CONT_NEXT+1)
#define DBO_CONT_TYPE_ID_CONT_GACT				(NTL_TSENTITY_TYPE_CONT_NEXT+2)
#define DBO_CONT_TYPE_ID_CONT_REWARD			(NTL_TSENTITY_TYPE_CONT_NEXT+3)
#define DBO_CONT_TYPE_ID_CONT_END				(NTL_TSENTITY_TYPE_CONT_NEXT+4)
#define DBO_CONT_TYPE_ID_CONT_USERSEL			(NTL_TSENTITY_TYPE_CONT_NEXT+5)
#define DBO_CONT_TYPE_ID_CONT_NARRATION			(NTL_TSENTITY_TYPE_CONT_NEXT+6)
#define DBO_CONT_TYPE_ID_CONT_PROPOSAL			(NTL_TSENTITY_TYPE_CONT_NEXT+7)
#define DBO_CONT_TYPE_ID_CONT_SWITCH			(NTL_TSENTITY_TYPE_CONT_NEXT+8)
#define DBO_CONT_TYPE_ID_CONT_UNIFIED_NARRATION	(NTL_TSENTITY_TYPE_CONT_NEXT+9)


#endif