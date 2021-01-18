#ifndef __S2_SERIAL_PROTOCOL_H__
#define __S2_SERIAL_PROTOCOL_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_Serial_Protocol_PATH$_STRING_INPUT 0
#define __S2_Serial_Protocol_PATH$_STRING_MAX_LEN 64
CREATE_STRING_STRUCT( S2_Serial_Protocol, __PATH$, __S2_Serial_Protocol_PATH$_STRING_MAX_LEN );


#define __S2_Serial_Protocol_COMMANDRX$_BUFFER_INPUT 1
#define __S2_Serial_Protocol_COMMANDRX$_ARRAY_NUM_ELEMS 10
#define __S2_Serial_Protocol_COMMANDRX$_ARRAY_NUM_CHARS 768
CREATE_STRING_ARRAY( S2_Serial_Protocol, __COMMANDRX$, __S2_Serial_Protocol_COMMANDRX$_ARRAY_NUM_ELEMS, __S2_Serial_Protocol_COMMANDRX$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_Serial_Protocol_COMMANDTX$_STRING_OUTPUT 0
#define __S2_Serial_Protocol_COMMANDTX$_ARRAY_LENGTH 10
#define __S2_Serial_Protocol_ROUTETOLOADS_STRING_OUTPUT 10
#define __S2_Serial_Protocol_ROUTETOLOADS_ARRAY_LENGTH 500
#define __S2_Serial_Protocol_ROUTETOSCENES_STRING_OUTPUT 510
#define __S2_Serial_Protocol_ROUTETOSCENES_ARRAY_LENGTH 500

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
#define __S2_Serial_Protocol_STOREDCOMMANDSTRING_STRING_MAX_LEN 256
CREATE_STRING_STRUCT( S2_Serial_Protocol, __STOREDCOMMANDSTRING, __S2_Serial_Protocol_STOREDCOMMANDSTRING_STRING_MAX_LEN );
#define __S2_Serial_Protocol_G_LOADS_FILE$_STRING_MAX_LEN 96
CREATE_STRING_STRUCT( S2_Serial_Protocol, __G_LOADS_FILE$, __S2_Serial_Protocol_G_LOADS_FILE$_STRING_MAX_LEN );
#define __S2_Serial_Protocol_G_ROOM_FILE$_STRING_MAX_LEN 96
CREATE_STRING_STRUCT( S2_Serial_Protocol, __G_ROOM_FILE$, __S2_Serial_Protocol_G_ROOM_FILE$_STRING_MAX_LEN );
#define __S2_Serial_Protocol_G_SCENE_FILE$_STRING_MAX_LEN 96
CREATE_STRING_STRUCT( S2_Serial_Protocol, __G_SCENE_FILE$, __S2_Serial_Protocol_G_SCENE_FILE$_STRING_MAX_LEN );
#define __S2_Serial_Protocol_G_AREA_FILE$_STRING_MAX_LEN 96
CREATE_STRING_STRUCT( S2_Serial_Protocol, __G_AREA_FILE$, __S2_Serial_Protocol_G_AREA_FILE$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Serial_Protocol )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __COMMANDTX$ );
   DECLARE_IO_ARRAY( __ROUTETOLOADS );
   DECLARE_IO_ARRAY( __ROUTETOSCENES );
   unsigned short __G_COMMAND_HANDLER;
   unsigned short __G_CURRENTSCENECOUNT;
   DECLARE_STRING_STRUCT( S2_Serial_Protocol, __STOREDCOMMANDSTRING );
   DECLARE_STRING_STRUCT( S2_Serial_Protocol, __G_LOADS_FILE$ );
   DECLARE_STRING_STRUCT( S2_Serial_Protocol, __G_ROOM_FILE$ );
   DECLARE_STRING_STRUCT( S2_Serial_Protocol, __G_SCENE_FILE$ );
   DECLARE_STRING_STRUCT( S2_Serial_Protocol, __G_AREA_FILE$ );
   DECLARE_STRING_STRUCT( S2_Serial_Protocol, __PATH$ );
   DECLARE_STRING_ARRAY( S2_Serial_Protocol, __COMMANDRX$ );
};

START_NVRAM_VAR_STRUCT( S2_Serial_Protocol )
{
};



#endif //__S2_SERIAL_PROTOCOL_H__

