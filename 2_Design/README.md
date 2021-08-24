# SDLC_27_EMB

# Design

## High Level Design

### Architecture Design :

![Architecture](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/blob/Production/2_Architecture/Architecture%20Diagram.png)

### Component Diagram :

![ComponentDiagram](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/blob/Production/2_Architecture/component%20diagram.PNG)

### Usecase Diagram :

![UsecaseDiagram](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/blob/Production/2_Architecture/Usecasehdl.jpg)

## Low Level Design

### State Diagram :

![State Diagram](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/blob/Production/2_Architecture/state%20diagram.png)

# Detail requirements

## High Level Requirements:

| ID   | Description                                          | Category  | Status      |
| ---- | ---------------------------------------------------- | --------- | ----------- |
| HR01 | User shall be able to add new patient record         | Technical | IMPLEMENTED |
| HR02 | User shall be able to read a patient record          | Technical | IMPLEMENTED |
| HR03 | User shall be able to update a patient record        | Technical | IMPLEMENTED |
| HR04 | User shall be able to delete a patient record        | Technical | IMPLEMENTED |
| HR05 | User shall be able to save records in a file         | Technical | IMPLEMENTED |
| HR06 | User shall be able to read data from a file          | Technical | IMPLEMENTED |
| HR07 | Data should not be lost in case of failure           | Scenario  | IMPLEMENTED |
| HR08 | Data should always be stored when closing the system | Scenario  | IMPLEMENTED |

## Low level Requirements:

| ID   | Description                                                                                                                                                                         | HLR ID                 | Status (Implemented/IMPLEMENTED) |
| ---- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------- | -------------------------------- |
| LR01 | (1). New record shall be added by providing all the asked information (2). Id should be unique and validated from persistent file or else patient record should not be accepted.    | HR01                   | IMPLEMENTED                      |
| LR02 | Reading patient data should be possible in 2 ways (1). first being by searching by id of a patient (2). By printing all the records available                                       | HR02                   | IMPLEMENTED                      |
| LR03 | While reading all the records, only 10 records per page should be visible and should add 10 more if user wants to see more                                                          | HR02                   | IMPLEMENTED                      |
| LR04 | If user searches for an invalid ID "No Record Found" message should be displayed                                                                                                    | HR02                   | IMPLEMENTED                      |
| LR05 | User need to search by id for the patient record to be updated, if no such record is available then "No Record Found" Message should be displayed                                   | HR03                   | IMPLEMENTED                      |
| LR06 | User need to search by id for the patient record to be deleted, if no such record is available then "No Record Found" Message should be displayed                                   | HR04                   | IMPLEMENTED                      |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05                   | IMPLEMENTED                      |
| LR06 | If opening the file fails, then the system should prompt the message "Unable to access file" and should not end the program execution                                               | HR05, HR06, HR07, HR08 | IMPLEMENTED                      |
| LR07 | When user Log off the system perform check and save data to file (1). If new data in inserted add it to file (2). If New data is not inserted do not add anything to file           | HR08                   | IMPLEMENTED                      |
