#include <stdio.h>

int factorial(int target) {
if (target <= 1) {
return target;
}
else {
int fact = 1;
for (int i = target; i > 0; --i) {
fact *= i;
}
return fact;
}
}
int factorial(int target) {
if (target <= 1) {
return target;
}
else {
return target * factorial(target - 1);
}
}