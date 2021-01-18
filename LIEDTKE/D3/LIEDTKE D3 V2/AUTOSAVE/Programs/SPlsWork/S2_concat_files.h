#ifndef __S2_CONCAT_FILES_H__
#define __S2_CONCAT_FILES_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_concat_files_CONCAT_DIG_INPUT 0


/*
* ANALOG_INPUT
*/

#define __S2_concat_files_READ_PATH$_STRING_INPUT 0
#define __S2_concat_files_READ_PATH$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_concat_files, __READ_PATH$, __S2_concat_files_READ_PATH$_STRING_MAX_LEN );
#define __S2_concat_files_READ_WILDCARD$_STRING_INPUT 1
#define __S2_concat_files_READ_WILDCARD$_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_concat_files, __READ_WILDCARD$, __S2_concat_files_READ_WILDCARD$_STRING_MAX_LEN );
#define __S2_concat_files_WRITE_FILENAME$_STRING_INPUT 2
#define __S2_concat_files_WRITE_FILENAME$_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_concat_files, __WRITE_FILENAME$, __S2_concat_files_WRITE_FILENAME$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_concat_files_RESPONSE_MSG$_STRING_OUTPUT 0


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

START_GLOBAL_VAR_STRUCT( S2_concat_files )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_concat_files, __READ_PATH$ );
   DECLARE_STRING_STRUCT( S2_concat_files, __READ_WILDCARD$ );
   DECLARE_STRING_STRUCT( S2_concat_files, __WRITE_FILENAME$ );
};

START_NVRAM_VAR_STRUCT( S2_concat_files )
{
};



#endif //__S2_CONCAT_FILES_H__

