#ifndef __S2_TIMEDATE_DISPLAY_V2_H__
#define __S2_TIMEDATE_DISPLAY_V2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_timedate_display_v2_REPORT_TIMEINFO_DIG_INPUT 0


/*
* ANALOG_INPUT
*/
#define __S2_timedate_display_v2_MORNING_HOUR_ANALOG_INPUT 0
#define __S2_timedate_display_v2_MORNING_MINUTE_ANALOG_INPUT 1
#define __S2_timedate_display_v2_NIGHT_HOUR_ANALOG_INPUT 2
#define __S2_timedate_display_v2_NIGHT_MINUTE_ANALOG_INPUT 3




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_timedate_display_v2_SUNRISE_STRING_OUTPUT 0
#define __S2_timedate_display_v2_SUNSET_STRING_OUTPUT 1


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

START_GLOBAL_VAR_STRUCT( S2_timedate_display_v2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_timedate_display_v2 )
{
};



#endif //__S2_TIMEDATE_DISPLAY_V2_H__

