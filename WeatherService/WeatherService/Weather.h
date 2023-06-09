#pragma once
using namespace std;
#include "string"
class Weather
{
public:
	string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100
	Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) {
		this->city = city;
		this->lon = lon;
		this->lat = lat;
		this->temperature = temperature;
		this->weather = weather;
		this->clouds = clouds;
	};
};

