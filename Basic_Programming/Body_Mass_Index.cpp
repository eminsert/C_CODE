#include <stdio.h>
int main() {
	// Calculating body mass index
	
	// height=h    weight=w     body mass index=bmi
	
	
	
	float h,w,bmi,age;
	
	printf("Please enter your age:");
	scanf("%f",&age);
	
	printf("Please enter your mass(kg):");
	scanf("%f",&w);
	
	printf("Please enter your height(m):");
	scanf("%f",&h);
	
	bmi=w/(h*h);
	printf("Your bmi is %f\n",bmi);
	
	//Comparison and classification of indexes
	 
	if(bmi < 18.5){
		
		printf("Your bmi is low.You are thin.\n");
	}	
	else if(bmi>18.5 && bmi<24.9){
		
		printf("You are normal.\n");
	}
	else if(bmi >25 && bmi<29.9){
		
		printf("You are owerweight.\n");
	}
	else if(bmi>30 && bmi<39.9){
		
		printf("You are obese.You should go on a diet or go to a doctor.\n");
	}
	else{
		
		printf("You are morbidly obese.You have to go to a doctor immediately.\n");
	}
	
	printf("Body Mass Index suitable for your age : \n Age 19-24 => Bmi 19-24\n Age 25-34 => Bmi 20-25\n Age 35-44 => Bmi 21-26 \n Age 45-54 202=> Bmi 22-27\n Age 55-65 => Bmi 23-28 \n Age 65+ => Bmi 24-29");
	
	return 0;
	
}
