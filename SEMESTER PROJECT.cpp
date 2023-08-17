#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

enum TrafficLightColor{
	RED,
	GREEN,
	YELLOW
};

	

class TrafficLight{
	private:
		Traffic Light Color color;
	public:
		Traffic Light(){
			color=RED;
		}
	void chance Color(TrafficLightColor){
		color=newColor;
	
	}
void displayColor(){
	switch (color){
		case RED:
			cout<<"Red"<<endl;
			
	break;
		case GREEN:
			cout<<"Green"<<endl;
	break;
		case YELLOW:
			cout<<"Yellow"<<endl;
	break;
		}
}
	}	
	int main(){
		TrafficLight;
		while(true){
			trafficlight . changeColor(RED);
			trafficlight . displayColor();
			this_thread:: sleep_for(chrono::seconds(5));
			
			trafficLight . changeColor(GREEN);
			trafficLight . displayColor();
			this_thread :: sleep_for(chrono::seconds(10));
			
			trafficLight . changeColor(YELLOW);
			trafficLight . displayColor();
			this_thread :: sleep_for(chrono::seconds(3));
	}	
		
	return 0;
}
