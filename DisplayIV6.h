#include "DisplayBase.h"
#include "binary.h"

class DisplayIV6 : public DisplayBase
{
    const int digits = 6;
    const int GPIO_Data = 13;
    const int GPIO_Clock = 14;
    const int GPIO_Latch = 15;

    const char TubeDigit[10] = {
        B11111100, // 0
        B01100000, // 1
        B11011010, // 2
        B11110010, // 3
        B01100110, // 4
        B10110110, // 5
        B10111110, // 6
        B11100000, // 7
        B11111110, // 8
        B11110110  // 9
    };

public:
    bool Initialize();
    void ShiftCurrentTimeFull(int hour, int minute, int second, bool displayZeroFirstDigit);
    void ShiftCurrentTime(int hour, int minute, int second, bool displayZeroFirstDigit);
    void ShiftRaw(char data[]);
    void ShiftBlank();
};