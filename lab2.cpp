#include<iostream>
#include "lab2.h"

float Data::Get_Mass(float m){
mass=m;
return mass;
}
 float Data::Get_height(float h){
	   height=h;
	    return height; }
float Data::Cal_BMI(){
return	mass/height/height*10000;

}
char const* Data::Set_cate(){

	float f;
f=Cal_BMI();

if(f<15){
return "Very severely underweight";
}
else if(f>=15&&f<16){
return "Severely underweight";
}
else if(f>=16&&f<18.5){
return "Underweight";
}
else if(f>=18.5&&f<25){
return "Normal";
}
else if(f>=25&&f<30){
return "Overweight";
}
else if(f>=30&&f<35){
	  return "Obese Class I (Moderately obese)";
}

else if(f>=35&&f<40){
	        return "Obese Class II (Severely obese)";
	  }
else{
return "Obese Class III (Very severely obese)";}
}
