#ifndef __S2_TMSG2_H__
#define __S2_TMSG2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_tmsg2_TIMESTAMP_DIG_INPUT 0
#define __S2_tmsg2_DATESTAMP_DIG_INPUT 1


/*
* ANALOG_INPUT
*/

#define __S2_tmsg2_MESSAGE$_STRING_INPUT 0
#define __S2_tmsg2_MESSAGE$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_tmsg2, __MESSAGE$, __S2_tmsg2_MESSAGE$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/



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

START_GLOBAL_VAR_STRUCT( S2_tmsg2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_tmsg2, __MESSAGE$ );
};

START_NVRAM_VAR_STRUCT( S2_tmsg2 )
{
};



#endif //__S2_TMSG2_H__

