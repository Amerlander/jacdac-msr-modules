#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x30bc03c7, "JM SPI bridge v3.5A");

void bridge_init(void);

/*
static const power_config_t pcfg = {
    .pin_fault = PA_4,
    .pin_en = PC_15,
    .pin_pulse = NO_PIN,
};
*/

void app_init_services() {
    bridge_init();
   // power_init(&pcfg);
}
