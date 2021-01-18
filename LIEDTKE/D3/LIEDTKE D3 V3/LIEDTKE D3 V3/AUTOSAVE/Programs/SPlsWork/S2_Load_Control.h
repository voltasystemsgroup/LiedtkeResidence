#ifndef __S2_LOAD_CONTROL_H__
#define __S2_LOAD_CONTROL_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Load_Control_LOAD_LEVEL_INCREASING_DIG_INPUT 0
#define __S2_Load_Control_LOAD_LEVEL_DECREASING_DIG_INPUT 1
#define __S2_Load_Control_LOAD_LEVEL_RAMPING_DIG_INPUT 2
#define __S2_Load_Control_SUBSCRIPTIONEXPIRED_DIG_INPUT 3


/*
* ANALOG_INPUT
*/

#define __S2_Load_Control_PATH$_STRING_INPUT 1
#define __S2_Load_Control_PATH$_STRING_MAX_LEN 64
CREATE_STRING_STRUCT( S2_Load_Control, __PATH$, __S2_Load_Control_PATH$_STRING_MAX_LEN );

#define __S2_Load_Control_LOAD_CMD$_BUFFER_INPUT 0
#define __S2_Load_Control_LOAD_CMD$_BUFFER_MAX_LEN 512
CREATE_STRING_STRUCT( S2_Load_Control, __LOAD_CMD$, __S2_Load_Control_LOAD_CMD$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Load_Control_RAISELEVEL_DIG_OUTPUT 0
#define __S2_Load_Control_LOWERLEVEL_DIG_OUTPUT 1
#define __S2_Load_Control_LOADSUBSCRIBED_DIG_OUTPUT 2
#define __S2_Load_Control_LOADNOTSUBSCRIBED_DIG_OUTPUT 3


/*
* ANALOG_OUTPUT
*/
#define __S2_Load_Control_SETLEVEL_ANALOG_OUTPUT 0
#define __S2_Load_Control_RESPONSEID_ANALOG_OUTPUT 2

#define __S2_Load_Control_RESPONSE$_STRING_OUTPUT 1


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Load_Control_LOAD_NUMBER_INTEGER_PARAMETER 10
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
#define __S2_Load_Control_G_LOADS_FILE$_STRING_MAX_LEN 96
CREATE_STRING_STRUCT( S2_Load_Control, __G_LOADS_FILE$, __S2_Load_Control_G_LOADS_FILE$_STRING_MAX_LEN );
#define __S2_Load_Control_G_LOADNAME_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Load_Control, __G_LOADNAME, __S2_Load_Control_G_LOADNAME_STRING_MAX_LEN );
#define __S2_Load_Control_G_LASTSAVEDTIME_STRING_MAX_LEN 8
CREATE_STRING_STRUCT( S2_Load_Control, __G_LASTSAVEDTIME, __S2_Load_Control_G_LASTSAVEDTIME_STRING_MAX_LEN );
#define __S2_Load_Control_G_LASTSAVEDDATE_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Load_Control, __G_LASTSAVEDDATE, __S2_Load_Control_G_LASTSAVEDDATE_STRING_MAX_LEN );
#define __S2_Load_Control_STOREDCOMMANDSTRING_STRING_MAX_LEN 256
CREATE_STRING_STRUCT( S2_Load_Control, __STOREDCOMMANDSTRING, __S2_Load_Control_STOREDCOMMANDSTRING_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Load_Control )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __G_LOADID;
   unsigned short __G_DIM_SETTING;
   unsigned short __G_UPPERLIMIT;
   unsigned short __G_LOWERLIMIT;
   unsigned short __G_TOTAL_WATTAGE;
   unsigned short __G_RAMPTIME;
   unsigned short __G_SEMAPHORE;
   unsigned short __G_COMMAND_HANDLER;
   short __G_PARENTRM_ID;
   DECLARE_STRING_STRUCT( S2_Load_Control, __G_LOADS_FILE$ );
   DECLARE_STRING_STRUCT( S2_Load_Control, __G_LOADNAME );
   DECLARE_STRING_STRUCT( S2_Load_Control, __G_LASTSAVEDTIME );
   DECLARE_STRING_STRUCT( S2_Load_Control, __G_LASTSAVEDDATE );
   DECLARE_STRING_STRUCT( S2_Load_Control, __STOREDCOMMANDSTRING );
   DECLARE_STRING_STRUCT( S2_Load_Control, __PATH$ );
   DECLARE_STRING_STRUCT( S2_Load_Control, __LOAD_CMD$ );
   struct FileInfo_s __G_FILEINFO;
};

START_NVRAM_VAR_STRUCT( S2_Load_Control )
{
};



#endif //__S2_LOAD_CONTROL_H__

