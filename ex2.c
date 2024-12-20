/******************
Name:
ID:
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
	int user_choice;
	while (user_choice != 7) {
		printf("Choose an option:\n\t1. Happy Face\n\t2. Balanced Number\n\t3. Generous Number\n\t4. Circle Of Joy\n\t5. Happy Numbers\n\t6. Festival Of Laughter\n\t7. Exit\n");
		scanf("%d", &user_choice);
		switch (user_choice) {
			case 1:{
				char eyes;
				char nose;
				char mouth;
				printf("Enter symbols for the eyes, nose, and mouth:\n");
			    scanf(" %c", &eyes);
				scanf(" %c", &nose);
				scanf(" %c", &mouth);
				int num;
				printf("Enter face size:\n");
				scanf("%d", &num);
				while (num <0||num%2==0) {
					printf("The face's size must be an odd and positive number, please try again:\n");
					scanf("%d", &num);
				}
				printf("%c",eyes);
				for (int i=0;i<num;i++) {
					printf(" ");
				}
				printf("%c\n",eyes);
				for (int i=0;i<(num+1)/2;i++) {
					printf(" ");
				}
				printf("%c\n",nose);
				printf("\\");
				for (int i=0;i<num;i++) {
					printf("%c",mouth);
				}
				printf("/\n");
				break;
			}
			case 2: {
				printf("Enter a number: \n");
				int num;
				scanf("%d", &num);
				while (num<=0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &num);
				}
				int num_length=0;
				int left_sum=0;
				int right_sum=0;
				int num_copy;
				num_copy = num;
				while (num_copy>0) {
					num_copy/=10;
					num_length++;
				}
				for (int i=0;i<num_length/2;i++) {
					right_sum+=num%10;
					num/=10;
				}
				if (num_length%2==1) {
					num/=10;
				}
				for (int i=0;i<num_length/2;i++) {
					left_sum+=num%10;
					num/=10;
				}
				if (left_sum==right_sum) {
					printf("This number is balanced and brings harmony!\n");
				}
				else {
					printf("This number isn't balanced and destroys harmony.\n");
				}
				break;
			}
			case 7: {
				return  0;
			}
			default: {
				printf("This option is not available, please try again.\n");
			}
		}
	}
	// Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
	/* Example:
	* n = 3:
	* 0   0
	*   o
	* \___/
	*/
    

	// Case 2: determine whether the sum of all digits to the left of the middle digit(s)
	// and the sum of all digits to the right of the middle digit(s) are equal
	/* Examples:
	Balanced: 1533, 450810, 99
	Not blanced: 1552, 34
	Please notice: the number has to be bigger than 0.
	*/

	// Case 3: determine whether the sum of the proper divisors (od an integer) is greater than the number itself
	/* Examples:
	Abudant: 12, 20, 24
	Not Abudant: 3, 7, 10
	Please notice: the number has to be bigger than 0.
	*/

	// Case 4: determine wether a number is a prime.
	/* Examples:
	This one brings joy: 3, 5, 11
	This one does not bring joy: 15, 8, 99
	Please notice: the number has to be bigger than 0.
	*/
    

	// Happy numbers: Print all the happy numbers between 1 to the given number.
	// Happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
	/* Examples:
	Happy :) : 7, 10
	Not Happy :( : 5, 9
	Please notice: the number has to be bigger than 0.
	*/

	// Festival of Laughter: Prints all the numbers between 1 the given number:
	// and replace with "Smile!" every number that divided by the given smile number
	// and replace with "Cheer!" every number that divided by the given cheer number
	// and replace with "Festival!" every number that divided by both of them
	/* Example:
	6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
	*/
	return 0;
}
