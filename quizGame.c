#include <stdio.h>

int main()
{
    int i, total = 0;
    char point01, point02, point03, point04, point05, point06, point07, point08, point09, point10;

    printf(" ---> Press 1 to start the game\n");
    printf(" ---> See your category as Humayun Vokto\n");

    scanf("%d", &i);

    if(i == 1) {
        printf("\t------The game has started------\n\n");
    }

    else {
        printf("\tInvalid Input\n");
    }

    if(i == 1) {
        printf("(1) What was the first book with Himu as its central character?\n");
        printf("\ta) Parapar\n");
        printf("\tb) Himu\n");
        printf("\tc) Mayurakkhi\n");
        printf("\td) Darojar Opashe\n");

        printf("Enter your answer: ");
        scanf(" %c", &point01);

        if(point01 == 'c' || point01 == 'C') {
            total += 1;
            printf("Correct Answer\n\n");
        }
        else {
            printf("Wrong Answer\n\n");
        }

        //2

        printf("(2) What was the first sentence of the first book in the Himu series??\n");
        printf("\ta) Ghumer moddhe sunlam keu ekjon daklo, Himu, ei Himu\n");
        printf("\tb) Ei Chele Ei\n");
        printf("\tc) Tar daak naam Himu\n");
        printf("\td) Ki naam bollen apnar, Himu?\n");

        printf("Enter your answer: ");
        scanf(" %c", &point02);

        if(point02 == 'b' || point02 == 'B') {
            total += 1;
            printf("Correct Answer\n\n");
        }
        else {
            printf("Wrong Answer\n\n");
        }

        //3

        printf("(3) In the book 'Chole Jay Bosonter Din', which female character was married to Mazeda Khala's son??\n");
        printf("\ta) Anika\n");
        printf("\tb) Ira\n");
        printf("\tc) Rupa\n");
        printf("\td) Fulfulia\n");

        printf("Enter your answer: ");
        scanf(" %c", &point03);

        if(point03 == 'd' || point03 == 'D') {
            total += 1;
            printf("Correct Answer\n\n");
        }
        else {
            printf("Wrong Answer\n\n");
        }

        //4

        printf("(4) In the book 'Himu Ebong Ekti Russian Poree', what was the main female character's name??\n");
        printf("\ta) Alta\n");
        printf("\tb) Alina\n");
        printf("\tc) Elita\n");
        printf("\td) Tanzia\n");

        printf("Enter your answer: ");
        scanf(" %c", &point04);

        if(point04 == 'c' || point04 == 'C') {
            total += 1;
            printf("Correct Answer\n\n");
        }
        else {
            printf("Wrong Answer\n\n");
        }

        //5

        printf("(5) In the book 'Himur Ache Jol', which character is accused of murdering his wife and her two sisters??\n");
        printf("\ta) Pir Kutubi\n");
        printf("\tb) Rashid Khan\n");
        printf("\tc) Director Shakur\n");
        printf("\td) Ator Mia\n");

        printf("Enter your answer: ");
        scanf(" %c", &point05);

        if(point05 == 'a' || point05 == 'A') {
            total += 1;
            printf("Correct Answer\n\n");
        }
        else {
            printf("Wrong Answer\n\n");
        }

        //6

        printf("(6) What was the last sentence in the Himu series written by Humayun Ahmed??\n");
        printf("\ta) Manush jemon valobasa chorie dey, ful choriye dey shourov.\n");
        printf("\tb) Bondhutto tokhoni garo hoi jokhon keo kauke chine na.\n");
        printf("\tc) Mone hoy launch tolie jete suru koreche.\n");
        printf("\td) Ami opekkha kore achi.\n");

        printf("Enter your answer: ");
        scanf(" %c", &point06);

        if(point06 == 'b' || point06 == 'B') {
            total += 1;
            printf("Correct Answer\n\n");
        }
        else {
            printf("Wrong Answer\n\n");
        }

        //7

        printf("(7) In which book does Himu meet Misir Ali??\n");
        printf("\ta) Himur Rupali Ratri\n");
        printf("\tb) Himur Neel Jochna\n");
        printf("\tc) Himur Ditiyo Prohor\n");
        printf("\td) Himur Madhyadupur\n");

        printf("Enter your answer: ");
        scanf(" %c", &point07);

        if(point07 == 'c' || point07 == 'C') {
            total += 1;
            printf("Correct Answer\n\n");
        }
        else {
            printf("Wrong Answer\n\n");
        }

        //8

        printf("(8) In the book 'Ekjon Himu Koyekti Jhi Jhi Poka', who killed Maliha Khala??\n");
        printf("\ta) Rokib Uddin\n");
        printf("\tb) Muslem Mia\n");
        printf("\tc) Arefin Shaheb\n");
        printf("\td) Hadiuzzaman\n");

        printf("Enter your answer: ");
        scanf(" %c", &point08);

        if(point08 == 'c' || point08 == 'C') {
            total += 1;
            printf("Correct Answer\n\n");
        }
        else {
            printf("Wrong Answer\n\n");
        }

        //9

        printf("(9) In the book 'Aaj Himur Biye', Himu was supposed to be married off to which girl??\n");
        printf("\ta) Rupa\n");
        printf("\tb) Mitu\n");
        printf("\tc) Maria\n");
        printf("\td) Renu\n");

        printf("Enter your answer: ");
        scanf(" %c", &point09);

        if(point09 == 'd' || point09 == 'D') {
            total += 1;
            printf("Correct Answer\n\n");
        }
        else {
            printf("Wrong Answer\n\n");
        }

        //10
        printf("(10) Which character's last wish was to let Himu watch his execution by hanging??\n");
        printf("\ta) Ayna Majid\n");
        printf("\tb) Mobarok Hossain\n");
        printf("\tc) Murgi Sadek\n");
        printf("\td) Angul Kata Jaglu\n");

        printf("Enter your answer: ");
        scanf(" %c", &point10);

        if(point10 == 'b' || point10 == 'B') {
            total += 1;
            printf("Correct Answer\n\n");
        }
        else {
            printf("Wrong Answer\n\n");
        }

        //Showing Results

        if(total >= 6 && total <= 7) {
            printf("\tYour score is: %d\n", total);
            printf("\tBIG FAN!\n");
        }
        else if(total >= 8 && total <= 9) {
            printf("\tYour score is: %d\n", total);
            printf("\tSUPER FAN!\n");
        }
        else if(total == 10) {
            printf("\tYour score is: %d\n", total);
            printf("\tYou are a HIMU in yourself now!\n");
        }
        else {
            printf("\tYour score is: %d\n", total);
            printf("\tKeep reading the great books of Humayun Sir!\n");
        }
    }
}
