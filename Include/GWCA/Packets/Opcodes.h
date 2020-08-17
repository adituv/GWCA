#pragma once

#define GAME_CMSG_TRADE_ACKNOWLEDGE                 (0x0000) // 0
#define GAME_CMSG_TRADE_CANCEL                      (0x0001) // 1
#define GAME_CMSG_TRADE_ADD_ITEM                    (0x0002) // 2
#define GAME_CMSG_TRADE_SEND_OFFER                  (0x0003) // 3
#define GAME_CMSG_TRADE_REMOVE_ITEM                 (0x0005) // 5
#define GAME_CMSG_TRADE_CANCEL_OFFER                (0x0006) // 6
#define GAME_CMSG_TRADE_ACCEPT                      (0x0007) // 7
#define GAME_CMSG_DISCONNECT                        (0x0009) // 9
#define GAME_CMSG_PING_REPLY                        (0x000B) // 11
#define GAME_CMSG_HEARTBEAT                         (0x000C) // 12
#define GAME_CMSG_PING_REQUEST                      (0x000D) // 13
#define GAME_CMSG_ATTRIBUTE_DECREASE                (0x000E) // 14
#define GAME_CMSG_ATTRIBUTE_INCREASE                (0x0010) // 16
#define GAME_CMSG_ATTRIBUTE_LOAD                    (0x0011) // 17
#define GAME_CMSG_QUEST_ABANDON                     (0x0012) // 18
#define GAME_CMSG_QUEST_REQUEST_INFOS               (0x0013) // 19
#define GAME_CMSG_HERO_BEHAVIOR                     (0x0017) // 23
#define GAME_CMSG_HERO_LOCK_TARGET                  (0x0018) // 24
#define GAME_CMSG_HERO_SKILL_TOGGLE                 (0x001B) // 27
#define GAME_CMSG_HERO_FLAG_SINGLE                  (0x001D) // 29
#define GAME_CMSG_HERO_FLAG_ALL                     (0x001E) // 30
#define GAME_CMSG_HERO_USE_SKILL                    (0x001F) // 31
#define GAME_CMSG_HERO_ADD                          (0x0021) // 33
#define GAME_CMSG_HERO_KICK                         (0x0022) // 34
#define GAME_CMSG_TARGET_CALL                       (0x0026) // 38
#define GAME_CMSG_PING_WEAPON_SET                   (0x002C) // 44
#define GAME_CMSG_ATTACK_AGENT                      (0x002D) // 45
#define GAME_CMSG_CANCEL_MOVEMENT                   (0x002F) // 47
#define GAME_CMSG_DROP_BUFF                         (0x0030) // 48
#define GAME_CMSG_DRAW_MAP                          (0x0032) // 50
#define GAME_CMSG_DROP_ITEM                         (0x0033) // 51
#define GAME_CMSG_DROP_GOLD                         (0x0036) // 54
#define GAME_CMSG_EQUIP_ITEM                        (0x0037) // 55
#define GAME_CMSG_INTERACT_PLAYER                   (0x003A) // 58
#define GAME_CMSG_DEPOSIT_FACTION                   (0x003C) // 60
#define GAME_CMSG_INTERACT_LIVING                   (0x0040) // 64
#define GAME_CMSG_SEND_DIALOG                       (0x0042) // 66
#define GAME_CMSG_MOVE_TO_COORD                     (0x0045) // 69
#define GAME_CMSG_INTERACT_ITEM                     (0x0046) // 70
#define GAME_CMSG_ROTATE_PLAYER                     (0x0047) // 71
#define GAME_CMSG_CHANGE_SECOND_PROFESSION          (0x0048) // 72
#define GAME_CMSG_USE_SKILL                         (0x004D) // 77
#define GAME_CMSG_TRADE_INITIATE                    (0x0050) // 80
#define GAME_CMSG_BUY_MATERIALS                     (0x0051) // 81
#define GAME_CMSG_REQUEST_QUOTE                     (0x0053) // 83
#define GAME_CMSG_TRANSACT_ITEMS                    (0x0054) // 84
#define GAME_CMSG_UNEQUIP_ITEM                      (0x0056) // 86
#define GAME_CMSG_INTERACT_GADGET                   (0x0058) // 88
#define GAME_CMSG_OPEN_CHEST                        (0x005A) // 90
#define GAME_CMSG_TITLE_DISPLAY                     (0x005F) // 95
#define GAME_CMSG_TITLE_HIDE                        (0x0060) // 96
#define GAME_CMSG_SKILLBAR_SKILL_SET                (0x0063) // 99
#define GAME_CMSG_SKILLBAR_LOAD                     (0x0064) // 100
#define GAME_CMSG_SKILLBAR_SKILL_REPLACE            (0x0065) // 101
#define GAME_CMSG_SKIP_CINEMATIC                    (0x006A) // 106
#define GAME_CMSG_SEND_CHAT_MESSAGE                 (0x006B) // 107
#define GAME_CMSG_ITEM_DESTROY                      (0x0070) // 112
#define GAME_CMSG_ITEM_IDENTIFY                     (0x0073) // 115
#define GAME_CMSG_TOME_UNLOCK_SKILL                 (0x0074) // 116
#define GAME_CMSG_ITEM_MOVE                         (0x0079) // 121
#define GAME_CMSG_ITEM_ACCEPT_ALL                   (0x007A) // 122
#define GAME_CMSG_ITEM_SPLIT_STACK                  (0x007C) // 124
#define GAME_CMSG_ITEM_SALVAGE_SESSION_OPEN         (0x007E) // 126
#define GAME_CMSG_ITEM_SALVAGE_SESSION_CANCEL       (0x007F) // 127
#define GAME_CMSG_ITEM_SALVAGE_SESSION_DONE         (0x0080) // 128
#define GAME_CMSG_ITEM_SALVAGE_MATERIALS            (0x0081) // 129
#define GAME_CMSG_ITEM_SALVAGE_UPGRADE              (0x0082) // 130
#define GAME_CMSG_ITEM_CHANGE_GOLD                  (0x0083) // 131
#define GAME_CMSG_ITEM_USE                          (0x0085) // 133
#define GAME_CMSG_INSTANCE_LOAD_REQUEST_SPAWN       (0x008F) // 143
#define GAME_CMSG_INSTANCE_LOAD_REQUEST_PLAYERS     (0x0098) // 152
#define GAME_CMSG_INSTANCE_LOAD_REQUEST_ITEMS       (0x0099) // 153
#define GAME_CMSG_PARTY_SET_DIFFICULTY              (0x00A3) // 163
#define GAME_CMSG_PARTY_ACCEPT_INVITE               (0x00A4) // 164
#define GAME_CMSG_PARTY_ACCEPT_CANCEL               (0x00A5) // 165
#define GAME_CMSG_PARTY_ACCEPT_REFUSE               (0x00A6) // 166
#define GAME_CMSG_PARTY_INVITE_NPC                  (0x00A7) // 167
#define GAME_CMSG_PARTY_INVITE_PLAYER               (0x00A8) // 168
#define GAME_CMSG_PARTY_INVITE_PLAYER_NAME          (0x00A9) // 169
#define GAME_CMSG_PARTY_LEAVE_GROUP                 (0x00AA) // 170
#define GAME_CMSG_PARTY_CANCEL_ENTER_CHALLENGE      (0x00AB) // 171
#define GAME_CMSG_PARTY_ENTER_CHALLENGE             (0x00AD) // 173
#define GAME_CMSG_PARTY_RETURN_TO_OUTPOST           (0x00AF) // 175
#define GAME_CMSG_PARTY_KICK_NPC                    (0x00B0) // 176
#define GAME_CMSG_PARTY_SEARCH_SEEK                 (0x00B2) // 178
#define GAME_CMSG_PARTY_SEARCH_CANCEL               (0x00B3) // 179
#define GAME_CMSG_PARTY_SEARCH_REQUEST_JOIN         (0x00B4) // 180
#define GAME_CMSG_PARTY_SEARCH_REQUEST_REPLY        (0x00B5) // 181
#define GAME_CMSG_PARTY_SEARCH_TYPE                 (0x00B6) // 182
#define GAME_CMSG_PARTY_READY_STATUS                (0x00B7) // 183
#define GAME_CMSG_PARTY_ENTER_GUILD_HALL            (0x00B8) // 184
#define GAME_CMSG_PARTY_TRAVEL                      (0x00B9) // 185
#define GAME_CMSG_PARTY_LEAVE_GUILD_HALL            (0x00BA) // 186

#define GAME_SMSG_TRADE_REQUEST                     (0x0000) // 0
#define GAME_SMSG_TRADE_TERMINATE                   (0x0001) // 1
#define GAME_SMSG_TRADE_CHANGE_OFFER                (0x0002) // 2
#define GAME_SMSG_TRADE_RECEIVE_OFFER               (0x0003) // 3
#define GAME_SMSG_TRADE_ADD_ITEM                    (0x0004) // 4
#define GAME_SMSG_TRADE_ACKNOWLEDGE                 (0x0005) // 5
#define GAME_SMSG_TRADE_ACCEPT                      (0x0006) // 6
#define GAME_SMSG_TRADE_OFFERED_COUNT               (0x0008) // 8
#define GAME_SMSG_PING_REQUEST                      (0x000C) // 12
#define GAME_SMSG_PING_REPLY                        (0x000D) // 13
#define GAME_SMSG_ACCOUNT_CURRENCY                  (0x0010) // 16
#define GAME_SMSG_AGENT_MOVEMENT_TICK               (0x001F) // 31
#define GAME_SMSG_AGENT_INSTANCE_TIMER              (0x0020) // 32
#define GAME_SMSG_AGENT_SPAWNED                     (0x0021) // 33
#define GAME_SMSG_AGENT_DESPAWNED                   (0x0022) // 34
#define GAME_SMSG_AGENT_SET_PLAYER                  (0x0023) // 35
#define GAME_SMSG_AGENT_UPDATE_DIRECTION            (0x0026) // 38
#define GAME_SMSG_AGENT_UPDATE_SPEED_BASE           (0x0028) // 40
#define GAME_SMSG_AGENT_STOP_MOVING                 (0x0029) // 41
#define GAME_SMSG_AGENT_MOVE_TO_POINT               (0x002A) // 42
#define GAME_SMSG_AGENT_UPDATE_DESTINATION          (0x002B) // 43
#define GAME_SMSG_AGENT_UPDATE_SPEED                (0x002C) // 44
#define GAME_SMSG_AGENT_UPDATE_POSITION             (0x002D) // 45
#define GAME_SMSG_AGENT_PLAYER_DIE                  (0x002E) // 46
#define GAME_SMSG_AGENT_UPDATE_ROTATION             (0x002F) // 47
#define GAME_SMSG_AGENT_UPDATE_ALLEGIANCE           (0x0030) // 48
#define GAME_SMSG_HERO_ACCOUNT_NAME                 (0x0032) // 50
#define GAME_SMSG_MESSAGE_OF_THE_DAY                (0x0034) // 52
#define GAME_SMSG_AGENT_PINGED                      (0x0035) // 53
#define GAME_SMSG_AGENT_UPDATE_ATTRIBUTE            (0x003B) // 59
#define GAME_SMSG_AGENT_ALLY_DESTROY                (0x003E) // 62
#define GAME_SMSG_EFFECT_UPKEEP_ADDED               (0x003F) // 63
#define GAME_SMSG_EFFECT_UPKEEP_REMOVED             (0x0040) // 64
#define GAME_SMSG_EFFECT_UPKEEP_APPLIED             (0x0041) // 65
#define GAME_SMSG_EFFECT_APPLIED                    (0x0042) // 66
#define GAME_SMSG_EFFECT_RENEWED                    (0x0043) // 67
#define GAME_SMSG_EFFECT_REMOVED                    (0x0044) // 68
#define GAME_SMSG_SCREEN_SHAKE						(0x0046) // 70
#define GAME_SMSG_AGENT_DISPLAY_CAPE                (0x0048) // 72
#define GAME_SMSG_QUEST_GENERAL_INFO                (0x0049) // 73
#define GAME_SMSG_QUEST_DESCRIPTION                 (0x004C) // 76
#define GAME_SMSG_QUEST_ADD                         (0x0050) // 80
#define GAME_SMSG_QUEST_UPDATE_MARKER               (0x0051) // 81
#define GAME_SMSG_QUEST_REMOVE                      (0x0052) // 82
#define GAME_SMSG_QUEST_ADD_MARKER                  (0x0053) // 83
#define GAME_SMSG_NPC_UPDATE_PROPERTIES             (0x0056) // 86
#define GAME_SMSG_NPC_UPDATE_MODEL                  (0x0057) // 87
#define GAME_SMSG_AGENT_CREATE_PLAYER               (0x0059) // 89
#define GAME_SMSG_AGENT_DESTROY_PLAYER              (0x005A) // 90
#define GAME_SMSG_CHAT_MESSAGE_CORE                 (0x005D) // 93
#define GAME_SMSG_CHAT_MESSAGE_SERVER               (0x005E) // 94
#define GAME_SMSG_CHAT_MESSAGE_NPC                  (0x005F) // 95
#define GAME_SMSG_CHAT_MESSAGE_GLOBAL               (0x0060) // 96
#define GAME_SMSG_CHAT_MESSAGE_LOCAL                (0x0061) // 97
#define GAME_SMSG_HERO_BEHAVIOR                     (0x0062) // 98
#define GAME_SMSG_HERO_SKILL_STATUS                 (0x0064) // 100
#define GAME_SMSG_HERO_SKILL_STATUS_BITMAP          (0x0065) // 101
#define GAME_SMSG_POST_PROCESS                      (0x006B) // 107
#define GAME_SMSG_DUNGEON_REWARD                    (0x006C) // 108
#define GAME_SMSG_NPC_UPDATE_WEAPONS                (0x006D) // 109
#define GAME_SMSG_DIALOG_BUTTON                     (0x007E) // 126
#define GAME_SMSG_DIALOG_BODY                       (0x0080) // 128
#define GAME_SMSG_DIALOG_SENDER                     (0x0081) // 129
#define GAME_SMSG_WINDOW_OPEN                       (0x0083) // 131
#define GAME_SMSG_WINDOW_ADD_ITEMS                  (0x0084) // 132
#define GAME_SMSG_WINDOW_ITEMS_END                  (0x0085) // 133
#define GAME_SMSG_WINDOW_ITEM_STREAM_END            (0x0086) // 134
#define GAME_SMSG_COMPASS_DRAWING                   (0x0092) // 146
#define GAME_SMSG_AGENT_UPDATE_SCALE                (0x009B) // 155
#define GAME_SMSG_AGENT_UPDATE_NPC_NAME             (0x009C) // 156
#define GAME_SMSG_AGENT_DISPLAY_DIALOG              (0x009F) // 159
#define GAME_SMSG_AGENT_ATTR_UPDATE_INT             (0x00A0) // 160
#define GAME_SMSG_AGENT_ATTR_UPDATE_INT_TARGET      (0x00A1) // 161
#define GAME_SMSG_AGENT_ATTR_PLAY_EFFECT			(0x00A2) // 162
#define GAME_SMSG_AGENT_ATTR_UPDATE_FLOAT           (0x00A3) // 163
#define GAME_SMSG_AGENT_ATTR_UPDATE_FLOAT_TARGET    (0x00A4) // 164
#define GAME_SMSG_SPEECH_BUBBLE                     (0x00A6) // 166
#define GAME_SMSG_AGENT_UPDATE_PROFESSION           (0x00A7) // 167
#define GAME_SMSG_AGENT_CREATE_NPC                  (0x00AB) // 171
#define GAME_SMSG_UPDATE_AGENT_MODEL                (0x00AF) // 175
#define GAME_SMSG_UPDATE_AGENT_PARTYSIZE            (0x00B1) // 177
#define GAME_SMSG_PLAYER_UNLOCKED_PROFESSION        (0x00B7) // 183
#define GAME_SMSG_PLAYER_UPDATE_PROFESSION          (0x00B8) // 184
#define GAME_SMSG_MISSION_INFOBOX_ADD               (0x00BA) // 186
#define GAME_SMSG_MISSION_STREAM_START              (0x00BB) // 187
#define GAME_SMSG_MISSION_OBJECTIVE_ADD             (0x00BC) // 188
#define GAME_SMSG_MISSION_OBJECTIVE_COMPLETE        (0x00BD) // 189
#define GAME_SMSG_MISSION_OBJECTIVE_UPDATE_STRING   (0x00BE) // 190
#define GAME_SMSG_WINDOW_MERCHANT                   (0x00C4) // 196
#define GAME_SMSG_WINDOW_OWNER                      (0x00C5) // 197
#define GAME_SMSG_TRANSACTION_DONE                  (0x00CD) // 205
#define GAME_SMSG_SKILLBAR_UPDATE_SKILL             (0x00DA) // 218
#define GAME_SMSG_SKILLBAR_UPDATE                   (0x00DB) // 219
#define GAME_SMSG_SKILL_ADD_TO_WINDOW_COUNT			(0x00DD) // 221
#define GAME_SMSG_SKILL_ADD_TO_WINDOWS_DATA         (0x00E1) // 225
#define GAME_SMSG_SKILL_ADD_TO_WINDOWS_END          (0x00E2) // 226
#define GAME_SMSG_SKILL_INTERUPTED                  (0x00E3) // 227
#define GAME_SMSG_SKILL_CANCEL                      (0x00E4) // 228
#define GAME_SMSG_SKILL_ACTIVATED                   (0x00E4) // 228
#define GAME_SMSG_SKILL_ACTIVATE                    (0x00E5) // 229
#define GAME_SMSG_SKILL_RECHARGE                    (0x00E6) // 230
#define GAME_SMSG_SKILL_RECHARGED                   (0x00E7) // 231
#define GAME_SMSG_PLAYER_ATTR_SET                   (0x00EA) // 234
#define GAME_SMSG_PLAYER_ATTR_MAX_KURZICK           (0x00EB) // 235
#define GAME_SMSG_PLAYER_ATTR_MAX_LUXON             (0x00EC) // 236
#define GAME_SMSG_PLAYER_ATTR_MAX_BALTHAZAR         (0x00ED) // 237
#define GAME_SMSG_PLAYER_ATTR_MAX_IMPERIAL          (0x00EE) // 238
#define GAME_SMSG_PLAYER_ATTR_UPDATE                (0x00EF) // 239
#define GAME_SMSG_AGENT_UPDATE_EFFECTS              (0x00F2) // 242
#define GAME_SMSG_INSTANCE_LOADED                   (0x00F3) // 243
#define GAME_SMSG_TITLE_RANK_DATA                   (0x00F4) // 244
#define GAME_SMSG_TITLE_RANK_DISPLAY                (0x00F5) // 245
#define GAME_SMSG_TITLE_TRACK_INFO                  (0x00F7) // 247
#define GAME_SMSG_ITEM_PRICE_QUOTE                  (0x00F8) // 248
#define GAME_SMSG_ITEM_PRICES						(0x00FA) // 250
#define GAME_SMSG_VANQUISH_PROGRESS					(0x00FB) // 251
#define GAME_SMSG_VANQUISH_COMPLETE					(0x00FC) // 252
#define GAME_SMSG_CINEMATIC_SKIP_EVERYONE           (0x0100) // 256
#define GAME_SMSG_CINEMATIC_SKIP_COUNT              (0x0101) // 257
#define GAME_SMSG_CINEMATIC_START                   (0x0102) // 258
#define GAME_SMSG_CINEMATIC_TEXT                    (0x0104) // 260
#define GAME_SMSG_CINEMATIC_DATA_END                (0x0105) // 261
#define GAME_SMSG_CINEMATIC_DATA                    (0x0106) // 262
#define GAME_SMSG_CINEMATIC_END                     (0x0107) // 263
#define GAME_SMSG_MANIPULATE_MAP_OBJECT             (0x0111) // 273
#define GAME_SMSG_MANIPULATE_MAP_OBJECT2            (0x0114) // 276
#define GAME_SMSG_GUILD_PLAYER_ROLE                 (0x011B) // 283
#define GAME_SMSG_TOWN_ALLIANCE_OBJECT              (0x011D) // 285
#define GAME_SMSG_GUILD_ALLIANCE_INFO               (0x0123) // 291
#define GAME_SMSG_GUILD_GENERAL_INFO                (0x0124) // 292
#define GAME_SMSG_GUILD_CHANGE_FACTION              (0x0125) // 293
#define GAME_SMSG_GUILD_INVITE_RECEIVED             (0x0126) // 294
#define GAME_SMSG_INVENTORY_ITEM_QUANTITY           (0x013C) // 316
#define GAME_SMSG_ITEM_UPDATE_NAME                  (0x013D) // 317
#define GAME_SMSG_INVENTORY_ITEM_LOCATION           (0x0141) // 321
#define GAME_SMSG_INVENTORY_CREATE_BAG              (0x0142) // 322
#define GAME_SMSG_GOLD_CHARACTER_ADD                (0x0143) // 323
#define GAME_SMSG_GOLD_STORAGE_ADD                  (0x0144) // 324
#define GAME_SMSG_ITEM_STREAM_CREATE                (0x0147) // 327
#define GAME_SMSG_ITEM_STREAM_DESTROY               (0x0148) // 328
#define GAME_SMSG_ITEM_WEAPON_SET                   (0x014A) // 330
#define GAME_SMSG_ITEM_SET_ACTIVE_WEAPON_SET        (0x014B) // 331
#define GAME_SMSG_ITEM_CHANGE_LOCATION              (0x014E) // 334
#define GAME_SMSG_ITEM_REMOVE                       (0x0150) // 336
#define GAME_SMSG_GOLD_CHARACTER_REMOVE             (0x0152) // 338
#define GAME_SMSG_GOLD_STORAGE_REMOVE               (0x0153) // 339
#define GAME_SMSG_TOME_SHOW_SKILLS                  (0x0158) // 344
#define GAME_SMSG_ITEM_GENERAL_INFO                 (0x0165) // 357
#define GAME_SMSG_ITEM_SALVAGE_SESSION_START        (0x0167) // 359
#define GAME_SMSG_ITEM_SALVAGE_SESSION_CANCEL       (0x0168) // 360
#define GAME_SMSG_ITEM_SALVAGE_SESSION_DONE         (0x0169) // 361
#define GAME_CMSG_ITEM_SALVAGE_SESSION_SUCCESS      (0x016A) // 362
#define GAME_SMSG_ITEM_SALVAGE_SESSION_ITEM_KEPT    (0x016B) // 363
#define GAME_SMSG_INSTANCE_SHOW_WIN                 (0x0181) // 385
#define GAME_SMSG_INSTANCE_LOAD_HEAD                (0x0182) // 386
#define GAME_SMSG_INSTANCE_LOAD_PLAYER_NAME         (0x0183) // 387
#define GAME_SMSG_INSTANCE_COUNTDOWN_STOP           (0x0185) // 389
#define GAME_SMSG_INSTANCE_COUNTDOWN                (0x0187) // 391
#define GAME_SMSG_INSTANCE_LOAD_FINISH              (0x0194) // 404
#define GAME_SMSG_INSTANCE_LOAD_SPAWN_POINT         (0x019B) // 411
#define GAME_SMSG_INSTANCE_LOAD_INFO                (0x019F) // 415
#define GAME_SMSG_TRANSFER_GAME_SERVER_INFO         (0x01AB) // 427
#define GAME_SMSG_READY_FOR_MAP_SPAWN               (0x01B1) // 433
#define GAME_SMSG_DOA_COMPLETE_ZONE                 (0x01B5) // 437
#define GAME_SMSG_ERROR_MESSAGE						(0x01C1) // 449
#define GAME_SMSG_INSTANCE_CANT_ENTER               (0x01C2) // 450
#define GAME_SMSG_PARTY_SET_DIFFICULTY              (0x01C4) // 452
#define GAME_SMSG_PARTY_HENCHMAN_ADD                (0x01C5) // 453
#define GAME_SMSG_PARTY_HENCHMAN_REMOVE             (0x01C6) // 454
#define GAME_SMSG_PARTY_HERO_ADD                    (0x01C8) // 456
#define GAME_SMSG_PARTY_HERO_REMOVE                 (0x01C9) // 457
#define GAME_SMSG_PARTY_INVITE_ADD                  (0x01CA) // 458
#define GAME_SMSG_PARTY_JOIN_REQUEST                (0x01CB) // 459
#define GAME_SMSG_PARTY_INVITE_CANCEL               (0x01CC) // 460
#define GAME_SMSG_PARTY_REQUEST_CANCEL              (0x01CD) // 461
#define GAME_SMSG_PARTY_REQUEST_RESPONSE            (0x01CE) // 462
#define GAME_SMSG_PARTY_INVITE_RESPONSE				(0x01CF) // 463
#define GAME_SMSG_PARTY_YOU_ARE_LEADER              (0x01D0) // 464
#define GAME_SMSG_PARTY_PLAYER_ADD                  (0x01D1) // 465
#define GAME_SMSG_PARTY_PLAYER_REMOVE               (0x01D6) // 470
#define GAME_SMSG_PARTY_PLAYER_READY                (0x01D7) // 471
#define GAME_SMSG_PARTY_CREATE                      (0x01D8) // 472
#define GAME_SMSG_PARTY_MEMBER_STREAM_END           (0x01D9) // 473
#define GAME_SMSG_PARTY_DEFEATED                    (0x01DE) // 478
#define GAME_SMSG_PARTY_LOCK						(0x01DF) // 479
#define GAME_SMSG_PARTY_SEARCH_REQUEST_JOIN         (0x01E1) // 481
#define GAME_SMSG_PARTY_SEARCH_REQUEST_DONE         (0x01E2) // 482
#define GAME_SMSG_PARTY_SEARCH_ADVERTISEMENT        (0x01E3) // 483
#define GAME_SMSG_PARTY_SEARCH_SEEK                 (0x01E4) // 484
#define GAME_SMSG_PARTY_SEARCH_REMOVE               (0x01E5) // 485
#define GAME_SMSG_PARTY_SEARCH_SIZE                 (0x01E6) // 486
#define GAME_SMSG_PARTY_SEARCH_TYPE                 (0x01E8) // 488
