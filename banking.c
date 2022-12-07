//
// Created by Хумай Байрамова on 04.12.2022.
//

#include "banking.h"

timestamp_t lamport_time = 0;

timestamp_t get_lamport_time() {
    return lamport_time;
}

void inc_lamport_time() {
    lamport_time = lamport_time + 1;
}

void set_lamport_time(timestamp_t t) {
    lamport_time = t;
}
