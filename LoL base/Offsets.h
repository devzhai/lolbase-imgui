#pragma once
#define TARGET_GAMEVERSION "Version 10.24.345.8390 [PUBLIC]"  // 
 
#define oRetAddr 0x6E502
#define oDrawCircleRetAddr 0x6E4FF 
#define oNetClient 0x350E414
#define oPingInstance 0x350E414
#define oChatClientPtr 0x1C67F30 
#define oObjManager 0x1C6A530
#define oZoomClass 0x34FF1CC
#define oGameInfo 0x350034C
#define oHudInstance 0x1C6A568
#define oRenderer 0x352FD44
#define oUnderMouseObject 0x1C0A160
#define oD3DRenderer 0x350034C
#define oLocalPlayer 0x3507098
#define oGameTime 0x34FF228 
#define oMenuGUI 0x3506B80
 
// FUNCTIONS
#define oOnprocessSpell 0x50F360
#define oGetNextObject 0x28FBD0
#define oGameVersion 0x560B20
#define oGetFirstObject 0x28E9B0
#define oWorldToScreen 0x977970
#define oCastSpell 0x50D5B0
#define oDrawCircle 0x51D940
#define oGetBasicAttack 0x169320 
#define oGetAttackCastDelay 0x2A1D50
#define oGetAttackDelay 0x2A1E50
#define oGetPing 0x334E60
#define oGetSpellState 0x4FD180
#define oIsTargetable 0x1D5A30
#define oIsAlive 0x1A05B0
#define oIsBaron 0x1762D0
#define oIsTurret 0x1AF480
#define oIsInhib 0x1AF090
#define oIsHero 0x1AF210
#define oIsMinion 0x1AF250
#define oIsDragon 0x1744F0
#define oIsMissile 0x1AF270
#define oIsNexus 0x1AF190
#define oIsNotWall 0x8F4390
#define oIsTroy 0x1AF110 
#define oIssueOrder 0x176380
#define oPrintChat 0x5A8310 
#define oSendChat 0x5EBF60
#define oGetTimerExpiry 0x12E330 
#define oHealthBarPosition 0x5938A0 
#define oBaseDrawPosition 0x16B5C0 
 
//functions - skinChanger
#define translateString_UNSAFE_DONOTUSE 0xAA96E0
#define CharacterDataStack__Push 0x1147B0 
#define CharacterDataStack__Update 0x10AD20
#define GetOwnerObject 0x16B040 
#define CharacterData__GetCharacterPackage 0x237820
#define GetAiManager 0x16DB60 
#define SetBaseCharacterData 0x19AD30 
#define IsLaneMinion 0x3788
 
//ai_base  - skinChanger
#define CharacterDataStack 0x2F40
#define SkinId 0xE9C

//global - skinChanger
#define ChampionManager 0x3500338
#define ManagerTemplate_AIMinionClient_ 0x28B6B48
#define ManagerTemplate_AIHero_ 0x1C6848C 

//events
#define OnCreateObject 0x295830
#define OnDeleteObject 0x11D1BD5 
 
//CObject
#define oObjIndex 0x20
#define oObjTeam 0x4C
#define oObjName 0x6C
#define oObjNetworkID 0xCC
#define oObjPos 0x1D8
#define oObjVisibility 0x270
#define oObjHealth 0xD98
#define oObjMana 0x298
#define oObjMaxMana 0x2A8
#define oObjArmor 0x1278
#define oObjMagicRes 0x1280
#define oObjBonusMagicRes 0x1284
#define oObjBaseAtk 0x1250
#define oObjBonusAtk 0x11D0
#define oObjMoveSpeed 0x1290
#define oObjAtkRange 0x1298
#define oObjBuffMgr 0x213C
#define oObjSpellBook 0x26E8
#define oObjChampionName 0x2F4C
#define oObjLevel 0x369C
#define oObjSourceIndex 0x290
#define oObjPerk1 0x3888 
#define oObjPerk2 0x2C8
#define oInhiRemainingRespawnTime 0xFF4

//ObjectManager
#define objectArray 0x14
 
//MissileInfo
#define oMissileSpellInfo 0x230
#define oMissileTargetIndex 0x2E8
#define oMissileStartPos 0x2A8
#define oMissileEndPos 0x2B4
 
 
//Buff
#define O_BUFFMGR_BUFFNAME 0x08
#define O_BUFFMGR_STARTTIME 0xC
#define O_BUFFMGR_ENDTIME 0x10
#define O_BUFFMGR_flBUFFCOUNT 0x130 
#define O_BUFFMGR_iBUFFCOUNT 0x74 
#define oBuffType 0x4
#define oBuffCountAlt 0x24
#define oBuffCountAlt2 0x20
 
//Zoom
#define oMaxZoom 0x28
 
//oSpellSlot
#define oSpellSlotRemainingCharge 0x58
#define oSpellSlotLevel 0x20
#define oSpellSlotRemainingRechargeCD 0x64
#define oSpellSlotTime 0x28
#define oSpellSlotCD 0x18
#define oSpellSlotDamage 0x90
#define oSpellSlotSpellInfo 0x134
#define oSpellSlotRemainingCD 0x28
 
//oSpellInfoSpellData
#define oSpellInfoSpellData 0x44
 
//SpellData
#define oSpellDataMissileName 0x0058
#define oSpellDataSpellName 0x007C
#define oSpellDataSpellName2 0x007C
#define oSpellDataDescription 0x0088
#define oSpellDataEffectAmount 0xD0
#define oSpellDataIncreaseDamage 0xEC
#define oSpellDataSpellDuration 0x108
#define oSpellDataRootDuration 0x15C
#define oSpellDataIncreaseDamageBonus 0x178
#define oSpellDataCoefficient 0x200
#define oSpellDataCoefficient2 0x204
#define oSpellDataMaxHighlightTargets 0x208
#define oSpellDataCooldownTime 0x280
#define oSpellDataDelayCastOffsetPercent 0x29C
#define oSpellDataDelayTotalTimePercent 0x2A0
#define oSpellDataMaxAmmo 0x31C
#define oSpellDataAmmoUsed 0x338
#define oSpellDataAmmoRechargetime 0x354
#define oSpellDataMissileSpeed 0x450
#define oSpellDataSpellWidth 0x458
#define oSpellDataSpellRange 0x3D0
#define oSpellDataEffectSpellRange 0x10C
#define oSpellDataEffectSpellRangeAfterEffect 0xB8
 
//champion_manager
#define oChampionManagerChampionList 0xC
#define oChampionCount 152
#define oGetChampionSkins 0x58
#define oGetChampionName 0x4
