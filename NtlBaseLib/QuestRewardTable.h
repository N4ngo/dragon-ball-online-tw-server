#pragma once

#include "Table.h"

const int QUEST_REWARD_DEF_MAX_CNT = 4;			/* DboTSCoreDefine.h => MAX_DEFAULT_REWARD */
const int QUEST_REWARD_SEL_MAX_CNT = 4;			/* DboTSCoreDefine.h => MAX_SELECTION_REWARD */

#pragma pack(push, 4)
struct sQUEST_REWARD_DATASET
{
	DWORD  Item;
	DWORD  Amount;
	BYTE   unk;
	BYTE   Padding[3];
};

struct sQUEST_REWARD_TBLDAT : public sTBLDAT
{
public:	
	DWORD  EXP;
	DWORD  Zenny;
	BYTE   Count;
	BYTE   Padding[3];
	sQUEST_REWARD_DATASET  unk2[7];//Item Need look When quest Working
	DWORD   shit[2];
protected:

	virtual int GetDataSize()
	{
		return sizeof(*this) - sizeof(void*);
	}
};
#pragma pack(pop)



class QuestRewardTable : public Table
{
public:
	QuestRewardTable(void);
	virtual ~QuestRewardTable(void);

	bool Create(DWORD dwCodePage);
	void Destroy();

	sTBLDAT* FindData(TBLIDX tblidx);

	virtual bool LoadFromBinary(Serializer& serializer, bool bReload);
	virtual bool SaveToBinary(Serializer& serializer);

protected:
	void Init();

	WCHAR** GetSheetListInWChar() { return &(QuestRewardTable::m_pwszSheetList[0]); }
	void* AllocNewTable(WCHAR* pwszSheetName, DWORD dwCodePage);
	bool DeallocNewTable(void* pvTable, WCHAR* pwszSheetName);
	bool AddTable(void * pvTable, bool bReload);
	bool SetTableData(void* pvTable, WCHAR* pwszSheetName, std::wstring* pstrDataName, BSTR bstrData);

private:
	static WCHAR* m_pwszSheetList[];
};

