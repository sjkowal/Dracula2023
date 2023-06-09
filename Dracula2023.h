// Here, a define should be made for every lamp on the machine.
// For demonstration, here are some example lamps that are typical
// for different architectures. This section should be deleted
// when implementing a particular machine.

#define LAMP_BONUS_2000                     0
#define LAMP_BONUS_10000                    1
#define LAMP_STAR_1                         2
#define LAMP_Y                              7
#define LAMP_SHOOT_AGAIN                    10
#define LAMP_HEAD_BALLINPLAY                  12
#define LAMP_HEAD_PLAYER_1                    13
#define LAMP_HEAD_PLAYER_1_UP                 14
#define LAMP_BONUS_4000                     15
#define LAMP_BONUS_20000                    16
#define LAMP_STAR_2                         17
#define LAMP_BAT_1                          18
#define LAMP_BAT_2                          19
#define LAMP_BAT_3                          20
#define LAMP_BAT_4                          21
#define LAMP_X                              22
#define LAMP_HEAD_MATCH                       25
#define LAMP_HEAD_PLAYER_2                    28
#define LAMP_HEAD_PLAYER_2_UP                 29
#define LAMP_BONUS_6000                     30
#define LAMP_STAR_3                         32
#define LAMP_CAT_1                          33
#define LAMP_CAT_2                          34
#define LAMP_CAT_3                          35
#define LAMP_CAT_4                          36
#define LAMP_STAR_4                         37
#define LAMP_7000_PTS                       40
#define LAMP_LEFT_INLANE_5K                 41
#define LAMP_HEAD_GAME_OVER                   42
#define LAMP_HEAD_PLAYER_3                    43
#define LAMP_HEAD_PLAYER_3_UP                 44
#define LAMP_BONUS_8000                     45
#define LAMP_1000_ADV_STAR                  47
#define LAMP_STANDUP_SPECIAL                48
#define LAMP_BONUS_5X                       49
#define LAMP_BONUS_2X                       50
#define LAMP_SPINNER_10X                    51
#define LAMP_4000_PTS                       52
#define LAMP_3000_PTS                       55
#define LAMP_RIGHT_OUTLANE_XBALL            56
#define LAMP_HEAD_TILT                        57
#define LAMP_HEAD_PLAYER_4                    58
#define LAMP_HEAD_PLAYER_4_UP                 59

#define SW_RIGHT_OUTLANE            0
#define SW_RIGHT_RETURN_LANE        1
#define SW_LEFT_OUTLANE             2
#define SW_LEFT_RETURN_LANE         3
#define SW_1000_ADV_STAR            4
#define SW_CREDIT_BUTTON            5
#define SW_TILT                     6
#define SW_OUTHOLE                  7
#define SW_COIN_3                   8
#define SW_COIN_1                   9
#define SW_COIN_2                   10
#define SW_DT4_UPPER_TARGET         11
#define SW_SPIN_TARGET              14
#define SW_SLAM_TILT                15
#define SW_ROLLOVER_BUTTON          16
#define SW_1000_ADV_BONUS           17
#define SW_10_POINTS                18
#define SW_DT4_UPPER_MID            19

#define SW_DT3_MID                  20
#define SW_Z_TARGET                 21
#define SW_X_TARGET                 22
#define SW_Y_TARGET                 23
#define SW_DT4_LOWER_MID            27
#define SW_DT3_LOWER                28
#define SW_ROLLOVER_STAR            31
#define SW_LOWER_THUMPER            32
#define SW_RIGHT_THUMPER            33
#define SW_LEFT_THUMPER             34
#define SW_DT4_LOWER                35
#define SW_DT3_UPPER                36
#define SW_RIGHT_SLING              37
#define SW_LEFT_SLING               38
#define SW_EJECT_POCKET             39

#define SOL_DT3_RESET               4
#define SOL_KNOCKER                 5
#define SOL_OUTHOLE                 6
#define SOL_EJECT_POCKET            8
#define SOL_DT4_RESET               9
#define SOL_LEFT_THUMPER            10
#define SOL_RIGHT_THUMPER           11
#define SOL_LOWER_THUMPER           12
#define SOL_RIGHT_SLING             13
#define SOL_LEFT_SLING              14

#define SOL_FLIPPERS                16
#define SOL_COIN_LOCKOUT            19

#if (RPU_MPU_ARCHITECTURE<10)
// Machines with a -17, -35, 100, and 200 architecture
// almost always have software based switch-triggered solenoids. 
// For those, you can define an array of solenoids and the switches
// that will trigger them:

#define NUM_SWITCHES_WITH_TRIGGERS          5 // total number of solenoid/switch pairs
#define NUM_PRIORITY_SWITCHES_WITH_TRIGGERS 5 // This number should match the define above

struct PlayfieldAndCabinetSwitch SolenoidAssociatedSwitches[] = {
  { SW_RIGHT_SLING, SOL_RIGHT_SLING, 4},
  { SW_LEFT_SLING, SOL_LEFT_SLING, 4},
  { SW_RIGHT_THUMPER, SOL_RIGHT_THUMPER, 4},
  { SW_LEFT_THUMPER, SOL_LEFT_THUMPER, 4},
  { SW_LOWER_THUMPER, SOL_LOWER_THUMPER, 4}
};
#endif
