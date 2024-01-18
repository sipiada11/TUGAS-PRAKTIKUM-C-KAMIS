#include <stdio.h>

// Function prototypes
void fillWater(int level);
void drainWater(int level);
void washClothes(int level);
void spinClothes(int level);

// Array of washing machine parameters for each turbidity level
struct washingMachine {
int motorSpeed;
int washTime;
int spinTime;
};

struct washingMachine washingMachineLevels[] = {
{100, 360, 120}, {150, 360, 120}, {200, 480, 180},
{200, 540, 180}, {250, 600, 240}, {300, 720, 300},
{350, 720, 300}, {400, 960, 360}, {450, 960, 360}
};


int main() {
int turbidityLevel;

printf("Enter the turbidity level of the water (1-9): ");
scanf("%d", &turbidityLevel);

if (turbidityLevel < 1 || turbidityLevel > 9) {
printf("Invalid turbidity level. Exiting...\n");
return 1;
}

fillWater(turbidityLevel);
washClothes(turbidityLevel);
drainWater(turbidityLevel);
spinClothes(turbidityLevel);

return 0;
}

void fillWater(int level) {
printf("Filling water to level %d...\n", level);
// Simulate time taken to fill water
for (int i = 0; i < washingMachineLevels[level - 1].washTime; i++) {
printf(".");
}
printf("\nWater filled to level %d.\n", level);
}

void drainWater(int level) {
printf("Draining water from level %d...\n", level);
// Simulate time taken to drain water
for (int i = 0; i < washingMachineLevels[level - 1].washTime; i++) {
printf(".");
}
printf("\nWater drained from level %d.\n", level);
}

void washClothes(int level) {
printf("Washing clothe at level %d...\n", level);
// Simulate time taken to wash clothe
for (int i = 0; i < washingMachineLevels[level - 1].washTime; i++) {
printf(".");
}
printf("\nClothe washed at level %d.\n", level);
}

void spinClothes(int level) {
printf("Spinning clothe at level %d...\n", level);
// Simulate time taken to spin clothe
for (int i = 0; i < washingMachineLevels[level - 1].spinTime; i++) {
printf(".");
}
printf("\nClothe spun at level %d.\n", level);
}
