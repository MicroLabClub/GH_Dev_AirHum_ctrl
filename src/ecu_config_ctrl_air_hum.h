#ifndef ECU_CONFIG_CTRL_AIR_HUM_H_
#define ECU_CONFIG_CTRL_AIR_HUM_H_

#define USE_CTRL_AIR_HUM
#define USE_OS_SEQ_TASK
#define USE_SRV_UI_SERIAL
#define USE_SRV_COM_MQTT
#define USE_DD_VALVE
#define USE_ED_RELAY
#define USE_SRV_SNS_AIR_HUM
#define USE_ED_DHT


#define CTRL_AIR_HUM_REC (20 * TIME_SEC)
#define CTRL_AIR_HUM_OFFSET 20

#define TERMINAL_IN_REC (1 / SYS_TICK)
#define TERMINAL_IN_OFFSET 4

#define TERMINAL_OUT_REC (2 * TIME_SEC)
#define TERMINAL_OUT_OFFSET 5

#define SRV_COM_MQTT_REC (10* TIME_SEC)
#define SRV_COM_MQTT_OFFSET (5* TIME_SEC)

#define ED_DHT_REC (100 / SYS_TICK)
#define ED_DHT_OFFSET 2

#define SRV_SNS_AIR_TEMP_REC (TIME_SEC/10)
#define SRV_SNS_AIR_TEMP_OFFSET 50

#define DD_VALVE_REC (100 / SYS_TICK)  
#define DD_VALVE_OFFSET 14

#define ED_RELAY_REC (100 / SYS_TICK)
#define ED_RELAY_OFFSET 5


#define DD_HUM_OP_D_TIME (4 * TIME_SEC / DD_VALVE_REC)
#define AIR_HUM_HISTERESIS (0.5)
#define HUM_DEFAULT (10.0) 

#define ED_RELAY_4_PIN 2 //GPIO4


#endif