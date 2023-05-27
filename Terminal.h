#pragma once
#include <fstream>
#include "Sensors.h"
#include "Vent.h"


struct DataBus {
	WaterSensor watersens;
	AirSensor airsens;
	FloorSensor floorsens;
	HumiditySensor humiditysens;
	Vent ventsystem;
	
};

float powercost(DataBus s) {
	return s.watersens.powerconsumption + s.airsens.powerconsumption + s.floorsens.powerconsumption + s.humiditysens.powerconsumption + s.ventsystem.powerconsumption;
}

class Terminal {
private:
	DataBus* s;

public:

	float autowatertemp;
	float autoairtemp;
	float autofloortemp;
	float autohumidity;

	Terminal(DataBus* s) {
		this->s = s;
		autowatertemp = 19.5;
		autoairtemp = 23.7;
		autofloortemp = 26;
		autohumidity = 54;
	}

	Terminal() {
	}

	void debug(unsigned int cmd) {
		std::ofstream f("output.txt");
		f << cmd;
		f.close();
	}

	int process(unsigned int cmd, double value) {
		value = round(value * 10) / 10;
		if (value <= 0) return -1;
		switch (cmd) {
		// water
		case 1944241167: // set
			set(s->watersens, value);
			return 11;
			break;
		case 1581104260: // add
			add(s->watersens, value);
			return 12;
			break;
		case 2221303877: // reduce
			add(s->watersens, -value);
			return 13;
			break;
		// air
		case 2869962: // set
			set(s->airsens, value);
			return 21;
			break;
		case 2449169983: // add
			add(s->airsens, value);
			return 22;
			break;
		case 2893053984: // reduce
			add(s->airsens, -value);
			return 23;
			break;
		// floor
		case 1510896288: // set
			set(s->floorsens, value);
			return 31;
			break;
		case 1712409385: // add
			add(s->floorsens, value);
			return 32;
		case 3670787658: // reduce
			add(s->floorsens, -value);
			return 33;
		// humidity
		case 3748040536: // set
			set(s->humiditysens, value);
			return 41;
		case 3546527437: // add
			add(s->humiditysens, value);
			return 42;
		case 1714656174: // reduce
			add(s->humiditysens, -value);
			return 43;
		// vent
		case 1792631403:
			s->ventsystem.flip(1);
			return 51;
		case 3386515103:
			s->ventsystem.flip(2);
			return 52;
		case 3386515104:
			s->ventsystem.flip(3);
			return 53;
		case 431624700:
			s->ventsystem.flip(4);
			return 54;
		case 1308106873:
			s->ventsystem.filter();
			return 55;
		// auto
		case 2596162088:
			autowatertemp = value;
			return 61;
		case 2833011729:
			autoairtemp = value;
			return 62;
		case 1211406487:
			autofloortemp = value;
			return 63;
		case 1219873927:
			autohumidity = value;
			return 64;

		default:
			return 0;
			break;
		}
	}

	float getwatertemp() {
		return s->watersens.send();
	}
	float getairtemp() {
		return s->airsens.send();
	}
	float getfloortemp() {
		return s->floorsens.send();
	}
	int gethumidity() {
		return s->humiditysens.send();
	}
	bool getventstatus(int n) {
		return s->ventsystem.send(n);
	}
	bool getfilterstatus(int n) {
		return s->ventsystem.send(n);
	}

};