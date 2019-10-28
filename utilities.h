#pragma once

#include "uart_frame_struct.h"
#include "crc32.h"
#include <cmath>
#include <assert.h>
#include <windows.h> // for Sleep
#include "crc32.h"

void convertFrameTableToUartStruct(const uint8_t frameTable[], UARTFrameStruct_t & frameStructure);
void convertUartStructToFrameTable(const UARTFrameStruct_t & frameStructure, uint8_t frameTable[]);
uint32_t calculateCrc32 (char *data, int len);
void appendCrcToFrame(uint8_t frame[]);
