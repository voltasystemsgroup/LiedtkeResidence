#ifndef __S2_EVENTSKED3_V1_2_0_H__
#define __S2_EVENTSKED3_V1_2_0_H__



/*
* STRUCTURE S2_eventsked3_v1_2_0__EVENTINFO
*/
#define EVENTINFO__S2_eventsked3_v1_2_0_NAME_STRING_MAX_LEN 32
#define EVENTINFO__S2_eventsked3_v1_2_0_SCHEDULEINFO_STRING_MAX_LEN 100
#define EVENTINFO__S2_eventsked3_v1_2_0_LASTMODIFIED_STRING_MAX_LEN 16
#define EVENTINFO__S2_eventsked3_v1_2_0_USERDATA_STRING_MAX_LEN 50
START_STRUCTURE_DEFINITION( S2_eventsked3_v1_2_0, EVENTINFO )
{
   CREATE_STRING_STRUCT( S2_eventsked3_v1_2_0, EVENTINFO__NAME, EVENTINFO__S2_eventsked3_v1_2_0_NAME_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_eventsked3_v1_2_0, EVENTINFO__NAME );
   CREATE_STRING_STRUCT( S2_eventsked3_v1_2_0, EVENTINFO__SCHEDULEINFO, EVENTINFO__S2_eventsked3_v1_2_0_SCHEDULEINFO_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_eventsked3_v1_2_0, EVENTINFO__SCHEDULEINFO );
   CREATE_STRING_STRUCT( S2_eventsked3_v1_2_0, EVENTINFO__LASTMODIFIED, EVENTINFO__S2_eventsked3_v1_2_0_LASTMODIFIED_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_eventsked3_v1_2_0, EVENTINFO__LASTMODIFIED );
   CREATE_STRING_STRUCT( S2_eventsked3_v1_2_0, EVENTINFO__USERDATA, EVENTINFO__S2_eventsked3_v1_2_0_USERDATA_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_eventsked3_v1_2_0, EVENTINFO__USERDATA );
   unsigned short EVENTINFO__TIMEBASE;
   unsigned short EVENTINFO__FREE;
   unsigned short EVENTINFO__SUSPENDED;
   unsigned short EVENTINFO__EVENTTYPE;
   unsigned short EVENTINFO__HIDDENSTATE;
   unsigned short EVENTINFO__READONLY;
   unsigned long EVENTINFO___DATE;
   unsigned long EVENTINFO___STARTDATE;
   unsigned long EVENTINFO___STOPDATE;
   short EVENTINFO___TIME;
};


/*
* Constructor and Destructor
*/
int S2_eventsked3_v1_2_0_EVENTINFO_Constructor ( START_STRUCTURE_DEFINITION( S2_eventsked3_v1_2_0, EVENTINFO ) * me, int nVerbose );
int S2_eventsked3_v1_2_0_EVENTINFO_Destructor ( START_STRUCTURE_DEFINITION( S2_eventsked3_v1_2_0, EVENTINFO ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_eventsked3_v1_2_0_ENABLE_DIG_INPUT 0
#define __S2_eventsked3_v1_2_0_SAVE_EDIT_EVENT_DIG_INPUT 1
#define __S2_eventsked3_v1_2_0_REVERT_EDIT_EVENT_DIG_INPUT 2
#define __S2_eventsked3_v1_2_0_AUTOLOAD_DIG_INPUT 3
#define __S2_eventsked3_v1_2_0_LOAD_DIG_INPUT 4
#define __S2_eventsked3_v1_2_0_SAVE_DIG_INPUT 5
#define __S2_eventsked3_v1_2_0_EDIT_FIRST_EVENT_DIG_INPUT 6
#define __S2_eventsked3_v1_2_0_EDIT_NEXT_EVENT_DIG_INPUT 7
#define __S2_eventsked3_v1_2_0_EDIT_PREV_EVENT_DIG_INPUT 8
#define __S2_eventsked3_v1_2_0_EDIT_LAST_EVENT_DIG_INPUT 9
#define __S2_eventsked3_v1_2_0_HOUR_UP_DIG_INPUT 10
#define __S2_eventsked3_v1_2_0_HOUR_DOWN_DIG_INPUT 11
#define __S2_eventsked3_v1_2_0_MINUTE_UP_DIG_INPUT 12
#define __S2_eventsked3_v1_2_0_MINUTE_DOWN_DIG_INPUT 13
#define __S2_eventsked3_v1_2_0_AM_DIG_INPUT 14
#define __S2_eventsked3_v1_2_0_PM_DIG_INPUT 15
#define __S2_eventsked3_v1_2_0_SUNRISE_DIG_INPUT 16
#define __S2_eventsked3_v1_2_0_SUNSET_DIG_INPUT 17
#define __S2_eventsked3_v1_2_0_START_MONTH_UP_DIG_INPUT 18
#define __S2_eventsked3_v1_2_0_START_DAY_UP_DIG_INPUT 19
#define __S2_eventsked3_v1_2_0_START_YEAR_UP_DIG_INPUT 20
#define __S2_eventsked3_v1_2_0_START_MONTH_DOWN_DIG_INPUT 21
#define __S2_eventsked3_v1_2_0_START_DAY_DOWN_DIG_INPUT 22
#define __S2_eventsked3_v1_2_0_START_YEAR_DOWN_DIG_INPUT 23
#define __S2_eventsked3_v1_2_0_STOP_MONTH_UP_DIG_INPUT 24
#define __S2_eventsked3_v1_2_0_STOP_DAY_UP_DIG_INPUT 25
#define __S2_eventsked3_v1_2_0_STOP_YEAR_UP_DIG_INPUT 26
#define __S2_eventsked3_v1_2_0_STOP_MONTH_DOWN_DIG_INPUT 27
#define __S2_eventsked3_v1_2_0_STOP_DAY_DOWN_DIG_INPUT 28
#define __S2_eventsked3_v1_2_0_STOP_YEAR_DOWN_DIG_INPUT 29
#define __S2_eventsked3_v1_2_0_ANNUAL_ONOFF_DIG_INPUT 30
#define __S2_eventsked3_v1_2_0_SUSPEND_DIG_INPUT 31
#define __S2_eventsked3_v1_2_0_RESUME_DIG_INPUT 32
#define __S2_eventsked3_v1_2_0_EXECUTEMISSEDEVENTS_DIG_INPUT 33
#define __S2_eventsked3_v1_2_0_SUNDAY_ONOFF_DIG_INPUT 34
#define __S2_eventsked3_v1_2_0_MONDAY_ONOFF_DIG_INPUT 35
#define __S2_eventsked3_v1_2_0_TUESDAY_ONOFF_DIG_INPUT 36
#define __S2_eventsked3_v1_2_0_WEDNESDAY_ONOFF_DIG_INPUT 37
#define __S2_eventsked3_v1_2_0_THURSDAY_ONOFF_DIG_INPUT 38
#define __S2_eventsked3_v1_2_0_FRIDAY_ONOFF_DIG_INPUT 39
#define __S2_eventsked3_v1_2_0_SATURDAY_ONOFF_DIG_INPUT 40
#define __S2_eventsked3_v1_2_0_JAN_ONOFF_DIG_INPUT 41
#define __S2_eventsked3_v1_2_0_FEB_ONOFF_DIG_INPUT 42
#define __S2_eventsked3_v1_2_0_MAR_ONOFF_DIG_INPUT 43
#define __S2_eventsked3_v1_2_0_APR_ONOFF_DIG_INPUT 44
#define __S2_eventsked3_v1_2_0_MAY_ONOFF_DIG_INPUT 45
#define __S2_eventsked3_v1_2_0_JUN_ONOFF_DIG_INPUT 46
#define __S2_eventsked3_v1_2_0_JUL_ONOFF_DIG_INPUT 47
#define __S2_eventsked3_v1_2_0_AUG_ONOFF_DIG_INPUT 48
#define __S2_eventsked3_v1_2_0_SEP_ONOFF_DIG_INPUT 49
#define __S2_eventsked3_v1_2_0_OCT_ONOFF_DIG_INPUT 50
#define __S2_eventsked3_v1_2_0_NOV_ONOFF_DIG_INPUT 51
#define __S2_eventsked3_v1_2_0_DEC_ONOFF_DIG_INPUT 52
#define __S2_eventsked3_v1_2_0_CHANGEPERIODICTYPE_DIG_INPUT 53
#define __S2_eventsked3_v1_2_0_INCREASEPERIOD_DIG_INPUT 54
#define __S2_eventsked3_v1_2_0_DECREASEPERIOD_DIG_INPUT 55
#define __S2_eventsked3_v1_2_0_ADDDATE_DIG_INPUT 56
#define __S2_eventsked3_v1_2_0_BYDATEMONTHUP_DIG_INPUT 57
#define __S2_eventsked3_v1_2_0_BYDATEMONTHDOWN_DIG_INPUT 58
#define __S2_eventsked3_v1_2_0_BYDATEDAYUP_DIG_INPUT 59
#define __S2_eventsked3_v1_2_0_BYDATEDAYDOWN_DIG_INPUT 60
#define __S2_eventsked3_v1_2_0_BYDATEYEARUP_DIG_INPUT 61
#define __S2_eventsked3_v1_2_0_BYDATEYEARDOWN_DIG_INPUT 62
#define __S2_eventsked3_v1_2_0_FIRSTDATE_DIG_INPUT 63
#define __S2_eventsked3_v1_2_0_NEXTDATE_DIG_INPUT 64
#define __S2_eventsked3_v1_2_0_PREVDATE_DIG_INPUT 65
#define __S2_eventsked3_v1_2_0_LASTDATE_DIG_INPUT 66
#define __S2_eventsked3_v1_2_0_DELETEDATE_DIG_INPUT 67
#define __S2_eventsked3_v1_2_0_FIREEVENT_DIG_INPUT 68
#define __S2_eventsked3_v1_2_0_LIST_EVENTS_DIG_INPUT 69
#define __S2_eventsked3_v1_2_0_NEWPROGLOADED_DIG_INPUT 70


/*
* ANALOG_INPUT
*/
#define __S2_eventsked3_v1_2_0_EDIT_EVENT_ANALOG_INPUT 1
#define __S2_eventsked3_v1_2_0_MORNING_HOUR_ANALOG_INPUT 2
#define __S2_eventsked3_v1_2_0_MORNING_MIN_ANALOG_INPUT 3
#define __S2_eventsked3_v1_2_0_NIGHT_HOUR_ANALOG_INPUT 4
#define __S2_eventsked3_v1_2_0_NIGHT_MIN_ANALOG_INPUT 5

#define __S2_eventsked3_v1_2_0_CMDEVENTNAME_STRING_INPUT 0
#define __S2_eventsked3_v1_2_0_CMDEVENTNAME_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_eventsked3_v1_2_0, __CMDEVENTNAME, __S2_eventsked3_v1_2_0_CMDEVENTNAME_STRING_MAX_LEN );
#define __S2_eventsked3_v1_2_0_FILENAME$_STRING_INPUT 6
#define __S2_eventsked3_v1_2_0_FILENAME$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_eventsked3_v1_2_0, __FILENAME$, __S2_eventsked3_v1_2_0_FILENAME$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_eventsked3_v1_2_0_READ_ERROR_DIG_OUTPUT 0
#define __S2_eventsked3_v1_2_0_WRITE_ERROR_DIG_OUTPUT 1
#define __S2_eventsked3_v1_2_0_EDIT_EVENT_SUSPENDED_DIG_OUTPUT 2
#define __S2_eventsked3_v1_2_0_EDIT_EVENT_READONLY_DIG_OUTPUT 3
#define __S2_eventsked3_v1_2_0_EDIT_EVENT_ANNUAL_DIG_OUTPUT 4
#define __S2_eventsked3_v1_2_0_SUNDAY_ONOFF_FB_DIG_OUTPUT 5
#define __S2_eventsked3_v1_2_0_MONDAY_ONOFF_FB_DIG_OUTPUT 6
#define __S2_eventsked3_v1_2_0_TUESDAY_ONOFF_FB_DIG_OUTPUT 7
#define __S2_eventsked3_v1_2_0_WEDNESDAY_ONOFF_FB_DIG_OUTPUT 8
#define __S2_eventsked3_v1_2_0_THURSDAY_ONOFF_FB_DIG_OUTPUT 9
#define __S2_eventsked3_v1_2_0_FRIDAY_ONOFF_FB_DIG_OUTPUT 10
#define __S2_eventsked3_v1_2_0_SATURDAY_ONOFF_FB_DIG_OUTPUT 11
#define __S2_eventsked3_v1_2_0_JAN_ONOFF_FB_DIG_OUTPUT 12
#define __S2_eventsked3_v1_2_0_FEB_ONOFF_FB_DIG_OUTPUT 13
#define __S2_eventsked3_v1_2_0_MAR_ONOFF_FB_DIG_OUTPUT 14
#define __S2_eventsked3_v1_2_0_APR_ONOFF_FB_DIG_OUTPUT 15
#define __S2_eventsked3_v1_2_0_MAY_ONOFF_FB_DIG_OUTPUT 16
#define __S2_eventsked3_v1_2_0_JUN_ONOFF_FB_DIG_OUTPUT 17
#define __S2_eventsked3_v1_2_0_JUL_ONOFF_FB_DIG_OUTPUT 18
#define __S2_eventsked3_v1_2_0_AUG_ONOFF_FB_DIG_OUTPUT 19
#define __S2_eventsked3_v1_2_0_SEP_ONOFF_FB_DIG_OUTPUT 20
#define __S2_eventsked3_v1_2_0_OCT_ONOFF_FB_DIG_OUTPUT 21
#define __S2_eventsked3_v1_2_0_NOV_ONOFF_FB_DIG_OUTPUT 22
#define __S2_eventsked3_v1_2_0_DEC_ONOFF_FB_DIG_OUTPUT 23

#define __S2_eventsked3_v1_2_0_EVENT_DUE_DIG_OUTPUT 24
#define __S2_eventsked3_v1_2_0_EVENT_DUE_ARRAY_LENGTH 250

/*
* ANALOG_OUTPUT
*/
#define __S2_eventsked3_v1_2_0_EDIT_EVENT_NUMBER_ANALOG_OUTPUT 3
#define __S2_eventsked3_v1_2_0_EDIT_EVENT_TIMEBASE_ANALOG_OUTPUT 4
#define __S2_eventsked3_v1_2_0_EDIT_EVENT_TYPE_ANALOG_OUTPUT 5
#define __S2_eventsked3_v1_2_0_TOTAL_USED_EVENTS_ANALOG_OUTPUT 6

#define __S2_eventsked3_v1_2_0_EVENT_BYDATE_INFO_STRING_OUTPUT 0
#define __S2_eventsked3_v1_2_0_AADSSCROLLARROW$_STRING_OUTPUT 1
#define __S2_eventsked3_v1_2_0_SCHEDULER_LOG_STRING_OUTPUT 2
#define __S2_eventsked3_v1_2_0_EDIT_EVENT_START$_STRING_OUTPUT 7
#define __S2_eventsked3_v1_2_0_EDIT_EVENT_STOP$_STRING_OUTPUT 8
#define __S2_eventsked3_v1_2_0_EDIT_EVENT_NAME$_STRING_OUTPUT 9
#define __S2_eventsked3_v1_2_0_EDIT_EVENT_TIME$_STRING_OUTPUT 10
#define __S2_eventsked3_v1_2_0_FIRED_EVENT_NAME$_STRING_OUTPUT 11
#define __S2_eventsked3_v1_2_0_PERIODIC_EVENTINFO$_STRING_OUTPUT 12
#define __S2_eventsked3_v1_2_0_BYDATE_EVENTINFO$_STRING_OUTPUT 13


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
CREATE_INTARRAY1D( S2_eventsked3_v1_2_0, __G_IMONTHMASK, 12 );;
CREATE_INTARRAY1D( S2_eventsked3_v1_2_0, __G_IDAYOFWEEKMASK, 6 );;
CREATE_INTARRAY1D( S2_eventsked3_v1_2_0, __G_IDAYSINMONTH, 12 );;


/*
* LONG_INTEGER
*/
CREATE_LONGARRAY1D( S2_eventsked3_v1_2_0, __G_LDATES, 100 );;


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_eventsked3_v1_2_0_G_FILENAME_EVENT_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_eventsked3_v1_2_0, __G_FILENAME_EVENT, __S2_eventsked3_v1_2_0_G_FILENAME_EVENT_STRING_MAX_LEN );
#define __S2_eventsked3_v1_2_0_G_FILENAME_EDIT_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_eventsked3_v1_2_0, __G_FILENAME_EDIT, __S2_eventsked3_v1_2_0_G_FILENAME_EDIT_STRING_MAX_LEN );
#define __S2_eventsked3_v1_2_0_LASTCHECKED_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_eventsked3_v1_2_0, __LASTCHECKED, __S2_eventsked3_v1_2_0_LASTCHECKED_STRING_MAX_LEN );

/*
* STRUCTURE
*/
#define __S2_eventsked3_v1_2_0_G_EVENTS_STRUCT_MAX_LEN 250
CREATE_STRUCTURE_ARRAY( S2_eventsked3_v1_2_0, __G_EVENTS, EVENTINFO, __S2_eventsked3_v1_2_0_G_EVENTS_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_eventsked3_v1_2_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __EVENT_DUE );
   unsigned short __G_IEDITEVENT;
   unsigned short __G_IMAXUSEDEVENT;
   unsigned short __G_IBYDATEINDEX;
   unsigned short __G_IBYDATEMAXINDEX;
   unsigned short __G_IDAYNUM;
   DECLARE_INTARRAY( S2_eventsked3_v1_2_0, __G_IMONTHMASK );
   DECLARE_INTARRAY( S2_eventsked3_v1_2_0, __G_IDAYOFWEEKMASK );
   DECLARE_INTARRAY( S2_eventsked3_v1_2_0, __G_IDAYSINMONTH );
   DECLARE_LONGARRAY( S2_eventsked3_v1_2_0, __G_LDATES );
   DECLARE_STRING_STRUCT( S2_eventsked3_v1_2_0, __G_FILENAME_EVENT );
   DECLARE_STRING_STRUCT( S2_eventsked3_v1_2_0, __G_FILENAME_EDIT );
   DECLARE_STRING_STRUCT( S2_eventsked3_v1_2_0, __CMDEVENTNAME );
   DECLARE_STRING_STRUCT( S2_eventsked3_v1_2_0, __FILENAME$ );
   DECLARE_STRUCT( S2_eventsked3_v1_2_0, EVENTINFO, __G_EDITEVENT );
   struct FileInfo_s __G_FIDATAFILE;
   DECLARE_STRUCT_ARRAY( S2_eventsked3_v1_2_0, __G_EVENTS );
};

START_NVRAM_VAR_STRUCT( S2_eventsked3_v1_2_0 )
{
   DECLARE_STRING_STRUCT( S2_eventsked3_v1_2_0, __LASTCHECKED );
};

DEFINE_WAITEVENT( S2_eventsked3_v1_2_0, SAVEWAIT );


#endif //__S2_EVENTSKED3_V1_2_0_H__

