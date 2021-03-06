#include "_Ability.h"
/*
    Key : Bit Index
    Value : Ability Object { AbilityType type, std::string name, std::string description  }
*/
std::map<uint16_t, AbilityObject> _Ability = {
	{ 0, { AbilityType::COMMAND, "Attack", "Attack an enemy with equipped weapon." } },
	{ 1, { AbilityType::COMMAND, "Item", "Use an item." } },
	{ 2, { AbilityType::COMMAND, "Switch", "Switch party members in and out of battle." } },
	{ 3, { AbilityType::COMMAND, "Escape", "Run away from battle." } },
	{ 4, { AbilityType::COMMAND, "Weapon", "Change equipped weapon." } },
	{ 5, { AbilityType::COMMAND, "Armor", "Change equipped armor." } },
	{ 6, { AbilityType::SKILL, "Delay Attack", "Delays action of an enemy." } },
	{ 7, { AbilityType::SKILL, "Delay Buster", "Greatly delays action of an enemy." } },
	{ 8, { AbilityType::SKILL, "Sleep Attack", "Puts an enemy to sleep for 3 turns." } },
	{ 9, { AbilityType::SKILL, "Silence Attack", "Silences an enemy for 3 turns." } },
	{ 10, { AbilityType::SKILL, "Dark Attack", "Inflicts darkness on an enemy for 3 turns." } },
	{ 11, { AbilityType::SKILL, "Zombie Attack", "Inflicts an enemy with zombie status." } },
	{ 12, { AbilityType::SKILL, "Sleep Buster", "Almost always puts an enemy to sleep for 1 turn." } },
	{ 13, { AbilityType::SKILL, "Silence Buster", "Almost always silences an enemy for 1 turn." } },
	{ 14, { AbilityType::SKILL, "Dark Buster", "Almost always inflicts darkness on an enemy for 1 turn." } },
	{ 15, { AbilityType::SKILL, "Triple Foul", "Sleep, silence, and darkness on an enemy for 3 turns." } },
	{ 16, { AbilityType::SKILL, "Power Break", "Lowers an enemy's Strength." } },
	{ 17, { AbilityType::SKILL, "Magic Break", "Lowers an enemy's Magic." } },
	{ 18, { AbilityType::SKILL, "Armor Break", "Lowers an enemy's Defense and nullifies armored." } },
	{ 19, { AbilityType::SKILL, "Mental Break", "Lowers an enemy's Magic Defense." } },
	{ 20, { AbilityType::SKILL, "Mug", "Attack and steal at the same time." } },
	{ 21, { AbilityType::SKILL, "Quick Hit", "Strike quickly with reduced recovery time." } },
	{ 22, { AbilityType::SPECIAL, "Steal", "Steal items from enemy." } },
	{ 23, { AbilityType::SPECIAL, "Use", "Use special items." } },
	{ 24, { AbilityType::SPECIAL, "Flee", "Aid party's escape from battle." } },
	{ 25, { AbilityType::SPECIAL, "Pray", "Restores some HP to all allies." } },
	{ 26, { AbilityType::SPECIAL, "Cheer", "Raises party's Strength and Defense." } },
	{ 27, { AbilityType::SPECIAL, "Aim", "Raises party's Accuracy." } },
	{ 28, { AbilityType::SPECIAL, "Focus", "Raises party's Magic and Magic Defense." } },
	{ 29, { AbilityType::SPECIAL, "Reflex", "Raises party's Evasion." } },
	{ 30, { AbilityType::SPECIAL, "Luck", "Raises party's Luck." } },
	{ 31, { AbilityType::SPECIAL, "Jinx", "Lowers all enemies' Luck." } },
	{ 32, { AbilityType::SPECIAL, "Lancet", "Absorb HP & MP from an enemy." } },
	{ 33, { AbilityType::SPECIAL, "Defend", "Reduces damage from physical attacks." } },
	{ 34, { AbilityType::SPECIAL, "Guard", "Take damage for an ally." } },
	{ 35, { AbilityType::SPECIAL, "Sentinel", "Guard allies while in defensive stance." } },
	{ 36, { AbilityType::SPECIAL, "Spare Change", "Attack by throwing gil." } },
	{ 37, { AbilityType::SPECIAL, "Threaten", "Immobilize an enemy with fear." } },
	{ 38, { AbilityType::SPECIAL, "Provoke", "Draw an enemy's attacks towards you." } },
	{ 39, { AbilityType::SPECIAL, "Entrust", "Contribute your Overdrive charge to an ally's gauge." } },
	{ 40, { AbilityType::SPECIAL, "Copycat", "Mimic an ally's previous action." } },
	{ 41, { AbilityType::SPECIAL, "Doublecast", "Cast two black magic spells in a row." } },
	{ 42, { AbilityType::SPECIAL, "Bribe", "Pay enemies gil to go away." } },
	{ 43, { AbilityType::WHITE_MAGIC, "Cure", "Restores some HP." } },
	{ 44, { AbilityType::WHITE_MAGIC, "Cura", "Restores a lot of HP." } },
	{ 45, { AbilityType::WHITE_MAGIC, "Curaga", "Restores a massive amount of HP." } },
	{ 46, { AbilityType::WHITE_MAGIC, "NulFrost", "Nullifies one ice attack on party." } },
	{ 47, { AbilityType::WHITE_MAGIC, "NulBlaze", "Nullifies one fire attack on party." } },
	{ 48, { AbilityType::WHITE_MAGIC, "NulShock", "Nullifies one lightning attack on party." } },
	{ 49, { AbilityType::WHITE_MAGIC, "NulTide", "Nullifies one water attack on party." } },
	{ 50, { AbilityType::WHITE_MAGIC, "Scan", "View an enemy's data." } },
	{ 51, { AbilityType::WHITE_MAGIC, "Esuna", "Cures a character's status ailments." } },
	{ 52, { AbilityType::WHITE_MAGIC, "Life", "Revives a KO'd character." } },
	{ 53, { AbilityType::WHITE_MAGIC, "Full-Life", "Revives a KO'd character and fully restores HP." } },
	{ 54, { AbilityType::WHITE_MAGIC, "Haste", "Speeds up one character." } },
	{ 55, { AbilityType::WHITE_MAGIC, "Hastega", "Speeds up party." } },
	{ 56, { AbilityType::WHITE_MAGIC, "Slow", "Slows an enemy down." } },
	{ 57, { AbilityType::WHITE_MAGIC, "Slowga", "Slows all enemies down." } },
	{ 58, { AbilityType::WHITE_MAGIC, "Shell", "Raises a character's Magic Defense." } },
	{ 59, { AbilityType::WHITE_MAGIC, "Protect", "Raises a character's Defense." } },
	{ 60, { AbilityType::WHITE_MAGIC, "Reflect", "Target reflects spells towards enemy." } },
	{ 61, { AbilityType::WHITE_MAGIC, "Dispel", "Negates all spell effects on an enemy." } },
	{ 62, { AbilityType::WHITE_MAGIC, "Regen", "Target gradually recovers HP for a time." } },
	{ 63, { AbilityType::WHITE_MAGIC, "Holy", "Deals holy damage to an enemy." } },
	{ 64, { AbilityType::WHITE_MAGIC, "Auto-Life", "Target is automatically revived once when KO'd." } },
	{ 65, { AbilityType::BLACK_MAGIC, "Blizzard", "Deals ice damage to an enemy." } },
	{ 66, { AbilityType::BLACK_MAGIC, "Fire", "Deals fire damage to an enemy." } },
	{ 67, { AbilityType::BLACK_MAGIC, "Thunder", "Deals lightning damage to an enemy." } },
	{ 68, { AbilityType::BLACK_MAGIC, "Water", "Deals water damage to an enemy." } },
	{ 69, { AbilityType::BLACK_MAGIC, "Fira", "Deals fire damage to an enemy." } },
	{ 70, { AbilityType::BLACK_MAGIC, "Blizzara", "Deals ice damage to an enemy." } },
	{ 71, { AbilityType::BLACK_MAGIC, "Thundara", "Deals lightning damage to an enemy." } },
	{ 72, { AbilityType::BLACK_MAGIC, "Watera", "Deals water damage to an enemy." } },
	{ 73, { AbilityType::BLACK_MAGIC, "Firaga", "Deals fire damage to an enemy." } },
	{ 74, { AbilityType::BLACK_MAGIC, "Blizzaga", "Deals ice damage to an enemy." } },
	{ 75, { AbilityType::BLACK_MAGIC, "Thundaga", "Deals lightning damage to an enemy." } },
	{ 76, { AbilityType::BLACK_MAGIC, "Waterga", "Deals water damage to an enemy." } },
	{ 77, { AbilityType::BLACK_MAGIC, "Bio", "Poisons an enemy." } },
	{ 78, { AbilityType::BLACK_MAGIC, "Demi", "Reduces HP of all enemies by 1/4." } },
	{ 79, { AbilityType::BLACK_MAGIC, "Death", "Can instantly KO an enemy." } },
	{ 80, { AbilityType::BLACK_MAGIC, "Drain", "Absorb HP from an enemy." } },
	{ 81, { AbilityType::BLACK_MAGIC, "Osmose", "Absorb MP from an enemy." } },
	{ 82, { AbilityType::BLACK_MAGIC, "Flare", "Deals non-elemental damage to an enemy." } },
	{ 83, { AbilityType::BLACK_MAGIC, "Ultima", "Deals non-elemental damage to all enemies." } },
	{ 84, { AbilityType::AEON_COMMAND, "Shield", "Take less damage, but Overdrive gauge won't charge." } },
	{ 85, { AbilityType::AEON_COMMAND, "Boost", "Take more damage, but charge Overdrive gauge faster." } },
	{ 86, { AbilityType::AEON_COMMAND, "Dismiss", "Send aeon away." } },
	{ 87, { AbilityType::AEON_COMMAND, "Dismiss", "Send aeon away." } },
	{ 88, { AbilityType::SPECIAL, "Pilfer Gil", "Steal gil from enemy." } },
	{ 89, { AbilityType::SKILL, "Full Break", "Inflicts Power, Magic, Armor, and Mental Break." } },
	{ 90, { AbilityType::SKILL, "Extract Power", "Makes one enemy drop Power Spheres." } },
	{ 91, { AbilityType::SKILL, "Extract Mana", "Makes one enemy drop Mana Spheres." } },
	{ 92, { AbilityType::SKILL, "Extract Speed", "Makes one enemy drop Speed Spheres." } },
	{ 93, { AbilityType::SKILL, "Extract Ability", "Makes one enemy drop Ability Spheres." } },
	{ 94, { AbilityType::SKILL, "Nab Gil", "Attack and steal gil at the same time." } },
	{ 95, { AbilityType::SPECIAL, "Quick Pockets", "Swiftly use items." } }
};