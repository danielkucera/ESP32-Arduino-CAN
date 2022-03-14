#include "ESP32CAN.h"

int ESP32CAN::CANInit()
{
    return CAN_init();
}
int ESP32CAN::CANWriteFrame(const CAN_frame_t* p_frame)
{
    return CAN_write_frame(p_frame, 1000000);
}
int ESP32CAN::CANWriteFrame(const CAN_frame_t* p_frame, unsigned long timeoutUs)
{
    return CAN_write_frame(p_frame, timeoutUs);
}
int ESP32CAN::CANStop()
{
    return CAN_stop();
}
int ESP32CAN::CANConfigFilter(const CAN_filter_t* p_filter)
{
    return CAN_config_filter(p_filter);
}

int ESP32CAN::CANOverrunCounter()
{
    return data_overrun_counter;
}

ESP32CAN ESP32Can;
