#include "mqtt.h"
#include "main.h"
#include <stdio.h>

static char atString[256];

// nb_mqtt_open
void nb_mqtt_tc_open(void){
	printf("AT+QMTOPEN=0,\"DN2HGX3J4C.iotcloud.tencentdevices.com\",1883\r\n");
}

//nb_mqtt_connect
void nb_mqtt_tc_connect(void){
	// device_id, username, password
	printf("AT+QMTCONN=0,\"device00\",\"DN2HGX3J4Cdevice00;12010126;VO8NZ;1970364699\",\"91dc0e02b637ba9771d0046da6b16f21b753ec6aaabcb63bc2901ff594c7ae14;hmacsha256\"\r\n");
}

// nb_mqtt_topic_set
void nb_mqtt_tc_topic_set(void){
	printf("AT+QMTPUB=0,1,1,0,\"$thing/up/property/DN2HGX3J4C/device00\"\r\n");
}

// send data
void nb_mqtt_tc_pub_data(int temperature){
	sprintf(atString, "{\"method\":\"report\",\"clientToken\":\"123\",\"timestamp\":1628646783,\"params\":{\"temp\":%d}}\r\n", temperature);
	printf("%s\x1a",atString);
}

// nb reset
void nb_reset(void){
	printf("AT+QRST=1\r\n");
}

// nb exit sleep mode
void nb_exit_sleep(void){
	printf("AT+QSCLK=0\r\n");
}

// test
void tencent_test(void){
	printf("AT\r\n");
	printf("ATI\r\n");
	nb_exit_sleep();
	nb_mqtt_tc_open();
	HAL_Delay(4000);
	nb_mqtt_tc_connect();
	HAL_Delay(4000);
	
	for(int i=1;i<20;i++){
			nb_mqtt_tc_topic_set();
			HAL_Delay(50);
			nb_mqtt_tc_pub_data(i);
			HAL_Delay(50);
		}
}
