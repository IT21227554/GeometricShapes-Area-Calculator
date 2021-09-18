#include<stdio.h>

int main(void){
	
	float radius, width , length, height , area ,base ;
	char obj;
	
	printf("Enter type of geometric shape [ Square-s , Rectangle-R , Circle-C , Triangle- T] : ");
	scanf("%c",&obj);
	
	switch (obj){
		
		case 's' : printf("\nEnter the length of the square : ");
					   scanf("%f", &length  );
					   
					   area = length * length;
					   
					   printf("\nArea of the square = %.1f",area );
					   
					   break;
					   
		case 'S' : printf("\nEnter the length of the square : ");
					   scanf("%f", &length  );
					   
					   area = length * length;
					   
					   printf("\nArea of the square = %.1f",area );
					   
					   break;
					   
		case 'r' : printf("\nEnter the length and the width of the rectangle : ");
					   scanf("%f %f", &length , &width );
					   
					   area = length * width;
					   
					   printf("\nArea of the rectangle = %.1f",area );
					   
					   break;
		
		case 'R' : printf("\nEnter the length and the width of the rectangle : ");
					   scanf("%f %f", &length , &width );
					   
					   area = length * width;
					   
					   printf("\nArea of the rectangle = %.1f",area );
					   
					   break;
					   
		case 'c' : printf("\nEnter the radius of the circle : ");
					   scanf("%f", &radius );
					   
					   area = 3.14 * radius * radius ;
					   
					   printf("\nArea of the circle = %.1f",area );
					   
					   break;
					   
		case 'C' : printf("\nEnter the radius of the circle : ");
					   scanf("%f", &radius );
					   
					   area = 3.14 * radius * radius ;
					   
					   printf("\nArea of the circle = %.1f",area );
					   
					   break;			   			   
					   
		case 't' : printf("\nEnter the base length and the height of the triangle : ");
					   scanf("%f %f", &base , &height );
					   
					   area = base * height * 0.5;
					   
					   printf("\nArea of the triangle  = %.1f",area );
					   
					   break;			   
		
		case 'T' : printf("\nEnter the base length and the height of the triangle : ");
					   scanf("%f %f", &base , &height );
					   
					   area = base * height* 0.5;
					   
					   printf("\nArea of the triangle  = %.1f",area );
					   
					   break;			   
	
	}
	
	
	return 0;
}
