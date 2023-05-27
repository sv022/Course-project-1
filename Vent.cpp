#pragma once

#include "Vent.h"

Vent::Vent() {
	kitchen = true;
	room1 = false;
	room1 = false;
	bath = true;
	filtration = false;

	powerconsumption = 0.5;
}

void Vent::flip(int n) {
	switch (n) {
	case 1:
		kitchen = !kitchen;
		if (kitchen) powerconsumption += 0.1;
		else powerconsumption -= 0.1;
		break;
	case 2:
		room1 = !room1;
		if (room1) powerconsumption += 0.1;
		else powerconsumption -= 0.1;
		break;
	case 3:
		room2 = !room2;
		if (room2) powerconsumption += 0.1;
		else powerconsumption -= 0.1;
		break;
	case 4:
		bath = !bath;
		if (bath) powerconsumption += 0.1;
		else powerconsumption -= 0.1;
		break;
	default:
		break;
	}
}

void Vent::filter() {
	filtration = !filtration;
	if (filtration) powerconsumption += 0.7;
	else powerconsumption -= 0.7;
}

bool Vent::send(int n) {
	switch (n) {
	case 1:
		return kitchen;
	case 2:
		return room1;
	case 3:
		return room2;
	case 4:
		return bath;
	case 5:
		return filtration;
	default:
		break;
	}
	return false;
}