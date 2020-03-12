#include "city.c"
#include <string.h>
#define FINDCITY_C 0
void findCity(char* cityName) {
	city* cityArray[NUM_CITIES];
	load_cities(cityArray);
	for(int cityInd = 0; cityInd < NUM_CITIES; cityInd++) {
		city* currentCity = cityArray[cityInd];
		int pop;
		if((pop = get_city_population(currentCity)) != -1) {
			printf("%d\n", pop);
			return;
		} // if get_city_population
	} // for cityInd

	for(int cityInd = 0; cityInd < NUM_CITIES; cityInd++) {
		city* currentCity = cityArray[cityInd];
		if(strcmp(currentCity->name, cityName)) {
			printf("%s\n", cityName);
		} // if strcmp
	} // for cityInd
} // function findCity


