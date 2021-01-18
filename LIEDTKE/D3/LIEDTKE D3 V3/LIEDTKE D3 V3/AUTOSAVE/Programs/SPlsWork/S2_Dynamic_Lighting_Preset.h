#ifndef __S2_DYNAMIC_LIGHTING_PRESET_H__
#define __S2_DYNAMIC_LIGHTING_PRESET_H__



/*
* STRUCTURE S2_Dynamic_Lighting_Preset__LOAD_SETTING
*/
START_STRUCTURE_DEFINITION( S2_Dynamic_Lighting_Preset, LOAD_SETTING )
{
   unsigned short LOAD_SETTING__LOADID;
   unsigned short LOAD_SETTING__LOADEXCLUDED;
   unsigned short LOAD_SETTING__PARENTRMID;
   unsigned long LOAD_SETTING__LRAMPID;
   short LOAD_SETTING__DIMMABLE;
   long LOAD_SETTING__LLEVEL;
};


/*
* Constructor and Destructor
*/
int S2_Dynamic_Lighting_Preset_LOAD_SETTING_Constructor ( START_STRUCTURE_DEFINITION( S2_Dynamic_Lighting_Preset, LOAD_SETTING ) * me, int nVerbose );
int S2_Dynamic_Lighting_Preset_LOAD_SETTING_Destructor ( START_STRUCTURE_DEFINITION( S2_Dynamic_Lighting_Preset, LOAD_SETTING ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_Dynamic_Lighting_Preset_RECALL_DIG_INPUT 0
#define __S2_Dynamic_Lighting_Preset_FAST_RECALL_DIG_INPUT 1
#define __S2_Dynamic_Lighting_Preset_FADE_OFF_DIG_INPUT 2
#define __S2_Dynamic_Lighting_Preset_FAST_OFF_DIG_INPUT 3
#define __S2_Dynamic_Lighting_Preset_SAVE_DIG_INPUT 4
#define __S2_Dynamic_Lighting_Preset_REVERT_DIG_INPUT 5
#define __S2_Dynamic_Lighting_Preset_UPDATE_FB_DIG_INPUT 6
#define __S2_Dynamic_Lighting_Preset_PRESET_BUSY_DIG_INPUT 7


/*
* ANALOG_INPUT
*/

#define __S2_Dynamic_Lighting_Preset_PATH$_STRING_INPUT 1
#define __S2_Dynamic_Lighting_Preset_PATH$_STRING_MAX_LEN 64
CREATE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __PATH$, __S2_Dynamic_Lighting_Preset_PATH$_STRING_MAX_LEN );

#define __S2_Dynamic_Lighting_Preset_COMMAND$_BUFFER_INPUT 0
#define __S2_Dynamic_Lighting_Preset_COMMAND$_BUFFER_MAX_LEN 512
CREATE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __COMMAND$, __S2_Dynamic_Lighting_Preset_COMMAND$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Dynamic_Lighting_Preset_ANY_ON_FB_DIG_OUTPUT 0
#define __S2_Dynamic_Lighting_Preset_ALL_ON_FB_DIG_OUTPUT 1
#define __S2_Dynamic_Lighting_Preset_AT_SCENE_FB_DIG_OUTPUT 2
#define __S2_Dynamic_Lighting_Preset_RAISE_LOADS_DIG_OUTPUT 3
#define __S2_Dynamic_Lighting_Preset_LOWER_LOADS_DIG_OUTPUT 4
#define __S2_Dynamic_Lighting_Preset_BUSY_FB_DIG_OUTPUT 5
#define __S2_Dynamic_Lighting_Preset_RECALLING_SCENE_DIG_OUTPUT 6
#define __S2_Dynamic_Lighting_Preset_TURNING_OFF_SCENE_DIG_OUTPUT 7
#define __S2_Dynamic_Lighting_Preset_RECALL_OK_DIG_OUTPUT 8
#define __S2_Dynamic_Lighting_Preset_SAVE_OK_DIG_OUTPUT 9
#define __S2_Dynamic_Lighting_Preset_SAVE_ERROR_DIG_OUTPUT 10
#define __S2_Dynamic_Lighting_Preset_REVERT_OK_DIG_OUTPUT 11
#define __S2_Dynamic_Lighting_Preset_REVERT_ERROR_DIG_OUTPUT 12
#define __S2_Dynamic_Lighting_Preset_ENABLE_BUFFER_DIG_OUTPUT 13
#define __S2_Dynamic_Lighting_Preset_FIRE_RAMP_DIG_OUTPUT 14

#define __S2_Dynamic_Lighting_Preset_LOAD_IN_SCENE_DIG_OUTPUT 15
#define __S2_Dynamic_Lighting_Preset_LOAD_IN_SCENE_ARRAY_LENGTH 500

/*
* ANALOG_OUTPUT
*/
#define __S2_Dynamic_Lighting_Preset_RESPONSEID_ANALOG_OUTPUT 1
#define __S2_Dynamic_Lighting_Preset_UPPERWORDFADETIME_ANALOG_OUTPUT 2
#define __S2_Dynamic_Lighting_Preset_LOWERWORDFADETIME_ANALOG_OUTPUT 3

#define __S2_Dynamic_Lighting_Preset_RESPONSE$_STRING_OUTPUT 0

#define __S2_Dynamic_Lighting_Preset_TARGET_LEVELS_ANALOG_OUTPUT 4
#define __S2_Dynamic_Lighting_Preset_TARGET_LEVELS_ARRAY_LENGTH 500
#define __S2_Dynamic_Lighting_Preset_CURRENT_LEVELS_ANALOG_OUTPUT 504
#define __S2_Dynamic_Lighting_Preset_CURRENT_LEVELS_ARRAY_LENGTH 500

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
#define __S2_Dynamic_Lighting_Preset_SCENE_ID_LONG_INTEGER_PARAMETER 10
#define __S2_Dynamic_Lighting_Preset_FADE_TIME_LONG_INTEGER_PARAMETER 11
#define __S2_Dynamic_Lighting_Preset_OFF_TIME_LONG_INTEGER_PARAMETER 12
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/
#define __S2_Dynamic_Lighting_Preset_LOAD_PROPERTY_STRING_PARAMETER 13
#define __S2_Dynamic_Lighting_Preset_LOAD_PROPERTY_ARRAY_NUM_ELEMS 500
#define __S2_Dynamic_Lighting_Preset_LOAD_PROPERTY_ARRAY_NUM_CHARS 25
CREATE_STRING_ARRAY( S2_Dynamic_Lighting_Preset, __LOAD_PROPERTY, __S2_Dynamic_Lighting_Preset_LOAD_PROPERTY_ARRAY_NUM_ELEMS, __S2_Dynamic_Lighting_Preset_LOAD_PROPERTY_ARRAY_NUM_CHARS );


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Dynamic_Lighting_Preset_G_OLDSCENEFILENAME$_STRING_MAX_LEN 96
CREATE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_OLDSCENEFILENAME$, __S2_Dynamic_Lighting_Preset_G_OLDSCENEFILENAME$_STRING_MAX_LEN );
#define __S2_Dynamic_Lighting_Preset_G_SCENEFILENAME$_STRING_MAX_LEN 96
CREATE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_SCENEFILENAME$, __S2_Dynamic_Lighting_Preset_G_SCENEFILENAME$_STRING_MAX_LEN );
#define __S2_Dynamic_Lighting_Preset_G_LOADS_FILE$_STRING_MAX_LEN 96
CREATE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_LOADS_FILE$, __S2_Dynamic_Lighting_Preset_G_LOADS_FILE$_STRING_MAX_LEN );
#define __S2_Dynamic_Lighting_Preset_G_SCENENAME_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_SCENENAME, __S2_Dynamic_Lighting_Preset_G_SCENENAME_STRING_MAX_LEN );
#define __S2_Dynamic_Lighting_Preset_G_SCENES_FILE$_STRING_MAX_LEN 96
CREATE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_SCENES_FILE$, __S2_Dynamic_Lighting_Preset_G_SCENES_FILE$_STRING_MAX_LEN );
#define __S2_Dynamic_Lighting_Preset_G_LASTSAVEDTIME_STRING_MAX_LEN 8
CREATE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_LASTSAVEDTIME, __S2_Dynamic_Lighting_Preset_G_LASTSAVEDTIME_STRING_MAX_LEN );
#define __S2_Dynamic_Lighting_Preset_G_LASTSAVEDDATE_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_LASTSAVEDDATE, __S2_Dynamic_Lighting_Preset_G_LASTSAVEDDATE_STRING_MAX_LEN );
#define __S2_Dynamic_Lighting_Preset_STOREDCOMMANDSTRING_STRING_MAX_LEN 256
CREATE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __STOREDCOMMANDSTRING, __S2_Dynamic_Lighting_Preset_STOREDCOMMANDSTRING_STRING_MAX_LEN );

/*
* STRUCTURE
*/
#define __S2_Dynamic_Lighting_Preset_LOAD_SETTINGS_STRUCT_MAX_LEN 1
CREATE_STRUCTURE_DYNAMIC_ARRAY( S2_Dynamic_Lighting_Preset, __LOAD_SETTINGS, LOAD_SETTING, __S2_Dynamic_Lighting_Preset_LOAD_SETTINGS_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_Dynamic_Lighting_Preset )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __LOAD_IN_SCENE );
   DECLARE_IO_ARRAY( __TARGET_LEVELS );
   DECLARE_IO_ARRAY( __CURRENT_LEVELS );
   unsigned short __G_TOTAL_LOADS;
   unsigned short __G_ROOMID;
   unsigned short __G_SEMAPHORE;
   unsigned short __G_FAST_RECALLING;
   unsigned short __G_RECALLING;
   unsigned short __G_FAST_OFFING;
   unsigned short __G_OFFING;
   unsigned short __G_COMMAND_HANDLER;
   unsigned short __G_FILE_SEMAPHORE;
   unsigned short __G_FILELOADED;
   unsigned long __G_FADE_TIME;
   unsigned long __G_OFF_TIME;
   DECLARE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_OLDSCENEFILENAME$ );
   DECLARE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_SCENEFILENAME$ );
   DECLARE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_LOADS_FILE$ );
   DECLARE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_SCENENAME );
   DECLARE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_SCENES_FILE$ );
   DECLARE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_LASTSAVEDTIME );
   DECLARE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __G_LASTSAVEDDATE );
   DECLARE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __STOREDCOMMANDSTRING );
   DECLARE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __PATH$ );
   DECLARE_STRING_STRUCT( S2_Dynamic_Lighting_Preset, __COMMAND$ );
   struct FileInfo_s __G_FILEINFO;
   DECLARE_STRUCT_DYNAMIC_ARRAY( S2_Dynamic_Lighting_Preset, __LOAD_SETTINGS );
   DECLARE_STRING_ARRAY( S2_Dynamic_Lighting_Preset, __LOAD_PROPERTY );
};

START_NVRAM_VAR_STRUCT( S2_Dynamic_Lighting_Preset )
{
};



#endif //__S2_DYNAMIC_LIGHTING_PRESET_H__

