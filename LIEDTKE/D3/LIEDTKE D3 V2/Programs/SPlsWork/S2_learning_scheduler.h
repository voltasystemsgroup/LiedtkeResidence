#ifndef __S2_LEARNING_SCHEDULER_H__
#define __S2_LEARNING_SCHEDULER_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_learning_scheduler_INITONETIME_DIG_INPUT 0
#define __S2_learning_scheduler_STARTRECORDING_DIG_INPUT 1
#define __S2_learning_scheduler_STARTPLAYBACK_DIG_INPUT 2
#define __S2_learning_scheduler_STOP_DIG_INPUT 3
#define __S2_learning_scheduler_RECORD2WKPERIOD_DIG_INPUT 4
#define __S2_learning_scheduler_DONTCOPYDATAFROMSAVEDFILE_DIG_INPUT 5
#define __S2_learning_scheduler_VARYPLAYBACK_DIG_INPUT 6

#define __S2_learning_scheduler_SWITCHEDLEVELS_DIG_INPUT 7
#define __S2_learning_scheduler_SWITCHEDLEVELS_ARRAY_LENGTH 500

/*
* ANALOG_INPUT
*/
#define __S2_learning_scheduler_RECORDINGINTERVALINMINUTES_ANALOG_INPUT 1

#define __S2_learning_scheduler_PATH$_STRING_INPUT 0
#define __S2_learning_scheduler_PATH$_STRING_MAX_LEN 128
CREATE_STRING_STRUCT( S2_learning_scheduler, __PATH$, __S2_learning_scheduler_PATH$_STRING_MAX_LEN );


#define __S2_learning_scheduler_DIMLEVELS_ANALOG_INPUT 2
#define __S2_learning_scheduler_DIMLEVELS_ARRAY_LENGTH 500

/*
* DIGITAL_OUTPUT
*/

#define __S2_learning_scheduler_PLAYBACKSWITCHEDLEVELS_DIG_OUTPUT 0
#define __S2_learning_scheduler_PLAYBACKSWITCHEDLEVELS_ARRAY_LENGTH 500

/*
* ANALOG_OUTPUT
*/
#define __S2_learning_scheduler_CURRENT_MODE_ANALOG_OUTPUT 0


#define __S2_learning_scheduler_PLAYBACKDIMLEVELS_ANALOG_OUTPUT 1
#define __S2_learning_scheduler_PLAYBACKDIMLEVELS_ARRAY_LENGTH 500

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_learning_scheduler_SCALEBACKFACTOR_INTEGER_PARAMETER 10
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
CREATE_SIGNED_LONGARRAY1D( S2_learning_scheduler, __G_LDIMLEVELSTOPLAYBACK, 500 );;
CREATE_SIGNED_LONGARRAY1D( S2_learning_scheduler, __G_LSWITCHEDLEVELSTOPLAYBACK, 500 );;


/*
* STRING
*/
#define __S2_learning_scheduler_G_STEMPFILENAME_STRING_MAX_LEN 128
CREATE_STRING_STRUCT( S2_learning_scheduler, __G_STEMPFILENAME, __S2_learning_scheduler_G_STEMPFILENAME_STRING_MAX_LEN );
#define __S2_learning_scheduler_G_SPERMANENTFILENAME_STRING_MAX_LEN 128
CREATE_STRING_STRUCT( S2_learning_scheduler, __G_SPERMANENTFILENAME, __S2_learning_scheduler_G_SPERMANENTFILENAME_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_learning_scheduler )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SWITCHEDLEVELS );
   DECLARE_IO_ARRAY( __PLAYBACKSWITCHEDLEVELS );
   DECLARE_IO_ARRAY( __DIMLEVELS );
   DECLARE_IO_ARRAY( __PLAYBACKDIMLEVELS );
   unsigned short __G_IFILEOPERATIONS;
   unsigned short __G_BINITIALIZING;
   DECLARE_STRING_STRUCT( S2_learning_scheduler, __PATH$ );
};

START_NVRAM_VAR_STRUCT( S2_learning_scheduler )
{
   DECLARE_STRING_STRUCT( S2_learning_scheduler, __G_STEMPFILENAME );
   DECLARE_STRING_STRUCT( S2_learning_scheduler, __G_SPERMANENTFILENAME );
   unsigned short __G_IDAYOFCYCLEBEINGRECORDED;
   unsigned short __G_IDAYOFCYCLEBEINGPLAYEDBACK;
   unsigned short __G_SEMAPHORE;
   unsigned short __G_ISAVEDRECORDINGINTERVALINMINUTES;
   unsigned short __G_INUMBEROFDIMCKTS;
   unsigned short __G_INUMBEROFSWITCHEDCKTS;
   unsigned short __G_ITIMEWHENRECORDED;
   unsigned short __G_ITIMETOPLAYBACK;
   unsigned short __G_INEXTPLAYBACKSOURCE;
   unsigned long __G_LPERMANENTFILEPOSITION;
   unsigned long __G_LZEROLONG;
   short __G_IENTERMODE;
   DECLARE_SIGNED_LONGARRAY( S2_learning_scheduler, __G_LDIMLEVELSTOPLAYBACK );
   DECLARE_SIGNED_LONGARRAY( S2_learning_scheduler, __G_LSWITCHEDLEVELSTOPLAYBACK );
};



#endif //__S2_LEARNING_SCHEDULER_H__

