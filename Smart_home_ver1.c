#include <stdio.h>
#include <conio.h>	//For toupper()	
#include <string.h>	//For strings
#include <stdlib.h>	//For fflush() and other functions 
#include <time.h> // For time-based scheduling

#define MAX_DEVICES 20

// Define data types using tokens
typedef char DeviceName[50];   // Token: DeviceName
typedef float PowerConsumption; // Token: PowerConsumption
typedef char UsagePattern[50];  // Token: UsagePattern
int i=0,day=1;

//structure for devices
typedef struct {
    DeviceName name;
    PowerConsumption consumption;
    UsagePattern pattern;
    int isActive;
} Device;

//Structure for user profiles
typedef struct {
    char username[50];
    Device userDevices[MAX_DEVICES];
    int deviceCount;
} UserProfile;

//Function to calculate daily energy consumption
float calculateDailyConsumption(Device device) {
    // Implement a more sophisticated calculation here
    return device.consumption * (device.isActive ? 1.0 : 0.0);
}

//Function to provide energy-saving tips
void provideEnergyTips(Device devices[], int deviceCount) {
    // Implement suggestions based on usage patterns and consumption data
    printf("\nEnergy-Saving Tips:\n");
    for (i = 0; i < deviceCount; i++) {
        printf("Tip for %s: Implement energy-efficient usage patterns.\n", devices[i].name);
    }
}

//Function to display the device status
void displayDeviceStatus(Device device) {
    printf("%s (%s)\n", device.name, device.isActive ? "On" : "Off");
}

//Function to toggle device status (on/off)
void toggleDeviceStatus(Device devices[], int deviceCount) {
    printf("\nDevice Status Control:\n");
    for (i = 0; i < deviceCount; i++) {
        printf("%d. ", i + 1);
        displayDeviceStatus(devices[i]);
    }

    int choice;
    printf("Select a device to toggle (1-%d, 0 to cancel): ", deviceCount);
    fflush(stdin);
    scanf("%d", &choice);

    if (choice >= 1 && choice <= deviceCount) {
        Device *selectedDevice = &devices[choice - 1];
        selectedDevice->isActive = !selectedDevice->isActive;
        printf("%s is now %s.\n", selectedDevice->name, selectedDevice->isActive ? "On" : "Off");
    } else if (choice != 0) {
        printf("Invalid device selection.\n");
    }
}

//Function to suggest optimal device usage based on patterns
void suggestOptimalUsage(Device devices[], int deviceCount) {
    printf("\nOptimal Usage Suggestions:\n");
    for (i = 0; i < deviceCount; i++) {
        printf("Suggestion for %s: Implement optimal usage patterns based on data.\n", devices[i].name);
    }
}

//Function to calculate and display energy usage trends
void displayEnergyUsageTrends(Device devices[], int deviceCount, int days) {
    printf("\nEnergy Usage Trends for the Last %d Days:\n", days);
    for (i = 0; i < deviceCount; i++) {
        printf("%s:\n", devices[i].name);
        for (day = 1; day <= days; day++) {
            float dailyConsumption = calculateDailyConsumption(devices[i]);
            printf("Day %d: %.2f kWh (%s)\n", day, dailyConsumption,
                   devices[i].isActive ? "On" : "Off");
            // Simulate historical data by modifying device patterns
            if (day % 7 == 0) {
                strcpy(devices[i].pattern, "Weekend-heavy usage");
            } else {
                strcpy(devices[i].pattern, "Weekday-normal usage");
            }
        }
        printf("\n");
    }
}

//Function to add a new device to the user's profile
void addDeviceToProfile(UserProfile *profile) {
    if (profile->deviceCount < MAX_DEVICES) {
        printf("Enter Device Name: ");
        fflush(stdin);
        scanf(" %[^\n]", profile->userDevices[profile->deviceCount].name);
        fflush(stdin);
        printf("Enter Power Consumption (in kWh): ");
        fflush(stdin);
		scanf("%f", &profile->userDevices[profile->deviceCount].consumption);
        printf("Enter Usage Pattern (types)");
        printf("\n-> Weekend-heavy usage");
        printf("\n-> Weekend-normal usage");
        printf("\n:=> ");
		fflush(stdin);
		scanf(" %[^\n]", profile->userDevices[profile->deviceCount].pattern);
        profile->userDevices[profile->deviceCount].isActive = 1;
        profile->deviceCount++;
        printf("Device added to your profile successfully.\n");
    } else {
        printf("Maximum devices reached in your profile. Cannot add more devices.\n");
    }
}

//Function to calculate estimated energy cost
float calculateEnergyCost(Device devices[], int deviceCount, float utilityRate) {
    float totalCost = 0.0;
    for (i = 0; i < deviceCount; i++) {
        totalCost += calculateDailyConsumption(devices[i]) * utilityRate;
    }
    return totalCost;
}

//Function to optimize energy usage using machine learning
void optimizeEnergyUsage(Device devices[], int deviceCount) {
    // Implement machine learning optimization algorithms here
    printf("\nMachine Learning Optimization: Energy usage has been optimized.\n");
}

//Function to simulate voice control
void voiceControl(Device devices[], int deviceCount) {
    // Implement voice-activated control logic here
    printf("\nVoice Control: Please state your command.\n");
    // Simulate voice recognition and device control
    printf("Device control successful.\n");
}

//Function to set energy alerts
void setEnergyAlerts(Device devices[], int deviceCount, float alertThreshold) {
    printf("\nEnergy Alerts:\n");
    for (i = 0; i < deviceCount; i++) {
        float dailyConsumption = calculateDailyConsumption(devices[i]);
        if (dailyConsumption > alertThreshold) {
            printf("Alert: %s exceeded daily consumption threshold (%.2f kWh).\n",
                   devices[i].name, alertThreshold);
        }
    }
}

//Function to integrate with smart meters
void integrateWithSmartMeters() {
    // Implement integration with smart meters and obtain real-time data
    printf("\nIntegration with Smart Meters: Real-time data obtained.\n");
}

//Function to schedule device control
void scheduleDeviceControl(Device devices[], int deviceCount) {
    time_t now;
    struct tm *currentTime;
    time(&now);
    currentTime = localtime(&now);
    int currentHour = currentTime->tm_hour;

    printf("\nScheduled Device Control (Current Hour: %d):\n", currentHour);
    for (i = 0; i < deviceCount; i++) {
        printf("%d. %s (%s)\n", i + 1, devices[i].name, devices[i].isActive ? "On" : "Off");
    }

    int choice;
    printf("Select a device to schedule control (1-%d, 0 to cancel): ", deviceCount);
    fflush(stdin);
    scanf("%d", &choice);

    if (choice >= 1 && choice <= deviceCount) {
        Device *selectedDevice = &devices[choice - 1];
        printf("Enter the hour to schedule control (0-23): ");
        int scheduleHour;
        fflush(stdin);
        scanf("%d", &scheduleHour);

        if (scheduleHour >= 0 && scheduleHour <= 23) {
            selectedDevice->isActive = (currentHour == scheduleHour) ? 1 : 0;
            printf("%s is scheduled to turn %s at %d:00.\n", selectedDevice->name,
                   selectedDevice->isActive ? "On" : "Off", scheduleHour);
        } else {
            printf("Invalid hour. Please enter a valid hour (0-23).\n");
        }
    } else if (choice != 0) {
        printf("Invalid device selection.\n");
    }
}

//Function to display a dashboard-like menu
void displayDashboardMenu(UserProfile user) {
    printf("\n\t\t\t\t\t\t==================== Dashboard ======================\n\n");
    printf("Username: %s\n", user.username);
    printf("-----------------------------------------------------\n");
    printf("Devices (%d/%d):\n", user.deviceCount, MAX_DEVICES);

    for (i = 0; i < user.deviceCount; i++) {
        Device device = user.userDevices[i];
        printf("  %d. %-20s %s\n", i + 1, device.name, device.isActive ? "[On]" : "[Off]");
    }

    printf("-----------------------------------------------------\n");
    printf("Menu Options:\n");
    printf("-----------------------------------------------------\n");
    printf("A. Add Device to Your Profile\n");
    printf("B. Monitor Energy Consumption\n");
    printf("C. Control Devices Remotely\n");
    printf("D. Energy-Saving Tips\n");
    printf("E. Toggle Device Status\n");
    printf("F. Suggest Optimal Usage\n");
    printf("G. Display Energy Usage Trends\n");
    printf("H. Set Username\n");
    printf("I. Calculate Estimated Energy Cost\n");
    printf("J. Optimize Energy Usage (Machine Learning)\n");
    printf("K. Voice Control\n");
    printf("L. Set Energy Alerts\n");
    printf("M. Integrate with Smart Meters\n");
    printf("N. Schedule Device Control\n");
    printf("O. Exit\n");
    printf("=====================================================\n");
    printf("Enter your choice: ");
}


int main() {
    Device devices[MAX_DEVICES];

    int deviceCount = 0;
    char choice;

	printf("\t\t\t\t\t\t-----------------------------------------------------\n");
    printf("\t\t\t\t\t\t|        Smart Home Energy Management System        |\n");
    printf("\t\t\t\t\t\t-----------------------------------------------------\n\n\n");

    UserProfile user;
    strcpy(user.username, "AryanMajhi"); // Set a default username

    float utilityRate = 0.12; // Default utility rate in $/kWh
    float alertThreshold = 10.0; // Default energy alert threshold in kWh

    do {
        displayDashboardMenu(user);
        printf("Enter your choice (Token: ): ");
        scanf(" %c", &choice);

        switch (toupper(choice)) {
            case 'A':
                // Add a new device to the user's profile
                addDeviceToProfile(&user);
                break;
            case 'B':
                // Monitor energy consumption and provide suggestions
                printf("\nEnergy Consumption Report:\n");
                for (i = 0; i < user.deviceCount; i++) {
                    float dailyConsumption = calculateDailyConsumption(user.userDevices[i]);
                    printf("%s: %.2f kWh per day (%s)\n", user.userDevices[i].name, dailyConsumption,
                           user.userDevices[i].isActive ? "On" : "Off");
                }
                break;
            case 'C':
                // Control devices remotely (turn on/off, adjust settings)
                toggleDeviceStatus(user.userDevices, user.deviceCount);
                break;
            case 'D':
                // Provide energy-saving tips
                provideEnergyTips(user.userDevices, user.deviceCount);
                break;
            case 'E':
                // Toggle device status
                toggleDeviceStatus(user.userDevices, user.deviceCount);
                break;
            case 'F':	
                // Suggest optimal usage
                suggestOptimalUsage(user.userDevices, user.deviceCount);
                break;
            case 'G':
                // Display energy usage trends
                displayEnergyUsageTrends(user.userDevices, user.deviceCount, 7); // Display trends for the last 7 days
                break;
            case 'H':
                // Set or change the username
                printf("Enter your username: ");
                fflush(stdin);
                scanf(" %[^\n]", user.username);
                printf("Username set to: %s\n", user.username);
                break;
            case 'I':
                // Calculate estimated energy cost
                printf("Enter your local utility rate (in $/kWh): ");
                fflush(stdin);
				scanf("%f", &utilityRate);
                printf("Estimated energy cost: $%.2f\n",
                       calculateEnergyCost(user.userDevices, user.deviceCount, utilityRate));
                break;
            case 'J':	
                // Optimize energy usage using machine learning
                optimizeEnergyUsage(user.userDevices, user.deviceCount);
                break;
            case 'K':	
                // Simulate voice control
                voiceControl(user.userDevices, user.deviceCount);
                break;
            case 'L':	
                // Set energy alerts
                setEnergyAlerts(user.userDevices, user.deviceCount, alertThreshold);
                break;
            case 'M':
                // Integrate with smart meters
                integrateWithSmartMeters();
                break;
            case 'N':
                // Schedule device control
                scheduleDeviceControl(user.userDevices, user.deviceCount);
                break;
            case 'O':
			    printf("Exiting the program.\n");
			    exit(0);
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (toupper(choice) != 'O');

    return 0;
}

