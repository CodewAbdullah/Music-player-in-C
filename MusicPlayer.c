#include <stdio.h>
#include <string.h>
#define size 5

char queue[size];
int front = -1, rear = -1;
int currentlyplaying = -1;

void addSong(char name) {
    if ((front == 0 && rear == size - 1) || (rear + 1) % size == front) {
        printf("Music list is Full!\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % size;
    }

    queue[rear] = name;
    printf("%c added to list.\n", queue[rear]);
}

void removeMusic() {
    if (front == -1) {
        printf("Music list is empty, Add musics!\n");
        return;
    }

    printf("%c removed from list!\n", queue[front]);
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % size;
    }
}

void display() {
    if (front == -1) {
        printf("Music list is empty, Add musics!\n");
        return;
    }

    int i = front, count = 0;
    printf("Songs currently in list: ");
    while(1) {
        count++;
        printf("%d:%c ", i + 1,queue[i]);
        if (i == rear) {
            break;
        }
        i = (i + 1) % size;
    }
    printf("\nTotal songs in list: %d\n", count);
}

void first() {
    if (front == -1) {
        printf("Music list is empty, Add musics!\n");
        return;
    } else {
        printf("Now playing %c song.\n", queue[front]);
    }
}

void chooseMusic() {
    if (front == -1) {
        printf("Music list is empty, Add musics!\n");
        return;
    } else {
        int choice = 0;
        printf("Choose you Song: ");
        scanf("%d", &choice);
        while(getchar() != '\n');

        if (choice < 1 || choice > 5) {
        printf("Invalid choice! Please choose 1-5.\n");
        return;
    }

        int pos = (front + choice - 1) % size;
        currentlyplaying = pos;
        printf("Now playing %c song.\n", queue[currentlyplaying]);
    }
}

void nextSong() {
    if (front == -1) {
        printf("Music list is empty, Add musics!\n");
        return;
    }
    
    if (currentlyplaying == -1) {
        currentlyplaying = front;
    } else {
        currentlyplaying = (currentlyplaying + 1) % size;
        if (currentlyplaying == (rear + 1) % size) {
            currentlyplaying = front;
        }
    }
    
    printf("Now playing %c song.\n", queue[currentlyplaying]);
}

void previousSong() {
    if (front == -1) {
        printf("Music list is empty, Add musics!\n");
        return;
    }
    
    if (currentlyplaying == -1) {
        currentlyplaying = rear;
    } else {
        currentlyplaying = (currentlyplaying - 1 + size) % size;
        if (currentlyplaying == (front - 1 + size) % size) {
            currentlyplaying = rear;
        }
    }
    
    printf("Now playing %c song.\n", queue[currentlyplaying]);
}

int main() {
    int choice = 0;

 do {
    char song = '\0';

    printf("\n=== Music player ===\n");
    printf("1. Add Song.\n");
    printf("2. Remove song.\n");
    printf("3. List all songs.\n");
    printf("4. Play song.\n");
    printf("5. Choose music.\n");
    printf("6. Next Song\n");
    printf("7. Previous song.\n");
    printf("8. Exit program.\n");

    printf("Choose an option: ");
    scanf("%d", &choice);
    while(getchar() != '\n');

    switch(choice) {
        case 1:
        printf("Song name: ");
        scanf(" %c", &song);
        while(getchar() != '\n');
        addSong(song);
        break;

        case 2:
        removeMusic();
        break;

        case 3:
        display();
        break;

        case 4:
        first();
        break;

        case 5:
        chooseMusic();
        break;

        case 6:
        nextSong();
        break;

        case 7:
        previousSong();
        break;

        case 8:
        printf("Thanks for using our app.\n");
        break;

        default:
        printf("Choose an option between(1-8)");

    }
 } while (choice != 8);
    
    return 0;
}