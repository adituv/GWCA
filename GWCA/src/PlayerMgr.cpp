#include <assert.h>
#include <stdint.h>
#include <Windows.h>

#include <GWCA/CtoSHeaders.h>
#include <GWCA/Constants/Constants.h>

#include <GWCA/Utilities/Export.h>

#include <GWCA/GameEntities/Agent.h>
#include <GWCA/GameEntities/Player.h>

#include <GWCA/Context/GameContext.h>
#include <GWCA/Context/WorldContext.h>

#include <GWCA/Managers/CtoSMgr.h>
#include <GWCA/Managers/AgentMgr.h>
#include <GWCA/Managers/PlayerMgr.h>

void GW::PlayerMgr::SetActiveTitle(GW::Constants::TitleID id) {
    CtoS::SendPacket(0x8, CtoGS_MSGSetDisplayedTitle, (DWORD)id);
}

void GW::PlayerMgr::RemoveActiveTitle() {
    CtoS::SendPacket(0x4, CtoGS_MSGRemoveDisplayedTitle);
}

GW::PlayerArray& GW::PlayerMgr::GetPlayerArray() {
    return GameContext::instance()->world->players;
}

GW::Player& GW::PlayerMgr::GetPlayerByID(PlayerID id) {
    return GetPlayerArray()[id];
}

wchar_t* GW::PlayerMgr::GetPlayerName(PlayerID id) {
    return GetPlayerArray()[id].name;
}

void GW::PlayerMgr::SetPlayerName(PlayerID id, const wchar_t *replacename) {
    wcsncpy(GetPlayerArray()[id].name_enc + 2, replacename, 20);
}

void GW::PlayerMgr::ChangeSecondProfession(GW::Constants::Profession prof, DWORD heroindex) {
    CtoS::SendPacket(12, CtoGS_MSGChangeSecondary, GW::Agents::GetHeroAgentID(heroindex), prof);
}

static int wcsncasecmp(const wchar_t *s1, const wchar_t *s2, size_t n)
{
    if (s1 == s2)   return 0;
    if (s1 == NULL) return -*s2;
    if (s2 == NULL) return *s1;
    for (size_t i = 0; i < n; i++) {
        if (tolower(s1[i]) != tolower(s2[i]) || s1[i] == 0)
            return s1[i] - s2[i];
    }
    return 0;
}

GW::Player *GW::PlayerMgr::GetPlayerByName(const wchar_t *name) {
    if (!name) return NULL;
    PlayerArray& players = GetPlayerArray();
    for (Player &player : players) {
        if (!player.name) continue;
        if (!wcsncasecmp(name, player.name, 32))
            return &player;
    }
    return NULL;
}