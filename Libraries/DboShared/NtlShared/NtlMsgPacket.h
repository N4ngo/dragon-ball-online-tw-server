#pragma once

// AccountServer 0~99
// CharacterServer 100~199
// ChattingServer 200~299
// GameServer 300~

enum __ReturnMsg
{
	Account_SUCCESS = 0,
	Account_FAIL,			//All of Errors 
	Account_PASSWDNOTMATCHED,
	Account_DUALCONNECT,
	Account_ALREADYEXISTID,
	Account_PASSWDNULL,		//
	Account_TOO_LONG_ACCOUNT,
	Account_TOO_LONG_PASSWORD,
	Account_VERSION_MISMATCHED,
	Character_SUCCESS = 100,
	Character_FAIL = 101,
	Character_DUPLICATECHARACTER,
	Character_COUNTOVERCHARACTER,
	Character_NOT_AUTHENTICATED,
	Character_ALREADY_IN_GAME_SERVER,
	Character_ALREADY_IN_CHAT_SERVER,
	Character_TOO_LONG_NAME,
	Chatting_SUCCESS = 200,
	Chatting_FAIL,
	Chatting_RECEIVERNOTFOUND,
	Chatting_VALIDAUTHKEYFAIL,
	Game_SUCCESS = 300,
	Game_FAIL,
	Game_ENTER_GAME_ALREADY_IN_GAME,
	Game_ENTER_GAME_WRONG_AUTHENTICATION_KEY,
	Game_ENTER_GAME_NO_CHARACTER_FOUND,
	Game_ENTER_GAME_WRONG_CHARACTER_POSITION,
	Game_NO_SUCH_AN_ITEM,
	Game_TRIED_TO_EQUIP_WRONG_ITEM,
	Game_TRIED_TO_EQUIP_ITEM_INTO_WRONG_SLOT,
	Game_TRIED_TO_TAKE_OFF_ITEM_FROM_WRONG_SLOT,
	Game_TRIED_TO_TAKE_OFF_WRONG_ITEM,
	Game_NO_SPACE_TO_HOLD_ITEM_TAKEN_OFF,
	Game_WRONG_DESTINATION_IN_INVENTORY,
	Game_CAPSULE_CANT_BE_PUT_INTO_CAPSULE,
	Game_ONLY_CAPSULE_CAN_BE_PUT_THERE
};