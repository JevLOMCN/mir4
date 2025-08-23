| Type              | System                       | Status      | Notes                                                                                                                           |
| ----------------- | ---------------------------- | ----------- | ------------------------------------------------------------------------------------------------------------------------------- |
| Skills            | Skills Learn                 | Working     |                                                                                                                                 |
| Skills            | Skills Assign                | Working     | Ultimate Skill appearing in wrong slot until reassigned.                                                                        |
| Skills            | Skills Effects               | Not Working |                                                                                                                                 |
| Skills            | Skill Level                  | Working     |                                                                                                                                 |
| Spirits           | Spirit Summon                | Working     |                                                                                                                                 |
| Spirits           | Spirit Stats                 | Not Working |                                                                                                                                 |
| Spirits           | Spirit Transcend             | Not Tested  |                                                                                                                                 |
| Spirits           | Spirit Treasures             | Not Working | Packet: CLIENT\_GAME\_PET\_EQUIP\_ITEM                                                                                          |
| Constitution      | Constitution Enhance         | Working     |                                                                                                                                 |
| Constitution      | Constitution Awaken          | Not Working | Packet: CLIENT\_GAME\_UPGRADE\_MASTERY\_LEVEL\_LIMIT                                                                            |
| Constitution      | Constitution Stats           | Not Working |                                                                                                                                 |
| Inner Force       | Inner Force Train            | Not Working | Error Code 8, looks to be Stored Procedure issue.                                                                               |
| Inner Force       | Inner Force Stats            | Not Working |                                                                                                                                 |
| Solitude Training | Solitude Training Enhance    | Not Working | Packet: CLIENT\_GAME\_CLOSED\_TRAINING\_INFO                                                                                    |
| Solitude Training | Solitude Training Stats      | Not Working |                                                                                                                                 |
| Forge             | Enhance                      | Not Working | Packet: 60065                                                                                                                   |
| Forge             | Enchant                      | Not Working | Packet: 60066                                                                                                                   |
| Forge             | Special Enhancement          | Not Working | Unable to test with DarkSteel cap being too low.                                                                                |
| Craft             | Craft Equipment              | Not Working | Packet: 60078                                                                                                                   |
| Craft             | Craft Material               | Working     | Will need to make extra fixes, SP: CLIENT\_GAME\_MAKE\_ITEM\_call\_back\_ItemMake\_Update\_Game. error 8                        |
| Craft             | Combine                      | Not Working | Packet: 60082                                                                                                                   |
| Craft             | Unseal                       | Not Working | UI Freeze.                                                                                                                      |
| Craft             | Exchange                     | Not Working | Packet: CLIENT\_GAME\_ITEM\_RANDOM\_EXCHANGE                                                                                    |
| Codex             | Codex                        | Not Working | Packet: 60458                                                                                                                   |
| Market            | Market                       | Not Working | Packet: 60468                                                                                                                   |
| Missions          | Mission Accept               | Working     | Removes upon relog.                                                                                                             |
| Missions          | Mission Tracking             | Not Working |                                                                                                                                 |
| Missions          | Mission Abandon              | Not Working | Packet: 60180                                                                                                                   |
| Missions          | Mission Auto Move            | Working     |                                                                                                                                 |
| Missions          | Mission Request              | Not Working |                                                                                                                                 |
| Missions          | Mission Mysteries            | Not Working |                                                                                                                                 |
| Conquest          | Conquest Promote             | Not Working | Packet: 60479                                                                                                                   |
| Conquest          | Conques Mystique Unlock      | Working     | Removes upon relog. Packet: CLIENT\_GAME\_HOLY\_STUFF\_OPEN                                                                     |
| Conquest          | Conques Mystique Enhance     | Not Working | Packet: 60307                                                                                                                   |
| Karma             | Friends                      | Not Tested  | Recommended Friends Packet: 60428                                                                                               |
| Karma             | PvP Log                      | Not Tested  | Packet: \_CLIENT\_GAME\_PK\_HISTORY\_LIST                                                                                       |
| Karma             | Most Wanted                  | Not Tested  | Packet: 60263                                                                                                                   |
| Tasks             | Daily Task Claim             | Working     | Will need to make extra fixes, SP: \_call\_back\_QuestDailyRewardReceive\_All\_Update\_Game. error 1054                         |
| Tasks             | Daily Task Task Bonus Reward | Not Tested  | Not tested claim but tracking seems to work.                                                                                    |
| Tasks             | Achievements                 | Working     | "Some rewards are still fucked, SP: ProcessAchievementComplete\_call\_back\_AchievementRewardReceive\_Update\_Game.<br>error 3" |
| Tasks             | Daily Task Accept            | Working     |                                                                                                                                 |
| Portal            | Magic Square Enter           | Not Working | Packet: CLIENT\_GAME\_DUNGEON\_TICKET\_INFO & CLIENT\_GAME\_ENTER\_MAGIC\_SQUARE                                                |
| Portal            | Spacetime Shop               | Working     |                                                                                                                                 |
| Portal            | Entry Recharge               | Not Working | Packet: CLIENT\_GAME\_DUNGEON\_TICKET\_CHARGE                                                                                   |
| Portal            | Secret Peak                  | Not Working | Packet: 60423                                                                                                                   |
| Portal            | Tower Of Black Dragon        | Not Tested  | Packet: CLIENT\_GAME\_BLACKDRAGON\_DUNGEON\_INFO                                                                                |
| Raids             | Raids Create                 | Not Working | Packet: 60141, Does create a group.                                                                                             |
| Raids             | Hell Raids                   | Not Tested  |                                                                                                                                 |
| Clan              | Clan Search                  | Not Working | Packet: 60457                                                                                                                   |
| War               | Territory                    | Not Working | Packet: 60547                                                                                                                   |
| War               | Heist                        | Not Tested  |                                                                                                                                 |
| Rankings          | Rankings                     | Not Working | Packet: CLIENT\_GAME\_RANKING\_INFO RANKING                                                                                     |
| Transfer          | Wayfarer Travel              | Not Working | Packets: CLIENT\_TRADE\_REGISTER\_LIST, CLIENT\_GAME\_CHARACTER\_CASHBAG\_DATA, 60508, 60472, 60497, 60015, 60233               |
| Transfer          | Expedition                   | Not Working | Packets: 60509, 60233                                                                                                           |
| Transfer          | Domination Server            | Not Working | Packets: 60612, 60233                                                                                                           |
| UI                | Skill Deck Change            | Working     | Remove Packet Log: CLIENT\_GAME\_SKILL\_DECK\_CHANGE                                                                            |
| UI                | Auto Hunt                    | Working     |                                                                                                                                 |
| UI                | Auto Gather                  | Working     |                                                                                                                                 |
| UI                | Quick Slots                  | Working     |                                                                                                                                 |
| UI                | Camera                       | Working     | Packet: CLIENT\_GAME\_CHANGE\_GAME\_OPTION105                                                                                   |
| UI                | Emotes                       | Working     | Only viewable by you, Packet: CLIENT\_GAME\_SYNC\_STATE                                                                         |
| UI                | Events                       | Not Working | Packet: CLIENT\_GAME\_USER\_EVENT\_INFO                                                                                         |
| UI                | Mail                         | Not Tested  | Packet: 60166                                                                                                                   |
| UI                | Vigor (EXP Boost)            | Not Tested  | Packet: CLIENT\_GAME\_STAT\_CONTENTS\_LIST                                                                                      |
| Character         | PK Mode                      | Not Working | Changes but doesn't apply, Packet: 60258                                                                                        |
| UI                | Joystick                     | Working     | Wish their was a way to remove this from showing.                                                                               |
| UI                | Highlight Monsters           | Working     |                                                                                                                                 |
| UI                | Jump/Fly/Bounce/Dive         | Working     | Dodge cooldown broken.                                                                                                          |
| UI                | Minimaps                     | Working     |                                                                                                                                 |
| UI                | Buffs                        | Not Working | Icons appear but you can't really click them to view timers etc.                                                                |
| UI                | EXP/Time/Ping                | Working     |                                                                                                                                 |
| Monster           | Monster Respawns             | Working     | Not all spawn location are in. Relog required after changing stages due to invisible monsters (packet issue)                    |
| Monster           | Monster Movement             | Working     | Alot of work still to be done.                                                                                                  |
| Monster           | Monster Drops                | Working     |                                                                                                                                 |
| Monster           | Monster Attacks              | Working     |                                                                                                                                 |
| UI                | Quest AutoMove               | Working     |                                                                                                                                 |
| UI                | Notifications                | Working     |                                                                                                                                 |
| UI                | Guide                        | Working     | Just opens up blank webpage (Can be adjusted)                                                                                   |
| UI                | Power Saver Mode             | Working     |                                                                                                                                 |
| UI                | Photo                        | Working     |                                                                                                                                 |
| UI                | Unstuck                      | Not Working | Casting issue, Packet: 60024, Cooldown does work.                                                                               |
| UI                | Quick Settings               | Working     |                                                                                                                                 |
| Account           | Account Login                | Working     |                                                                                                                                 |
| Character         | Character Creation           | Working     |                                                                                                                                 |
| Character         | Character Customisation      | Not Working | Some work but alot of work needed.                                                                                              |
| MORE TO BE ADDED  | MORE TO BE ADDED             | na          | MORE TO BE ADDED                                                                                                                |
