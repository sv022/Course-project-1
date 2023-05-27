#pragma once
#include <math.h>

struct DataBus;

class TemperatureSensor { // base class
public:
	TemperatureSensor();
	float send();
	friend void set(TemperatureSensor&, float);
	friend void add(TemperatureSensor&, float);

protected:
	float powerconsumption; // W
	float data;
};

class WaterSensor : public TemperatureSensor {
public:
	WaterSensor();
	friend float powercost(DataBus);
};

class AirSensor : public TemperatureSensor {
public:
	AirSensor();
	friend float powercost(DataBus);
};

class FloorSensor : public TemperatureSensor {
public:
	FloorSensor();
	friend float powercost(DataBus);
};

class HumiditySensor {
public:
	HumiditySensor();
	int send();
	friend void set(HumiditySensor&, int);
	friend void add(HumiditySensor&, float);
	friend float powercost(DataBus);
private:
	float powerconsumption;
	int data;
};


