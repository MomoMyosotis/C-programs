#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/wait.h>

bool get_filename(char **name, size_t *dim) {
    ssize_t read;
    char i = 'n';
    int counter = 1;
    
    do {
        if (counter == 5) {
            printf("\nWARNING: last attempt.\n");
            sleep(1);
        }

        printf("\nInsert file's name: ");
        read = getline(name, dim, stdin);
        (*name)[strcspn(*name, "\n")] = '\0';

        printf("The given name is: %s", *name);
        printf("\nConfirm? (y/n): ");
        scanf(" %c", &i);
        getchar();

        if (i != 'n' && i != 'y') {
            printf("Invalid input. Terminating...\n");
            return false;
        }

        if (i == 'n') {
            printf("Fine, let's try again...\n");
            sleep(2);
            printf("\033[2J\033[H");
            printf("Attempts left: %i.\n", 5 - counter);
            counter++;
        }

        if (counter > 5) {
            printf("\033[2J\033[H");
            printf("Used all available attempts.\nShutting down...\n");
            sleep(2);
            printf("\033[2J\033[H");
            return false;
        }
    } while (i != 'y');

    FILE *file = fopen(*name, "r");
    if (file) {
        printf("Found file '%s'.\n", *name);
        fclose(file);
        return true;
    } else {
        printf("File '%s' -> No such file or directory. Terminating...\n", *name);
        sleep(2);
        printf("\033[2J\033[H");
        return false;
    }
}

int main(void) {
    char *name = NULL;
    size_t dim = 0;
    char back = 'e';

    if (!get_filename(&name, &dim)) {
        free(name);
        return 0;
    }

    printf("\nOkay, let's get some work done.\n");
    bool running = true;
    while (running) {
        sleep(2);
        printf("\033[2J\033[H");
        printf("Here is the menu:\n\n");

        printf("1. Print current file\n");
        printf("Description: prints the name of the file\n");

        printf("\n2. Visualize/modify file\n");
        printf("Description: uses 'fork()' and 'exec()' to open a text editor (nano) of current file\n");

        printf("\n3. Look for gene\n");
        printf("Description: takes a 'stop codon' such as:\n- TAG\n- TGA\n- TAA\nshows sequences starting with 'ATG' and ends with the given codon.\n");

        printf("\n4. Change file\n");
        printf("Description: allows user to change the current file\n");

        printf("\n5. Exit\n");
        printf("Description: exits the program\n");

        printf("\n* WARNING: only one operation at a time.\n");

        int menu;
        printf("\n\n\nWhat do you want to do? (1-5): ");
        scanf("%i", &menu);
        getchar();

        printf("\033[2J\033[H");

        switch (menu) {
            case 1:
                printf("\nOption 1 selected.\nPrint current name.\n");
                printf("\nName is: %s", name);

                printf("\n\ngo back or exit? (b/e): ");
                scanf(" %c", &back);
                getchar();

                if (back == 'e') {
                    printf("\nExiting...\n");
                    running = false;
                } else if (back != 'b') {
                    printf("\nInvalid input. Exiting...\n");
                    running = false;
                }
                break;

            case 2:
                printf("\nOption 2 selected.\nVisualize/modify file.\n");

                if (fork() == 0) {
                    execlp("nano", "nano", name, (char *)NULL);
                    perror("execlp failed");
                    exit(EXIT_FAILURE);
                } else {
                    wait(NULL);
                }

                printf("\n\ngo back or exit? (b/e): ");
                scanf(" %c", &back);
                getchar();

                if (back == 'e') {
                    printf("\nExiting...\n");
                    running = false;
                    sleep(0.2);
                    printf("\033[2J\033[H");
                    return 0;
                } else if (back != 'b') {
                    printf("\nInvalid input. Exiting...\n");
                    sleep(0.2);
                    printf("\033[2J\033[H");
                    running = false;
                }
                break;

            case 3:
                {
                    int counter = 0;
                    int b = 0;
                    char a = 'n';
                    int choice;
                    char stop_codon[4];
                    char grep_pattern[256];
                    pid_t pid;
                    char i = 'y';

                    while (counter < 5 && a != 'y') {
                        counter++;
                        printf("\033[2J\033[H");

                        if (counter == 4) {
                            printf("\nWARNING: last search.\n");
                        }

                        printf("\nOption 3 selected.\nLook for gene.\n");
                        printf("\nHow it works:\n- User chooses a stop codon from the menu\n- Program starts searching from ATG\n- Search ends when it finds the selected codon\n- Prints the result");
                        sleep(4);
                        printf("\033[2J\033[H");
                        printf("\nSearches available: %i.\n", 5 - counter);

                        do {
                            b++;
                            if (b == 3) {
                                printf("\nWarning: last research in this cycle\n");
                            }

                            printf("\nThe stop codons are:\n1. TAG\n2. TGA\n3. TAA");
                            printf("\nWhich of the 3 do you want to choose? (1/2/3): ");
                            scanf("%d", &choice);
                            getchar();

                            switch (choice) {
                                case 1:
                                    strcpy(stop_codon, "TAG");
                                    break;
                                case 2:
                                    strcpy(stop_codon, "TGA");
                                    break;
                                case 3:
                                    strcpy(stop_codon, "TAA");
                                    break;
                                default:
                                    printf("Invalid choice. Please try again.\n");
                                    continue;
                            }

                            printf("The selected stop codon is: %s\n", stop_codon);
                            printf("Confirm? (y/n): ");
                            scanf(" %c", &a);
                            getchar();

                            if (a != 'n' && a != 'y') {
                                printf("Invalid input. Terminating...\n");
                                return 0;
                            }

                            if (a == 'n') {
                                printf("Fine, let's try again...\n");
                                sleep(2);
                                printf("\033[2J\033[H");
                                printf("Attempts left: %i.\n", 3 - b);
                                if (b >= 3)
                                    break;
                            }
                        } while (a != 'y' && b < 3);

                        if (a == 'y') {
                            snprintf(grep_pattern, sizeof(grep_pattern), "ATG.*%s", stop_codon);

                            pid = fork();

                            if (pid < 0) {
                                perror("fork");
                                exit(EXIT_FAILURE);
                            } else if (pid == 0) {
                                execlp("grep", "grep", "-oP", grep_pattern, name, NULL);
                                sleep(2);
                                perror("execlp");
                                exit(EXIT_FAILURE);
                            } else {
                                wait(NULL);
                            }

                            printf("\nWant to do another operation? (y/n): \n");
                            scanf(" %c", &i);
                            getchar();

                            if (i != 'y') {
                                break;
                            }

                            a = 'n';
                        }
                    }

                    if (counter >= 5) {
                        printf("\nUsed all available attempts. Shutting down...\n");
                        sleep(2);
                        printf("\033[2J\033[H");
                        return 0;
                    }
                }
                break;

            case 4:
                printf("\nOption 4 selected.\nChange file.\n");

                if (!get_filename(&name, &dim)) {
                    free(name);
                    return 0;
                }

                printf("\nFile name changed successfully.\n");

                printf("\n\ngo back or exit? (b/e): ");
                scanf(" %c", &back);
                getchar();

                if (back == 'e') {
                    printf("\nExiting...\n");
                    running = false;
                    sleep(2);
                    printf("\033[2J\033[H");
                    return 0;
                } else if (back != 'b') {
                    printf("\nInvalid input. Exiting...\n");
                    sleep(2);
                    printf("\033[2J\033[H");
                    running = false;
                }
                break;

            case 5:
                printf("\nOption 5 selected.\nExit.\n");
                printf("Terminating...\n\n");
                sleep(2);
                printf("\033[2J\033[H");
                running = false;
                break;

            default:
                printf("Invalid input. Terminating...\n");
                running = false;
                break;
        }
    }

    free(name);
    sleep(1);
    printf("\033[2J\033[H");
    return 0;
}
