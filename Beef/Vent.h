#pragma once

struct DataBus;

class Vent {
private:
	bool kitchen; // 1
	bool room1; // 2
	bool room2; // 3
	bool bath; // 4

	bool filtration;
	float powerconsumption;
public:
	Vent();
	void flip(int n);
	void filter();
	bool send(int n);
	friend float powercost(DataBus);
};