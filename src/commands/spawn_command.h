#pragma once

#include "command.h"

class SpawnCommand : public ICommand
{
  public:
    // clang-format off
    std::array<const char *, 220> m_Hints = {
        "v000_car_atv_civilian_01",
        "v000_car_atv_javi",
        "v001_car_forklift_industrial",
        "v002_car_vintagesuv_civilian",
        "v002_car_vintagesuv_javi",
        "v002_car_vintagesuv_rebel",
        "v003_car_crane_industrial",
        "v004_car_articulatedtruck_commercial_01",
        "v004_car_articulatedtruck_commercial_cargo_trailer",
        "v004_car_articulatedtruck_commercial_lowloader_trailer",
        "v004_car_articulatedtruck_commercial_radarjammer",
        "v004_car_articulatedtruck_commercial_smallmobileweapon_trailer",
        "v005_car_wheelloader_industrial",
        "v006_car_conveyorcrane_industrial",
        // "v007_car_",
        "v008_car_taxitrike_civilian",
        "v009_car_armoredtruck_commercial_01",
        "v010_car_oldtractor_civilian_01",
        "v011_car_oldtwodoorhatch_civilian_01",
        "v011_car_oldtwodoorhatch_sargento",
        "v012_car_apc_military_01",
        "v012_car_apc_rebel_01",
        "v013_car_armoredtransport_military_01",
        "v013_car_armoredtransport_rebel_01",
        "v014_car_offroadtruck_military_01",
        "v014_car_offroadtruck_rebel_01",
        "v015_car_cannontruck_military",
        "v015_car_cannontruck_rebel",
        "v016_car_armoredarticulatedtruck_military",
        "v016_car_armoredarticulatedtruck_rebel",
        "v017_car_vintagemuscle_bomb_special",
        "v017_car_vintagemuscle_civilian",
        "v017_car_vintagemuscle_civilian_02",
		"v017_car_vintagemuscle_rico",
        "v018_car_monstertruck_bomb_special",
        "v018_car_monstertruck_civilian_01",
        "v019_car_modernlimo_bomb_special",
        "v019_car_modernlimo_civilian_01",
        "v020_car_moderngrandtourer_civilian_01",
        "v021_car_sportsmuscle_bomb_special",
        "v021_car_sportsmuscle_civilian_01",
        "v022_car_moderncircuitracer_bomb_special",
        "v022_car_moderncircuitracer_civilian_01",
        "v023_car_racingsuper_bomb_special",
        "v023_car_racingsuper_civilian_01",
        "v023_car_racingsuper_racing_01",
        "v024_car_ecosuper_bomb_special",
        "v024_car_ecosuper_civilian_01",
        "v024_car_ecosuper_racing_01",
        "v025_car_vintagesuper_bomb_special",
        "v025_car_vintagesuper_civilian_01",
        "v026_car_vintagesports_bomb_special",
        "v026_car_vintagesports_civilian_01",
        "v027_car_hurricanetruck_civilian",
        "v027_car_hurricanetruck_tesla",
        "v027_car_hurricanetruck_transport",
        // "v028_car_",
        "v029_car_smallmodernsedan_civilian_01",
        "v029_car_smallmodernsedan_civilian_02",
        "v030_car_oldmini_civilian_01",
        "v030_car_oldmini_civilian_02",
        "v031_car_racinghothatch_civilian_01",
        "v031_car_racinghothatch_encounter_takedown",
        "v032_car_luxurysportssedan_civilian_01",
        "v033_car_modernmini_civilian_01",
        "v033_car_modernmini_civilian_02",
        "v034_car_oldtruck_commercial_01",
        "v034_car_oldtruck_commercial_cargo_barrel",
        "v034_car_oldtruck_commercial_cargo_barrel_mission_special",
        "v034_car_oldtruck_commerical_cargo_random",
        "v034_car_oldtruck_commerical_cargo_sargento_intro",
        "v035_car_modernvan_civic_ambulance_01",
        "v035_car_modernvan_commerical_01",
        "v035_car_modernvan_garland",
        "v036_car_modernpickup_civilian_01",
        "v036_car_modernpickup_civilian_02",
        "v037_car_modernbus_commerical_01",
        "v038_car_modernsuv_civilian_01",
        "v038_car_modernsuv_civilian_02",
        "v039_car_oldcampervan_civilian_01",
        "v039_car_oldcampervan_civilian_02",
        "v040_car_oldcompact_civilian_01",
        "v040_car_oldcompact_sargento",
        // "v041_car_",
        "v042_car_racingsedan_civilian",
        "v042_car_racingsedan_racing_01",
        // "v043_car_",
        // "v044_car_",
        "v045_car_minetruck_commercial_01",
        "v046_car_racingbuggy_civilian",
        "v046_car_racingbuggy_military",
        "v046_car_racingbuggy_racing_01",
        // "v047_car_",
        // "v048_car_",
        // "v049_car_",
        "v050_car_toyjeep_civilian",

        // boats
        "v100_boat_fanboat_civilian",
        "v101_boat_smalljet_military",
        "v101_boat_smalljet_rebel",
        "v102_boat_heavypatrol_lightning",
        "v102_boat_heavypatrol_military_01",
        "v102_boat_heavypatrol_rebel_01",
        "v103_boat_corvette_military_01",
        "v103_boat_corvette_rebel_01",
        "v104_boat_landingtransport_commercial",
        "v104_boat_landingtransport_commercial_lightningrod_escort",
        "v104_boat_landingtransport_commercial_signal_jammer",
        "v104_boat_landingtransport_rebel",
        "v105_boat_sailboat_civilian_01",
        "v106_boat_motoryacht_bomb_special",
        "v106_boat_motoryacht_civilian_01",
        "v107_boat_racingboat_bomb_special",
        "v107_boat_racingboat_civilian_01",
        "v108_boat_largeoldfishing_civilian_01",
        "v108_boat_largeoldfishing_civilian_01_garland_intro",
        "v109_boat_ferry_commercial",
        "v109_boat_ferry_commercial_garlandintro",
        "v110_boat_jetski_civilian_01",

        // helicopters
        "v200_helicopter_heavylift_military",
        "v200_helicopter_heavylift_rebel_01",
        "v200_helicopter_heavylift_rebel_mission_special",
        "v200_helicopter_heavytroop_mira",
        "v201_helicopter_mediumattack_military_01",
        "v201_helicopter_mediumattack_rebel_01",
        "v202_helicopter_lightheavytroop_gabriela",
        "v202_helicopter_lightheavytroop_military_01",
        "v202_helicopter_lightheavytroop_rebel_01",
        "v203_helicopter_lightattack_military_01",
        "v203_helicopter_lightattack_rebel_01",
        "v204_helicopter_heavyassault_military_01",
        "v204_helicopter_heavyassault_rebel_01",
        "v205_helicopter_utility_civilian_01",
        "v205_helicopter_utility_commercial_news",
        "v205_helicopter_utility_garland",
        "v206_helicopter_bubblescout_civilian_01",
        "v206_helicopter_bubblescout_javi",
        "v250_helicopter_mediumattackdrone_military",
        "v250_helicopter_mediumattackdrone_rebel",
        "v250_helicopter_mediumattackdrone_tornado",
        "v251_helicopter_rocketdrone_military",
        "v251_helicopter_rocketdrone_rebel",
        "v252_helicopter_suicidedrone_military",
        "v252_helicopter_suicidedrone_rebel",
        "v253_helicopter_decoydrone_preorder",
        "v253_helicopter_decoydrone_rebel",
        "v254_helicopter_guarddrone_military",
        "v254_helicopter_guarddrone_rebel",

        // bikes
        "v301_bike_combatdirt_military_01",
        "v301_bike_combatdirt_rebel_01",
        // "v302_bike_",
        "v303_bike_modernsuper_bomb_special",
        "v303_bike_modernsuper_civilian_01",
        "v304_bike_modernsport_bomb_special",
        "v304_bike_modernsport_civilian_01",
        "v305_bike_oldroad_civilian_01",
        "v306_bike_modernroad_civilian_01",
        "v307_bike_oldmoped_civilian_01",
        "v308_bike_trials_civilian_01",
        "v308_bike_trials_javi",

        // planes
        "v400_plane_fighterjet_military_01",
        "v400_plane_fighterjet_rebel_01",
        "v401_plane_cargotransport_military_01",
        "v401_plane_cargotransport_rebel_01",
        "v401_plane_cargotransport_signal_jammer",
        "v402_plane_fighterbomber_military_01",
        "v402_plane_fighterbomber_rebel_01",
        "v403_plane_microjet_military",
        "v403_plane_microjet_rebel",
        "v404_plane_privatejet_civilian",
        "v405_plane_commercialcargo_commercial",
        "v406_plane_smallprop_civilian_01",
        "v407_plane_mediumprop_civilian_01",
        "v408_plane_ultralight_civilian",

        // trains
        "v500_train_industrialengine_industrial",
        "v500_train_industrialengine_rebel",
        "v501_train_containercarriage_industrial",
        "v501_train_containercarriage_rebel",
        "v502_train_armoredengine_military_01",
        "v502_train_armoredengine_military_01_mission_special_steal_the_weapon_tech",
        "v502_train_armoredengine_military_01_node_military_05",
        "v502_train_armoredengine_military_02",
        "v502_train_armoredengine_military_03",
        "v502_train_armoredengine_military_04",
        "v502_train_armoredengine_rebel",
        "v502_train_armoredengine_rebel_02",
        "v502_train_armoredengine_rebel_04",
        "v502_train_armoredengine_rebel_mission_special_outro",
        "v502_train_armoredengine_rebel_mission_special_sandstorm_finale",
        "v503_train_armoredcargocarriage_military_catwalk",
        "v503_train_armoredcargocarriage_military_containers",
        "v503_train_armoredcargocarriage_military_empty",
        "v503_train_armoredcargocarriage_rebel",
        "v503_train_armoredcargocarriage_rebel_containers",
        "v503_train_armoredcargocarriage_rebel_empty",
        "v503_train_armoredcargocarriage_rebel_empty_decouple_immune",
        "v504_train_armoredfuelcarriage_military",
        "v504_train_armoredfuelcarriage_rebel",
        "v504_train_armoredfuelcarriage_rebel_not_targetable",
        "v505_train_armoredweaponcarriage_military_01",
        "v505_train_armoredweaponcarriage_rebel",
        "v506_train_armoredhowitzer_base",
        "v506_train_armoredhowitzer_military",
        "v506_train_armoredhowitzer_military_covered",
        "v506_train_armoredhowitzer_rebel",
        "v506_train_armoredhowitzer_decouple_immune",

        // treaded
        "v800_treaded_modernheavytank_military_01",
        "v800_treaded_modernheavytank_rebel_01",
        "v801_treaded_mediumtank_military_01",
        "v801_treaded_mediumtank_rebel_01",
        "v802_treaded_aatank_military",
        "v802_treaded_aatank_rebel",
        "v803_treaded_flexturrettank_military",
        "v803_treaded_flexturrettank_rebel",
        "v804_treaded_snowmobile_civilian",
        "v804_treaded_snowmobile_civilian_mission_special",

        // balloon
        "v700_balloon_dirigible_civilian",
        "v700_balloon_dirigible_collectible",
        "v700_balloon_dirigible_military_01",
        "v700_balloon_dirigible_node_science_01",

        // trailers
        "v901_trailer_cartransport_commercial",
        "v902_trailer_lowloader_commerical",
        "v902_trailer_lowloader_mobile_radar_folded",
        "v902_trailer_lowloader_mobile_radar_folded_sargento_aiproxy_enabled",
        "v902_trailer_lowloader_mobile_radar_upright",
        "v902_trailer_lowloader_mobile_radar_upright_sargent_aiproxy_enabled",
        "v903_trailer_cargo_commerical",
        "v904_trailer_smallmobileweapon_military",
        "v904_trailer_smallmobileweapon_rebel",
        // "v905_trailer_",
        // "v906_trailer_",
        "v907_trailer_radarjammer_military",
    };
    // clang-format on

    virtual const char *GetCommand() override
    {
        return "spawn";
    }

    virtual bool Handler(const std::string &arguments) override
    {
        auto  local_player = jc::CPlayerManager::instance().m_localPlayer;
        auto  transform    = local_player->m_character->m_transform;
        auto &aimpos       = local_player->m_aimControl->m_aimPos;

        transform.m[3].x = aimpos.x;
        transform.m[3].y = aimpos.y + 1.0f;
        transform.m[3].z = aimpos.z;

        // TODO(aaronlad): figure out the flags, right now the game is holding the shared_ptr so we don't have to do it
        jc::CSpawnSystem::instance().Spawn(arguments, transform, [](const jc::spawned_objects &objects, void *) {
            //
        });

        return true;
    }

    virtual std::vector<std::string> GetHints(const std::string &arguments) override
    {
        std::vector<std::string> result;
        std::copy_if(m_Hints.begin(), m_Hints.end(), std::back_inserter(result), [&](const std::string &item) {
            return (result.size() < 10) ? (item.find(arguments) != std::string::npos) : false;
        });

        return result;
    }
};
