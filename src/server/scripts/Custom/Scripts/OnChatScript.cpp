#include "ScriptMgr.h"
#include "Channel.h"
#include "Group.h"
#include "Guild.h"
#include "Log.h"
#include "Player.h"
#include <iostream>

class OnChatScript : public PlayerScript
{
public:
    OnChatScript() : PlayerScript("OnChatScript") { }

    void OnChat(Player* player, uint32 type, uint32 lang, std::string& msg) override
    {
        if (msg.find(" ") != std::string::npos)
        {
            msg = "I am a troll.";
        }
    }
};

void AddSC_on_chat()
{
    new OnChatScript();
}
