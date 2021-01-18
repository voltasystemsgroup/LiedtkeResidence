#ifndef __S2_LOGGING_ENGINE_V1_0_H__
#define __S2_LOGGING_ENGINE_V1_0_H__



/*
* STRUCTURE S2_logging_engine_v1_0__EVENTSTRUCT
*/
#define EVENTSTRUCT__S2_logging_engine_v1_0_DATA_STRING_MAX_LEN 100
START_STRUCTURE_DEFINITION( S2_logging_engine_v1_0, EVENTSTRUCT )
{
   CREATE_STRING_STRUCT( S2_logging_engine_v1_0, EVENTSTRUCT__DATA, EVENTSTRUCT__S2_logging_engine_v1_0_DATA_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_logging_engine_v1_0, EVENTSTRUCT__DATA );
};


/*
* Constructor and Destructor
*/
int S2_logging_engine_v1_0_EVENTSTRUCT_Constructor ( START_STRUCTURE_DEFINITION( S2_logging_engine_v1_0, EVENTSTRUCT ) * me, int nVerbose );
int S2_logging_engine_v1_0_EVENTSTRUCT_Destructor ( START_STRUCTURE_DEFINITION( S2_logging_engine_v1_0, EVENTSTRUCT ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_logging_engine_v1_0_SCHEDSTARTLOG_DIG_INPUT 0
#define __S2_logging_engine_v1_0_SCHEDSTOPLOG_DIG_INPUT 1
#define __S2_logging_engine_v1_0_EXEC_CMD_DIG_INPUT 2
#define __S2_logging_engine_v1_0_NEWPROGLOAD_DIG_INPUT 3


/*
* ANALOG_INPUT
*/

#define __S2_logging_engine_v1_0_PATH$_STRING_INPUT 0
#define __S2_logging_engine_v1_0_PATH$_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_logging_engine_v1_0, __PATH$, __S2_logging_engine_v1_0_PATH$_STRING_MAX_LEN );
#define __S2_logging_engine_v1_0_CMD_ARGS_STRING_INPUT 1
#define __S2_logging_engine_v1_0_CMD_ARGS_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_logging_engine_v1_0, __CMD_ARGS, __S2_logging_engine_v1_0_CMD_ARGS_STRING_MAX_LEN );
#define __S2_logging_engine_v1_0_LOGEVENT_STRING_INPUT 2
#define __S2_logging_engine_v1_0_LOGEVENT_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_logging_engine_v1_0, __LOGEVENT, __S2_logging_engine_v1_0_LOGEVENT_STRING_MAX_LEN );

#define __S2_logging_engine_v1_0_DISKSPACE_BUFFER_INPUT 3
#define __S2_logging_engine_v1_0_DISKSPACE_BUFFER_MAX_LEN 250
CREATE_STRING_STRUCT( S2_logging_engine_v1_0, __DISKSPACE, __S2_logging_engine_v1_0_DISKSPACE_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_logging_engine_v1_0_SCHEDULER_LOGSTATE_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_logging_engine_v1_0_DISKCOMMAND_STRING_OUTPUT 0


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
#define __S2_logging_engine_v1_0_G_FILENAME_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_logging_engine_v1_0, __G_FILENAME, __S2_logging_engine_v1_0_G_FILENAME_STRING_MAX_LEN );
#define __S2_logging_engine_v1_0_G_ARCHIVEFILE_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_logging_engine_v1_0, __G_ARCHIVEFILE, __S2_logging_engine_v1_0_G_ARCHIVEFILE_STRING_MAX_LEN );

/*
* STRUCTURE
*/
#define __S2_logging_engine_v1_0_G_LOGDATA_STRUCT_MAX_LEN 50
CREATE_STRUCTURE_ARRAY( S2_logging_engine_v1_0, __G_LOGDATA, EVENTSTRUCT, __S2_logging_engine_v1_0_G_LOGDATA_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_logging_engine_v1_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_logging_engine_v1_0, __PATH$ );
   DECLARE_STRING_STRUCT( S2_logging_engine_v1_0, __CMD_ARGS );
   DECLARE_STRING_STRUCT( S2_logging_engine_v1_0, __LOGEVENT );
   DECLARE_STRING_STRUCT( S2_logging_engine_v1_0, __DISKSPACE );
};

START_NVRAM_VAR_STRUCT( S2_logging_engine_v1_0 )
{
   DECLARE_STRING_STRUCT( S2_logging_engine_v1_0, __G_FILENAME );
   DECLARE_STRING_STRUCT( S2_logging_engine_v1_0, __G_ARCHIVEFILE );
   unsigned short __LOGSTATE;
   unsigned short __G_INEXTLOGINDEX;
   unsigned short __G_BLOGOVERFLOW;
   DECLARE_STRUCT_ARRAY( S2_logging_engine_v1_0, __G_LOGDATA );
};

DEFINE_WAITEVENT( S2_logging_engine_v1_0, FILEWAIT );


#endif //__S2_LOGGING_ENGINE_V1_0_H__

