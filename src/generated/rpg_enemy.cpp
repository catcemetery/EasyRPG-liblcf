/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "lcf/rpg/enemy.h"

namespace lcf {
namespace rpg {

std::ostream& operator<<(std::ostream& os, const Enemy& obj) {
	os << "Enemy{";
	os << "name="<< obj.name;
	os << ", battler_name="<< obj.battler_name;
	os << ", battler_hue="<< obj.battler_hue;
	os << ", max_hp="<< obj.max_hp;
	os << ", max_sp="<< obj.max_sp;
	os << ", attack="<< obj.attack;
	os << ", defense="<< obj.defense;
	os << ", spirit="<< obj.spirit;
	os << ", agility="<< obj.agility;
	os << ", transparent="<< obj.transparent;
	os << ", exp="<< obj.exp;
	os << ", gold="<< obj.gold;
	os << ", drop_id="<< obj.drop_id;
	os << ", drop_prob="<< obj.drop_prob;
	os << ", critical_hit="<< obj.critical_hit;
	os << ", critical_hit_chance="<< obj.critical_hit_chance;
	os << ", miss="<< obj.miss;
	os << ", levitate="<< obj.levitate;
	os << ", state_ranks=";
	for (size_t i = 0; i < obj.state_ranks.size(); ++i) {
		os << (i == 0 ? "[" : ", ") << obj.state_ranks[i];
	}
	os << "]";
	os << ", attribute_ranks=";
	for (size_t i = 0; i < obj.attribute_ranks.size(); ++i) {
		os << (i == 0 ? "[" : ", ") << obj.attribute_ranks[i];
	}
	os << "]";
	os << ", actions=";
	for (size_t i = 0; i < obj.actions.size(); ++i) {
		os << (i == 0 ? "[" : ", ") << obj.actions[i];
	}
	os << "]";
	os << ", maniac_unarmed_animation="<< obj.maniac_unarmed_animation;
	os << "}";
	return os;
}

} // namespace rpg
} // namespace lcf
