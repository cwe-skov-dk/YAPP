#ifndef _ANCHOR_WATCHER_2_H
#define _ANCHOR_WATCHER_2_H

#ifndef TRUE
#define TRUE 						1
#endif
#ifndef FALSE
#define FALSE					 	0
#endif

#define SOFTWARE_VERSION_NUMBE		"V1.0"
#define MAX_DATA_AGE				15
#define BACKLIGHT_MAX				3	
#define TOP_BUTTON_SHORT			1
#define TOP_BUTTON_LONG				5
#define KEYPRESS_TIMEOUT			3UL
#define EEPROM_POS_BACKLIGHT		5
#define EEPROM_POS_DISPLAY_TOP		6
#define EEPROM_POS_DISPLAY_BOTTOM	7 
#define M_PI 						3.1416f
#define M_PI_2		 				1.5708f
#define DEGREES_TO_RADIANS 			57.259f

typedef enum
{
	DEPTH,
	APPARENT_WIND,
	HEADING_MAGNETIC,
	HEADING_TRUE,
	COG,
	SOG,
	LATITUDE,
	LONGITUDE,
	LOG,
	TRIP,
	BOATSPEED,
	TEMPERATURE,
	TIME_DATE,
	TRUE_WIND,
	VARIATION,
	BEAR_TO_DEST,
	DIST_TO_DEST,
	TTG,
	VMG,
	BACKLIGHT_0,
	BACKLIGHT_1,	
	BACKLIGHT_2,
	BACKLIGHT_3,
	
	MENU_COUNT
} display_t;

typedef enum
{
	LATITUDE_T,
	LONGITUDE_T
} coord_t;
		
#endif
