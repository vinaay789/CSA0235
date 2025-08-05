#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "parcels.txt"
#define MAX 100

struct Parcel {
    char trackingID[20];
    char sender[50];
    char receiver[50];
    char status[30];
};

void addParcel() {
    struct Parcel p, temp;
    FILE *fp = fopen(FILENAME, "a+");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Tracking ID: ");
    scanf("%s", p.trackingID);

    // Check for duplicate ID
    while (fscanf(fp, "%s %s %s %s", temp.trackingID, temp.sender, temp.receiver, temp.status) != EOF) {
        if (strcmp(temp.trackingID, p.trackingID) == 0) {
            printf("Tracking ID already exists!\n");
            fclose(fp);
            return;
        }
    }

    printf("Enter Sender Name: ");
    scanf("%s", p.sender);
    printf("Enter Receiver Name: ");
    scanf("%s", p.receiver);
    printf("Enter Parcel Status: ");
    scanf("%s", p.status);

    fprintf(fp, "%s %s %s %s\n", p.trackingID, p.sender, p.receiver, p.status);
    printf("Parcel Added Successfully!\n");

    fclose(fp);
}

void updateStatus() {
    char trackingID[20], newStatus[30];
    struct Parcel parcels[MAX];
    int count = 0, found = 0;
    FILE *fp = fopen(FILENAME, "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    while (fscanf(fp, "%s %s %s %s", parcels[count].trackingID, parcels[count].sender, parcels[count].receiver, parcels[count].status) != EOF) {
        count++;
    }
    fclose(fp);

    printf("\nEnter Tracking ID to Update Status: ");
    scanf("%s", trackingID);

    for (int i = 0; i < count; i++) {
        if (strcmp(parcels[i].trackingID, trackingID) == 0) {
            printf("Enter New Status: ");
            scanf("%s", newStatus);
            strcpy(parcels[i].status, newStatus);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Tracking ID not found!\n");
        return;
    }

    fp = fopen(FILENAME, "w");
    for (int i = 0; i < count; i++) {
        fprintf(fp, "%s %s %s %s\n", parcels[i].trackingID, parcels[i].sender, parcels[i].receiver, parcels[i].status);
    }
    fclose(fp);

    printf("Parcel Status Updated Successfully!\n");
}

void searchParcel() {
    char trackingID[20];
    struct Parcel p;
    int found = 0;
    FILE *fp = fopen(FILENAME, "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Tracking ID to Search: ");
    scanf("%s", trackingID);

    while (fscanf(fp, "%s %s %s %s", p.trackingID, p.sender, p.receiver, p.status) != EOF) {
        if (strcmp(p.trackingID, trackingID) == 0) {
            printf("\nTracking ID: %s\nSender: %s\nReceiver: %s\nStatus: %s\n", p.trackingID, p.sender, p.receiver, p.status);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Parcel Not Found!\n");
    }

    fclose(fp);
}

void displayAllParcels() {
    struct Parcel p;
    FILE *fp = fopen(FILENAME, "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n%-15s %-15s %-15s %-15s\n", "Tracking ID", "Sender", "Receiver", "Status");
    printf("------------------------------------------------------------\n");

    while (fscanf(fp, "%s %s %s %s", p.trackingID, p.sender, p.receiver, p.status) != EOF) {
        printf("%-15s %-15s %-15s %-15s\n", p.trackingID, p.sender, p.receiver, p.status);
    }

    fclose(fp);
}

void deleteParcel() {
    char trackingID[20];
    struct Parcel parcels[MAX];
    int count = 0, found = 0;
    FILE *fp = fopen(FILENAME, "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    while (fscanf(fp, "%s %s %s %s", parcels[count].trackingID, parcels[count].sender, parcels[count].receiver, parcels[count].status) != EOF) {
        count++;
    }
    fclose(fp);

    printf("\nEnter Tracking ID to Delete: ");
    scanf("%s", trackingID);

    fp = fopen(FILENAME, "w");
    for (int i = 0; i < count; i++) {
        if (strcmp(parcels[i].trackingID, trackingID) != 0) {
            fprintf(fp, "%s %s %s %s\n", parcels[i].trackingID, parcels[i].sender, parcels[i].receiver, parcels[i].status);
        } else {
            found = 1;
        }
    }
    fclose(fp);

    if (found) {
        printf("Parcel Deleted Successfully!\n");
    } else {
        printf("Tracking ID not found!\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n--- Parcel Tracking System ---\n");
        printf("1. Add Parcel\n");
        printf("2. Update Parcel Status\n");
        printf("3. Search Parcel\n");
        printf("4. Display All Parcels\n");
        printf("5. Delete Parcel\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addParcel(); break;
            case 2: updateStatus(); break;
            case 3: searchParcel(); break;
            case 4: displayAllParcels(); break;
            case 5: deleteParcel(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}

