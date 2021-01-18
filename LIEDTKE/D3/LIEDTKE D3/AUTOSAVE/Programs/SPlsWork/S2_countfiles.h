#ifndef __S2_COUNTFILES_H__
#define __S2_COUNTFILES_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_countfiles_DO_SEARCH_DIG_INPUT 0


/*
* ANALOG_INPUT
*/

#define __S2_countfiles_SEARCH_PATH$_STRING_INPUT 0
#define __S2_countfiles_SEARCH_PATH$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_countfiles, __SEARCH_PATH$, __S2_countfiles_SEARCH_PATH$_STRING_MAX_LEN );
#define __S2_countfiles_FILENAME_SPEC$_STRING_INPUT 1
#define __S2_countfiles_FILENAME_SPEC$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_countfiles, __FILENAME_SPEC$, __S2_countfiles_FILENAME_SPEC$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_countfiles_COUNT_READY_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/
#define __S2_countfiles_FILE_COUNT_ANALOG_OUTPUT 0



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

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_countfiles )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_countfiles, __SEARCH_PATH$ );
   DECLARE_STRING_STRUCT( S2_countfiles, __FILENAME_SPEC$ );
};

START_NVRAM_VAR_STRUCT( S2_countfiles )
{
};



#endif //__S2_COUNTFILES_H__

