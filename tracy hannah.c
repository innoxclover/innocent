#include <stdio.h>

#define MAX_PATIENTS 50
#define MAX_DOCTORS 10
#define MAX_APPOINTMENTS 50

// Structure for Patient
struct Patient {
    int id;
    char name[30];
};

// Structure for Doctor
struct Doctor {
    int id;
    char name[30];
};

// Structure for Appointment
struct Appointment {
    int patient_id;
    int doctor_id;
    char date[12]; // e.g., "DD/MM/YYYY"
};

// Tables
struct Patient patients[MAX_PATIENTS];
struct Doctor doctors[MAX_DOCTORS];
struct Appointment appointments[MAX_APPOINTMENTS];

// Counts
int patient_count = 0, doctor_count = 0, appointment_count = 0;

// Function to add a new patient
void add_patient() {
    if (patient_count < MAX_PATIENTS); 
	{
        printf("Enter Patient ID: ");
        scanf("%d", &patients[patient_count].id);
        printf("Enter Patient Name: ");
        scanf(" %[^\n]", patients[patient_count].name);
        patient_count++;
        printf("Patient added!\n");
    }else{
        printf("Patient list is full.\n");
    }
}

// Function to add a new doctor
void add_doctor() {
    if (doctor_count < MAX_DOCTORS); 
	{
        printf("Enter Doctor ID: ");
        scanf("%d", &doctors[doctor_count].id);
        printf("Enter Doctor Name: ");
        scanf(" %[^\n]", doctors[doctor_count].name);
        doctor_count++;
        printf("Doctor added!\n");
    } else {
        printf("Doctor list is full.\n");
    }
}

// Function to add a new appointment
void add_appointment() {
    if (appointment_count < MAX_APPOINTMENTS); 
	{
        printf("Enter Patient ID: ");
        scanf("%d", &appointments[appointment_count].patient_id);
        printf("Enter Doctor ID: ");
        scanf("%d", &appointments[appointment_count].doctor_id);
        printf("Enter Date (DD/MM/YYYY): ");
        scanf(" %[^\n]", appointments[appointment_count].date);
        appointment_count++;
        printf("Appointment added!\n");
    } else {
        printf("Appointment list is full.\n");
    }
}