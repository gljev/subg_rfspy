#ifndef SERIAL_H
#define SERIAL_H

#define SERIAL_DATA_AVAILABLE serial_data_available

extern volatile uint8_t serial_data_available;

void configure_serial();
void serial_tx_byte(uint8_t);
void serial_tx_str(const char *str);
void run_command_from_serial();
uint8_t serial_rx_byte();
uint16_t serial_rx_word();

#endif
