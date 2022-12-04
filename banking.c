//
// Created by Хумай Байрамова on 04.12.2022.
//

#include "banking.h"

timestamp_t time = 0;

timestamp_t get_lamport_time() {
    return time;
}

timestamp_t inc_lamport_time() {
    time = time + 1;
}