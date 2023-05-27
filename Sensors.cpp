#pragma once
#include "Sensors.h"

struct Databus;

TemperatureSensor::TemperatureSensor() {
	powerconsumption = 0;
	data = 0;
}

float TemperatureSensor::send() {
	return data;
}

WaterSensor::WaterSensor() {
	powerconsumption = 0.2;
	data = 19.5;
}

AirSensor::AirSensor() {
	powerconsumption = 0.3;
	data = 23.7;
}

FloorSensor::FloorSensor() {
	powerconsumption = 0.2;
	data = 26;
}


HumiditySensor::HumiditySensor() {
	powerconsumption = 0.1;
	data = 54;
}

int HumiditySensor::send() {
	return data;
}

void set(TemperatureSensor& s, float value) {
	if (value > 40) return;
	s.data = value;
}

void set(HumiditySensor& s, int value) {
	if (value > 100) return;
	s.data = value;
}

void add(TemperatureSensor& s, float value) {
	if (s.data + value < 40 && s.data + value > 0) s.data += value;
}

void add(HumiditySensor& s, float value) {
	if (s.data + value < 100 && s.data + value > 0) s.data += value;
}

