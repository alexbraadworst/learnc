#include <stdio.h>
#include <string.h>

/*
int compare(){
    int a=6,b=9;
    if(a==b){
        printf("a is equal to b\n");
    }
    else{
        printf("a is not equal to b\n");
    }

    return 0;

}
*/

/* 
int cars(){
    int cars;
    printf("Enter the number of cars there are from 0 to 3: ");
    scanf("%d", &cars);
    switch(cars){
        case 1:
            printf("There is one car\n");
            break;
        case 2:
            printf("There are two cars\n");
            break;
        case 3:
            printf("There are three cars\n");
            break;
        default:
            printf("There are no cars\n");
    }

    return 0;
}
*/

/*
int whileloop(){
    int a=10,b=14;
    while(a!=b){
        printf("a is not equal to b\n");
    }
    
    return 0;
}
*/

/*
int forloop(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=1;i<=num;i++){
        printf("%d\n", i);
    }

    return 0;

}
*/

/*
int addition(int a, int b){
    int sum = a+b;
    return sum;
}
*/


int pizza(){
    int order;
    char arr[5][15] = {"1. Hamburger", "2. Cheeseburger", "3. Fries", "4. Nuggets", "5. Soda"};
    char items[5][15] = {};
    printf("Welcome to Gerhard's Burgers! Here is our menu:\n");
    for(int i=0;i<5;i++){
        printf("%s\n", arr[i]);
    }
    printf("Which one would you like? (1-5)");
    scanf("%d", &order);

    switch (order){
        char yesno;
        char selection;
        case 1:
            printf("You have ordered a Hamburger. Is that correct? (y/n)\n");
            scanf("%s", &yesno);
            if (strcmp(&yesno, "y") == 0){
                printf("Successfully ordered a Hamburger.\n");
                break;
            }
            else{
                break;
            }
        case 2:
            printf("You have ordered a Cheeseburger. Is that correct? (y/n)\n");
            scanf("%s", &yesno);
            if (strcmp(&yesno, "y") == 0){
                printf("Successfully ordered a Cheeseburger.\n");
                break;
            }
            else{
                break;
            }
        case 3:
            printf("You have ordered Nuggets. Is that correct? (y/n)\n");
            scanf("%s", &yesno);
            if (strcmp(&yesno, "y") == 0){
                printf("Successfully ordered Nuggets.\n");
                break;
            }
            else{
                break;
            }
        case 4:
            printf("You have ordered Fries. Is that correct? (y/n)\n");
            scanf("%s", &yesno);
            if (strcmp(&yesno, "y") == 0){
                printf("Successfully ordered Fries.\n");
                break;
            }
            else{
                break;
            }
        case 5:
            printf("You have ordered a Soda. Is that correct? (y/n)\n");
            scanf("%s", &yesno);
            if (strcmp(&yesno, "y") == 0){
                printf("Successfully ordered a Soda.\n");
                break;
            }
            else{
                break;
            }
    }

    return 0;
}


/*
struct car{
    char name[20];
    int year;
    char model[20];
};

int carfun(){
    struct car Mercedes={"Mercedes",1990,"S-Class"};
    printf("%d\n",Mercedes.year);
}
*/

int main(){
    pizza();
}

