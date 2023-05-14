// Here, a define should be made for every lamp on the machine.
// For demonstration, here are some example lamps that are typical
// for different architectures. This section should be deleted
// when implementing a particular machine.

// Delete all these lamp definitions when implementing a particular
// machine. There's a conditional based on architecture here --
// that should be deleted too. It's just here to provide base
// functionality.
#if (RPU_MPU_ARCHITECTURE<10)
// These example lamp definitions come from Supersonic
#define LAMP_HEAD_SAME_PLAYER_SHOOTS_AGAIN  40
#define LAMP_HEAD_MATCH                     41
#define LAMP_SHOOT_AGAIN                    42
#define LAMP_APRON_CREDIT                   43
#define LAMP_HEAD_BIP                       48
#define LAMP_HEAD_HIGH_SCORE                49
#define LAMP_HEAD_GAME_OVER                 50
#define LAMP_HEAD_TILT                      51
#define LAMP_HEAD_1_PLAYER                  52
#define LAMP_HEAD_2_PLAYER                  53
#define LAMP_HEAD_3_PLAYER                  54
#define LAMP_HEAD_4_PLAYER                  55
#define LAMP_HEAD_PLAYER_1_UP               56
#define LAMP_HEAD_PLAYER_2_UP               57
#define LAMP_HEAD_PLAYER_3_UP               58
#define LAMP_HEAD_PLAYER_4_UP               59
#else
// These example lamp definitions come from Stellar Wars
#define LAMP_SHOOT_AGAIN                    0
#define LAMP_HEAD_1_PLAYER                  49
#define LAMP_HEAD_2_PLAYERS                 50
#define LAMP_HEAD_3_PLAYERS                 51
#define LAMP_HEAD_4_PLAYERS                 52
#define LAMP_HEAD_MATCH                     53
#define LAMP_HEAD_BALL_IN_PLAY              54
#define LAMP_APRON_CREDITS                  55
#define LAMP_HEAD_PLAYER_1_UP               56
#define LAMP_HEAD_PLAYER_2_UP               57
#define LAMP_HEAD_PLAYER_3_UP               58
#define LAMP_HEAD_PLAYER_4_UP               59
#define LAMP_HEAD_TILT                      60
#define LAMP_HEAD_GAME_OVER                 61
#define LAMP_HEAD_SAME_PLAYER_SHOOTS_AGAIN  62
#define LAMP_HEAD_HIGH_SCORE                63
#endif


#define SW_RIGHT_OUTLANE            1
#define SW_RIGHT_RETURN_LANE        2
#define SW_LEFT_OUTLANE             3
#define SW_LEFT_RETURN_LANE         4
#define SW_1000_ADV_STAR            5
#define SW_CREDIT_BUTTON            6
#define SW_TILT                     7
#define SW_OUTHOLE                  8
#define SW_COIN_3                   9
#define SW_COIN_1                   10
#define SW_COIN_2                   11
#define SW_DT4_UPPER_TARGET         12
#define SW_SPIN_TARGET              15
#define SW_SLAM_TILT                16
#define SW_ROLLOVER_BUTTON          17
#define SW_1000_ADV_BONUS           18
#define SW_10_POINTS                19
#define SW_DT4_UPPER_MID            20

#define SW_DT3_MID                  21
#define SW_Z_TARGET                 22
#define SW_X_TARGET                 23
#define SW_Y_TARGET                 24
#define SW_DT4_LOWER_MID            28
#define SW_DT3_LOWER                29
#define SW_ROLLOVER_STAR            32
#define SW_LOWER_THUMPER            33
#define SW_RIGHT_THUMPER            34
#define SW_LEFT_THUMPER             35
#define SW_DT4_LOWER                36
#define SW_DT3_UPPER                37
#define SW_RIGHT_SLING              38
#define SW_LEFT_SLING               39
#define SW_EJECT_POCKET             40

#define SOL_LEFT_THUMPER            7
#define SOL_RIGHT_THUMPER           8
#define SOL_CENTER_THUMPER          9
#define SOL_OUTHOLE                 10
#define SOL_RIGHT_SLING             11
#define SOL_EJECT_POCKET            12
#define SOL_DT3_RESET               13
#define SOL_DT4_RESET               15
#define SOL_LEFT_SLING              16
#define SOL_KNOCKER                 17
#define SOL_FLIPPERS                18
#define SOL_COIN_LOCKOUT            19

#if (RPU_MPU_ARCHITECTURE<10)
// Machines with a -17, -35, 100, and 200 architecture
// almost always have software based switch-triggered solenoids. 
// For those, you can define an array of solenoids and the switches
// that will trigger them:

#define NUM_SWITCHES_WITH_TRIGGERS          3 // total number of solenoid/switch pairs
#define NUM_PRIORITY_SWITCHES_WITH_TRIGGERS 3 // This number should match the define above

struct PlayfieldAndCabinetSwitch SolenoidAssociatedSwitches[] = {
  { SW_RIGHT_SLING, SOL_RIGHT_SLING, 4},
  { SW_LEFT_SLING, SOL_LEFT_SLING, 4},
  { SW_RIGHT_THUMPER, SOL_RIGHT_THUMPER, 4}
};
#endif
