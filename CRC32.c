#include "CRC32.h"

const static uint32 ulCRC32_Table[256] = CRC32_0x04C11DB7;
const static uint32 ulCRC32_InitialValue = 0xFFFFFFFF;

uint32 crc32(char *pData, uint16 uiLength)
{   
	uint16 uiCRC_Cnt;   
	uint32 ulCRC_Data = ulCRC32_InitialValue;    
	
	printf("0x%02x\n",ulCRC32_Table[1]);   
 
	for(uiCRC_Cnt = 0; uiCRC_Cnt < uiLength; uiCRC_Cnt++)
	{
    	ulCRC_Data = (ulCRC_Data << 8) ^ ulCRC32_Table[((ulCRC_Data >> 24) ^ *pData++) & 0xFF];
	}
	
	
	return ulCRC_Data;
}
