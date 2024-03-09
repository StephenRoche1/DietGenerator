#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    // Specify the path to your CSV file
    std::string csvFilePath = "C:\\Users\\roche\\source\\repos\\DietGenerator\\DietGenerator\\full_dataset.csv";

    // Open the CSV file
    std::ifstream csvFile(csvFilePath);

    // Check if the file is open
    if (!csvFile.is_open()) {
        std::cerr << "Error opening file: " << csvFilePath << std::endl;
        return 1; // Return an error code
    }

    // Read and print each line of the CSV file
    std::string line;
    if (std::getline(csvFile, line)) {
        // Use a stringstream to parse the CSV line
        std::istringstream ss(line);
        std::string token;

        // Print each element in the CSV line
        while (std::getline(ss, token, ',')) {
            // Cleanly print the token (you can customize this part)
            std::cout << token << "\t"; // Assuming tabs for separation
        }

        std::cout << std::endl; // Move to the next line for the next CSV record
    }
    else {
        std::cerr << "Error reading the first line from file: " << csvFilePath << std::endl;
    }

    // Close the file
    csvFile.close();

    return 0; // Return 0 to indicate successful execution
}
