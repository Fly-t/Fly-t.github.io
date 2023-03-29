#ifndef MQTT_TENCENT_H
#define MQTT_TENCENT_H



// nb_mqtt_open
void nb_mqtt_tc_open(void);

//nb_mqtt_connect
void nb_mqtt_tc_connect(void);

// nb_mqtt_topic_set
void nb_mqtt_tc_topic_set(void);

// send data
void nb_mqtt_tc_pub_data(int temperature);

// test
void tencent_test(void);

// nb reset
void nb_reset(void);

// nb exit sleep mode
void nb_exit_sleep(void);


#endif /*MQTT_TENCENT_H */
