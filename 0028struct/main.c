#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "main.h"

void BasicStruct2();
void BasicStruct3();
void SortStruct();
void two_struct();

int main(){
	
	//two_struct();
	//SortStruct();
	//BasicStruct3();
	//BasicStruct2();
	// BasicStruct();
}

void BasicStruct()
{
	struct player
	{
		char name[20];
		int score;
	};
	/*struct player
	{
	char name[20];
	int score;
	}name;
	*/

	struct player person;

	printf("what is your player name?\n");
	scanf("%s", &person.name);
	printf("what is your player score?\n");
	scanf("%d", &person.score);

	printf("your player name is %s, your player score %d", person.name, person.score);
}

void BasicStruct2() {

	struct teamInfo
	{
		char teamName[20];
		int score;
	};

	struct teamInfo team = { "boss",38};

	printf("Team name is %6s\nTeam score is %5d", team.teamName, team.score);

}

void BasicStruct3() {
	struct teamInfo
	{
		char teamName[20];
		int score;
	}team={ "boss",200};

	printf("Team name is %6s\nTeam score is %5d", team.teamName, team.score);

}

void SortStruct() {

		struct scores
		{
			char name[32];
			int score;
		};
		struct scores player[4];
		struct scores temp;
		int x,a,b;

		for (x = 0; x < 4; x++)
		{
			printf("Enter player %d: ", x + 1);
			scanf("%s", player[x].name);
			printf("Enter their score: ");
			scanf("%d", &player[x].score);
		}

		for (a = 0; a < 3; a++) {
			b = a + 1;
			for (b = a + 1; b < 4; b++){	
			if (player[a].score > player[b].score) {
				temp = player[a];
				player[a] = player[b];
				player[b] = temp;

			}
			}
		}


		puts("Player Info");
		printf("#\tName\tScore\n");
		for (x = 0; x < 4; x++)
		{
			printf("%d\t%s\t%5d\n",
				x + 1, player[x].name, player[x].score);
		}
		return(0);
}

void two_struct() {

	struct info
	{
		int playerNumber;
		int playerQuality1_10;
		int averageHappiness;
	};

	struct Team
	{
		char teamName[15];
		int score;
		struct info teaminfo;
	};

	struct Team team;

	printf("enter team name: ");
	scanf("%s", &(team.teamName));
	printf("enter team score: ");
	scanf("%d", &(team.score));
	printf("enter team player number: ");
	scanf("%d", &(team.teaminfo.playerNumber));
	printf("enter team player Quality1_10: ");
	scanf("%d", &(team.teaminfo.playerQuality1_10));
	printf("enter team player average Happiness: ");
	scanf("%d", &(team.teaminfo.averageHappiness));

	printf("team name:             %5s\n", team.teamName);
	printf("team score:            %5d\n", team.score);
	printf("team player number:    %5d\n", team.teaminfo.playerNumber);
	printf("team player quality:   %5d\n", team.teaminfo.playerQuality1_10);
	printf("team average happiness:%5d\n", team.teaminfo.averageHappiness);





}