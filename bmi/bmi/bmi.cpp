// bmi.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

// BMI.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>


int main()
{
	//Deklaration der Variablen
	int koerpergewicht = 0, bmi = 0;
	char geschlecht ;
	float groesse = 0;
	printf("Bitte geben sie ihr Koerpergewicht Groesse in cm und geschlecht als\nw = weiblich oder m = maennlich in der Reihenfolge ein\n");

	scanf("%i %f %c", &koerpergewicht, &groesse, &geschlecht);

	// Berechnung BMI ohne math.h
	bmi = koerpergewicht / ((groesse / 100) * (groesse / 100));


	// Unterscheidung ob mann oder frau abfragen der tasten M und 
	// nicht in der Musterlösung
	if (geschlecht == 'M' || geschlecht == 'm')
	{
		if (bmi < 20)
		{
			printf("Du hast Untergewicht bist Mann und dein BMI lautet %i\n", bmi);

		}
		else if (bmi > 19 && bmi < 25)
		{
			printf("Du hast Normal Gewicht bist Mann und dein BMI ist %i\n", bmi);


		}
		else if (bmi > 25 && bmi < 31)
		{

			printf("Du hast zuviel Pfunde bist Mann und Uebergewichtig dein BMI lautet %i\n", bmi);



		}
	}

	//Das ist die Frau hier erfolgt ein Default Block das bedeuted alles was nicht m oder M
	//ist wird in diesen Block umgeleitet
	//Alternative wäre else if (geschlecht == w oder geschlecht == W)
	else if (geschlecht == 'w'|| geschlecht == 'W'){

		if (bmi < 19)
		{
			printf("Du hast Untergewicht du bist Frau und dein BMI ist %i\n", bmi);
		}
		else if (bmi > 18 && bmi < 25)
		{
			printf("Du hast Normal Gewicht und bist Frau dein BMI lautet %i\n", bmi);
		}
		else if (bmi > 24 && bmi < 31)
		{
			printf("Du hast Uebergewicht und bist Frau dein BMI lautet %i\n", bmi);
		}

	}



	return 0;
}


