
#ifndef _LEGENDOFMIR2_PROTCOL
#define _LEGENDOFMIR2_PROTCOL

#define DEFBLOCKSIZE			22
#define DEFGUIDLEN				36
#define HUMANRCDBLOCKSIZE		1319//1879//256
#define HUMLOADRDCVLOCKSIZE		96//123
#define ITEMRCDBLOCKSIZE		114//167//180//70			// _TUSEITEM
#define MAGICRCDBLOCKSIZE		7//10
#define GENITEMRCDBLOCKSIZE		34//74//18
#define CHARUSEITEMCNT			10
#define MAKEITEMINDEX			36//12
/*MAP*/
#define _Mir2Map				0
#define _Mir3Map				1
#define CANWALK					1
#define CANFIRE					2
#define CANNOTWALK				256
#define CANNOTFIRE				255
#define DOOREVENT				0x02


#define HOWMANYMAGICS			31

#define USERITEMMAX				65

// For Login Process
#define CM_PROTOCOL				2000
#define CM_IDPASSWORD			2001
#define CM_ADDNEWUSER			2002
#define CM_CHANGEPASSWORD		2003
#define CM_UPDATEUSER			2004

#define CM_SELECTSERVER			2005

/*for .net client begin*/
#define CM_CLIENTVERSION		0
#define CM_LOGIN				5

#define SM_CONNECTED            0
#define SM_CLIENTVERSION		1
#define SM_LOGIN				7
#define SM_LOGIN_SUCCESS		9
#define SM_RE_ID_NOTFOUND		3
#define SM_RE_ID_WRONGPASS		4
/*
* 0: Disabled
* 1: Bad AccountID
* 2: Bad Password
* 3: Account Not Exist
* 4: Wrong Password
*/
/*for .net client end*/
#define SM_CERTIFICATION_FAIL	501
#define SM_ID_NOTFOUND			502
#define SM_PASSWD_FAIL			503
#define SM_NEWID_SUCCESS        504
#define SM_NEWID_FAIL           505
#define SM_CHANGEPASSWORD_OK	506
#define SM_LOGIN_BANNED			507
#define SM_PASSOK_SELECTSERVER	529
#define SM_SELECTSERVER_OK		530

// For Select Character Process
#define CM_QUERYCHR				100
#define CM_NEWCHR				101
#define CM_DELCHR				102
#define CM_SELCHR				103
#define CM_LOGOUT				104

/*.net client*/
#define CM_NEWCHRA				6
#define CM_DELCHRA				7
#define CM_START				8
//#define CM_TURN					10
//#define CM_WALK					11
//#define CM_RUN					12
//#define CM_CHAT					13
/*end*/
#define	SM_QUERYCHR				520
#define	SM_NEWCHR_SUCCESS		521
#define	SM_NEWCHR_FAIL			522
#define	SM_DELCHR_SUCCESS		523
#define	SM_DELCHR_FAIL			524
#define	SM_STARTPLAY			525
#define	SM_STARTFAIL			526
#define SM_QUERYCHR_FAIL		527

// For Game Gate
#define GM_OPEN					1
#define GM_CLOSE				2
#define	GM_CHECKSERVER			3			// Send check signal to Server
#define GM_CHECKCLIENT			4			// Send check signal to Client
#define GM_DATA					5
#define GM_SERVERUSERINDEX		6
#define GM_RECEIVE_OK			7
#define GM_CONNECTIONCLOSE		8
#define GM_TEST					20

// For game process
// Client To Server Commands
#define CM_QUERYUSERNAME        80
#define CM_QUERYBAGITEMS        81


#define CM_DROPITEM             1000
#define CM_PICKUP               1001
#define CM_TAKEONITEM			1003
#define CM_TAKEOFFITEM          1004
#define CM_BUTCH                1007
#define CM_MAGICKEYCHANGE		1008
#define CM_EAT                  1006
#define CM_TURN                 3010
#define CM_WALK                 3011
#define CM_SITDOWN              3012
#define CM_RUN                  3013
#define CM_HIT                  3014
#define CM_ATTACKMODE			3015
//#define CM_HEAVYHIT             3015
//#define CM_BIGHIT               3016
#define CM_SPELL                3017
//#define CM_POWERHIT             3018
//#define CM_LONGHIT              3019
//#define CM_WIDEHIT              3024
//#define CM_FIREHIT              3025
#define CM_SAY                  3030
#define CM_RIDE					3031

// Server to Client Commands
#define SM_RUSH					6
#define SM_FIREHIT              8
#define SM_BACKSTEP				9
#define SM_TURN					10
#define SM_WALK					11
#define SM_SITDOWN              12
#define SM_RUN					13
#define SM_HIT					14
#define SM_SPELL				17
#define SM_POWERHIT             18
#define SM_LONGHIT              19
#define SM_DIGUP                20
#define SM_DIGDOWN              21
#define SM_FLYAXE               22
#define SM_LIGHTING             23
#define SM_WIDEHIT              24
#define SM_HUMDISAPPEAR         29//30->29
#define SM_HUMSHOW				30//ADDED 2018.02.05
#define SM_STRUCK				31
#define SM_DEATH                32
#define SM_SKELETON             33
#define	SM_NOWDEATH             34

#define SM_HEAR					40
#define SM_FEATURECHANGED       41
#define SM_USERNAME             42
#define SM_WINEXP               44
#define SM_LEVELUP              45
#define SM_DAYCHANGING          46
#define SM_LOGON				50
#define SM_NEWMAP               51
#define SM_ABILITY				52
#define SM_HEALTHSPELLCHANGED   53
#define SM_MAPDESCRIPTION       54
#define SM_SPELL2               117

#define SM_SYSMESSAGE           100
#define SM_GROUPMESSAGE         101
#define SM_CRY                  102
#define SM_WHISPER              103
#define SM_GUILDMESSAGE         104

#define SM_ADDITEM				200
#define SM_BAGITEMS				201
#define SM_ADDMAGIC             210
#define SM_SENDMYMAGIC			211

#define SM_DROPITEM				600
//#define SM_DROPITEM_FAIL        601

#define SM_ITEMSHOW             610
#define SM_ITEMHIDE             611
#define SM_DOOROPEN				612
#define SM_TAKEON_OK            615
#define SM_TAKEON_FAIL          616
#define SM_TAKEOFF_OK           619
#define SM_TAKEOFF_FAIL         620
#define SM_SENDUSEITEMS         621
#define SM_WEIGHTCHANGED        622
#define SM_CLEAROBJECTS         633
#define SM_CHANGEMAP            634
#define SM_EAT_OK               635
#define SM_EAT_FAIL             636
#define SM_BUTCH                637
#define SM_MAGICFIRE			638
#define SM_MAGIC_LVEXP          640
#define SM_DURACHANGE           642
#define SM_MERCHANTSAY          643
#define SM_GOLDCHANGED          653
#define SM_CHANGELIGHT          654
#define SM_CHANGENAMECOLOR      656
#define SM_CHARSTATUSCHANGED	657
#define SM_ATTACKMODE			658

#define SM_SUBABILITY           752

#define SM_SHOWEVENT            804
#define SM_HIDEEVENT            805

#define SM_OPENHEALTH           1100
#define SM_CLOSEHEALTH          1101
#define SM_CHANGEFACE           1104

#define SM_ITEMUPDATE			1500
#define SM_MONSTERSAY			1501

// Server to Server Commands
#define RM_TURN					10001
#define RM_WALK					10002
#define RM_RUN					10003
#define RM_HIT					10004
#define RM_SPELL				10007
#define RM_SPELL2				10008
#define RM_POWERHIT             10009
#define RM_LONGHIT              10011
#define RM_WIDEHIT              10012
#define RM_PUSH					10013
#define RM_FIREHIT              10014
#define RM_RUSH					10015
#define RM_STRUCK				10020
#define RM_DEATH                10021
#define RM_HUMDISAPPEAR			10022
#define RM_HUMSHOW				10023//2018.02.05 SHOW HUM OBJECT
#define RM_MAGSTRUCK            10025
#define RM_STRUCK_MAG           10027
#define RM_MAGSTRUCK_MINE       10028
#define RM_MAGHEALING           10026
#define RM_HEAR					10030
#define RM_WHISPER              10031
#define RM_CRY                  10032
#define RM_RIDE					10033
#define RM_WINEXP               10044
#define RM_USERNAME				10043
#define RM_LEVELUP				10045
#define RM_CHANGENAMECOLOR      10046
#define	RM_ATTACKMODE			10047

#define RM_LOGON				10050
#define RM_ABILITY				10051
#define RM_HEALTHSPELLCHANGED   10052
#define RM_DAYCHANGING          10053

#define RM_SYSMESSAGE			10100
#define RM_GROUPMESSAGE         10102
#define RM_SYSMESSAGE2			10103
#define RM_GUILDMESSAGE         10104
#define RM_HINTMESSAGE          10105
#define RM_ITEMSHOW             10110
#define RM_ITEMHIDE             10111
#define RM_DOOROPEN				10112
#define RM_SENDUSEITEMS         10114
#define RM_WEIGHTCHANGED        10115
#define RM_FEATURECHANGED       10116
#define RM_CLEAROBJECTS         10117
#define RM_CHANGEMAP            10118
#define RM_BUTCH                10119
#define RM_MAGICFIRE            10120
#define RM_SENDMYMAGIC			10122
#define RM_MAGIC_LVEXP          10123
#define RM_SKELETON             10024
#define RM_DURACHANGE           10125
#define RM_MERCHANTSAY          10126
#define RM_GOLDCHANGED          10136
#define RM_CHANGELIGHT          10137
#define RM_CHARSTATUSCHANGED	10139
#define RM_DELAYMAGIC			10154

#define RM_DIGUP                10200
#define RM_DIGDOWN              10201
#define RM_FLYAXE               10202
#define RM_LIGHTING             10204

#define RM_SUBABILITY           10302
#define RM_TRANSPARENT          10308

#define RM_SPACEMOVE_SHOW       10331
#define RM_HIDEEVENT            10333
#define RM_SHOWEVENT            10334
#define RM_ZEN_BEE				10337

#define RM_OPENHEALTH           10410
#define RM_CLOSEHEALTH          10411
#define RM_DOOPENHEALTH         10412
#define RM_CHANGEFACE           10415

#define RM_ITEMUPDATE			11000
#define RM_MONSTERSAY			11001
#define RM_MAKESLAVE			11002

// For DB Server
#define DB_LOADHUMANRCD			100
#define DB_SAVEHUMANRCD			101
#define DB_MAKEITEMRCD			150
#define DB_ITEMTHROW			151
#define DB_MAKEITEMRCD2			152

#define DBR_LOADHUMANRCD		1100
#define DBR_LOADHUMANRCD2		1101
#define DBR_MAKEITEMRCD			1500
#define DBR_MAKEITEMRCD2		1501

#define DBR_FAIL				2000

typedef struct tag_TMESSAGEBODYWL
{
	LONG	lParam1;
	LONG	lParam2;
	LONG	nTag1;
	LONG	nTag2;
} _TMESSAGEBODYWL, _LPTMESSAGEBODYWL;

typedef struct tag_TSHORTMSSEAGE
{
	WORD	wIdent;
	WORD	wMsg;
} _TSHORTMSSEAGE, *_LPTSHORTMSSEAGE;

typedef struct tag_TCHARDESC
{
	LONG	Feature;
	LONG	Status;
} _TCHARDESC, *_LPTCHARDESC;

typedef struct tag_TDEFUSERINFO
{
	TCHAR		szLoginID[10];
	TCHAR		szPassword[10];
	TCHAR		szUserName[20];
} _TDEFUSERINFO, *_LPTUDEFUSERINFO;

typedef struct tag_TADDUSERINFO1
{
	TCHAR		szZipCode[15];
	TCHAR		szAddress1[21];
	TCHAR		szAddress2[21];
	TCHAR		szSSNo[15];
	TCHAR		szPhone[14];
	TCHAR		szQuiz[20];
	TCHAR		szAnswer[12];
	TCHAR		szEmail[40];
	TCHAR		szQuiz2[20];
	TCHAR		szAnswer2[12];
	TCHAR		szBirthDay[11];
	TCHAR		szMobilePhone[15];
} _TADDUSERINFO1, *_LPTADDUSERINFO;

typedef struct tag_TUSERENTRYINFO
{
	_TDEFUSERINFO	tDefUserInfo;
	_TADDUSERINFO1	tAddUserInfo;
} _TUSERENTRYINFO, *_LPTUSERENTRYINFO;

typedef struct tag_AUSERENTRYINFO
{
	char		szLoginID[10];
	char		szPassword[10];
	char		szUserName[20];
	
	char		szZipCode[15];
	char		szAddress1[21];
	char		szAddress2[21];
	char		szSSNo[15];
	char		szPhone[14];
	char		szQuiz[20];
	char		szAnswer[12];
	char		szEmail[40];
	char		szQuiz2[20];
	char		szAnswer2[12];
	char		szBirthDay[11];
	char		szMobilePhone[15];
} _AUSERENTRYINFO, *_LPAUSERENTRYINFO;

typedef struct tag_TLOADMUHAN
{
	char		szUserID[16];
	char		szCharName[20];
	char		szUserAddr[15];
	byte		btCharIndex;
	GUID		szCharGuid;//[DEFGUIDLEN];
	int			nCertification;
} _TLOADHUMAN, *_LPTLOADHUMAN;

#define U_DRESS				0
#define U_WEAPON			1
#define U_RIGHTHAND			2
#define U_NECKLACE			3
#define U_HELMET			4
#define U_ARMRINGL			5
#define U_ARMRINGR			6                   
#define U_RINGL				7
#define U_RINGR				8

#pragma pack(1)
#pragma region SERVER ITEM MEMERY STRUCT

typedef struct tag_USERGENITEMRCD
{
	GUID		szMakeIndex;// [MAKEITEMINDEX];// EASY TO SKIP MAKEINDEX
	BYTE		btType;
	WORD		nStdIndex;
	WORD		wDura;
	WORD		wDuraMax;
	WORD		wCount;
} _TUSERGENITEMRCD, *_LPTUSERGENITEMRCD;

typedef struct tag_TUSERITEMRCD:tag_USERGENITEMRCD
{
	BYTE		btValue[22];
	GUID		szBoundGuid;// [DEFGUIDLEN];
	char		sbtValue[2];
	char		szPrefixName[20];
} _TUSERITEMRCD, *_LPTUSERITEMRCD;

typedef struct tag_TMAKEITEMRCD
{
	char		szStdType;
	int			nStdIndex;
	WORD		nDura;
	WORD		nDuraMax;
	BYTE		btValue[22];
} _TMAKEITEMRCD, *_LPTMAKEITEMRCD;


typedef struct tag_TUSEITEM
{
	BYTE				btIsEmpty;
	_TUSERITEMRCD		tUserItemAbility;
	CStdItemSpecial		*lptStdItem;
} _TUSEITEM, *_LPTUSEITEM;
#pragma endregion


//typedef struct tag_TGENITEMRCD
//{
//	char		szItem[13];
//} _TGENITEMRCD, *_LPTGENITEMRCD;
#pragma region CLIENT ITEM MEMERY STRUCT

typedef struct tag_TCLIENTGENITEMRCD
{
	//append
	GUID		szMakeIndex; //[MAKEITEMINDEX];
	WORD		wCurDura;
	WORD		wCurDuraMax;
	WORD		wCount;

	//STD 
	BYTE		btType;
	BYTE		btAniCount;
	WORD		Index;
	char		szName[20];

	WORD		wStdMode;
	WORD		wShape;
	WORD		wWeight;
	WORD		wDuraMax;		// Val1
	DWORD		dwLooks;
	DWORD		wRSource;		// Val2

	DWORD		dwPrice;
	DWORD		dwStock;		//MaxStock

} _TCLIENTGENITEMRCD, *_LPTCLIENTGENITEMRCD;

typedef struct tag_TCUSERITEMRCD 
{
	BYTE		btValue[22];
	GUID		szBoundGuid;//[DEFGUIDLEN];
	char		sbtValue[2];
	char		szPrefixName[20];
} _TCUSERITEMRCD, *_LPTCUSERITEMRCD;

typedef struct tag_TCLIENTITEMRCD :tag_TCLIENTGENITEMRCD//tag_TUSERITEMRCD
{
	WORD		HP;
	WORD		MP;
	BYTE		AttackSpeed;
	BYTE		Luck;

	BYTE		wAC;				// Defence
	BYTE		wAC2;				// Defence Max
	BYTE		wMAC;				// Magic Defence
	BYTE		wMAC2;				// Magic Defence Max
	BYTE		wDC;				// Attack
	BYTE		wDC2;				// Attack Max
	BYTE		wMC;				// Magic
	BYTE		wMC2;				// Magic Max
	BYTE		wSC;				//
	BYTE		wSC2;				// Max

	BYTE		m_btWater;
	BYTE		m_btWater2;
	BYTE		m_btFire;
	BYTE		m_btFire2;
	BYTE		m_btWind;
	BYTE		m_btWind2;
	BYTE		m_btLight;
	BYTE		m_btLight2;
	BYTE		m_btEarth;
	BYTE		m_btEarth2;

	WORD		wNeed;
	WORD		wNeedLevel;

	DWORD		dwFeature;
	//char		szPrefixName[20];
	_TCUSERITEMRCD		tCUserItemAbility;
} _TCLIENTITEMRCD, *_LPTCLIENTITEMRCD;

#pragma endregion

typedef struct tag_THUMANRCD
{
	char		szUserID[16];
	char		szCharName[20];
	GUID		szCharGuid;// [MAKEITEMINDEX];

	BYTE		btIndex;
	BYTE		btJob;
	BYTE		btGender;
	_TUSEITEM	szTakeItem[CHARUSEITEMCNT];
	BYTE		szLevel;
	BYTE		szHair;
	BYTE		nDirection;
	char		szMapName[15];

	BYTE		btAttackMode;
	BYTE		fIsAdmin;

	short		nCX;
	short		nCY;

	DWORD		dwGold;

	WORD		wHairColor;

	int			nExp;
} _THUMANRCD, *_LPTHUMANRCD;
typedef struct tag_TQUERYCHR
{
	BYTE		btIndex;
	USHORT		btLevel;
	BYTE		btClass;
	BYTE		btGender;
	DATE		dateLastAccessTime;
	char		szName[20];
} _TQUERYCHR,*_LPTQUERYCHR;

typedef struct tag_TCREATECHR 
{
	BYTE		btIndex;
	BYTE		btClass;
	BYTE		btGender;
	char		szName[20];
	char		szID[20];
} _TCREATECHR, *_LPTCREATECHR;
typedef struct tag_TDELCHR 
{
	BYTE		btIndex;
	char		szID[20];
} _TDELCHR, *_LPTDELCHR;

typedef struct tag_THORSERCD
{
	char		szHorseIndex[12];
	BYTE		btHorseType;
} _THORSERCD, *_LPTHORSERCD;

typedef struct tag_THUMANMAGICRCD
{
	BYTE		btMagicID;
	char		btLevel;
	char		btUseKey;
	USHORT			nCurrTrain;
} _THUMANMAGICRCD, *_LPTHUMANMAGICRCD;

typedef struct tag_TSTANDARDMAGIC
{
	BYTE	btEffectType;
	BYTE	btEffect;
	short	sSpell;
	BYTE	btDefSpell;

	short	sBaseCost;
	short	sLevCost;
	BYTE	btIcon;
	
	USHORT	sNeed[3];
	USHORT	sTrain[3];
	
	int		nDelayTime;

	BYTE	sRange;
	int		nCastTime;

} _TSTANDARDMAGIC, *_LPTSTANDARDMAGIC;

typedef struct tag_TCLIENTMAGICRCD
{
	BYTE			btMagicID;
	char			btLevel;
	char			btUseKey;
	USHORT			nCurrTrain;

	_TSTANDARDMAGIC	tStdMagic;
} _TCLIENTMAGICRCD, *_LPTCLIENTMAGICRCD;


#pragma pack(8)

#endif
