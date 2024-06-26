#include "stdafx.h"

#include <GWCA/Constants/Skills.h>

#include <GWCA/GameEntities/Skill.h>

#include <GWCA/Managers/MemoryMgr.h>

namespace GW {

    bool Skill::IsUnused() const {
        for (auto unused_skill_id : Constants::unused_skill_ids) {
            if (unused_skill_id == skill_id)
                return true;
        }
        return false;
    }

    uint32_t SkillbarSkill::GetRecharge() const {
        if (recharge == 0) return 0;
        return recharge - MemoryMgr::GetSkillTimer();
    }

    SkillbarSkill *Skillbar::GetSkillById(Constants::SkillID skill_id, size_t* slot_out) {
        for (size_t i = 0; i < _countof(skills); i++) {
            if (skills[i].skill_id == skill_id) {
                if (slot_out) {
                    *slot_out = i;
                }
                return &skills[i];
            }
                
        }
        return NULL;
    }

    DWORD Effect::GetTimeElapsed() const {
        return MemoryMgr::GetSkillTimer() - timestamp;
    }

    DWORD Effect::GetTimeRemaining() const {
        return (DWORD)(duration * 1000.f) - GetTimeElapsed();
    }

}
