# SDLC_27_EMB

# Requirements

## Introduction

- The modules help to provides the patient data ,scheduling the appoint,ent for vaccination ,update a patient record and billing function.

## Research

A health care providers main aim is, caring for patients and the buildup of everyday tasks like paperwork, scheduling and billing can get in the way of that. What is patient management software anyway? A patient management system is also known as clinic management software, patient manager software, medical patient software or medical practice management software (MPM). It refers to a number of efficient automated systems designed for tracking patient information, diagnoses, prescriptions, interactions and encounters within healthcare organizations like medical clinics or hospitals.
The proposed system of e Vaccination system provide proper schedule of vaccine time . We can search near by hosptial and make a schedule.

### Features:

- Patient Vaccination Managements have features like:
  - Create a patient record
  - Delete a patient record
  - Read a patient record
  - Update a patient record
  - Save record to file
  - Read record from file

# 4W&#39;s and 1&#39;H

## WHO:

- Organization provides covid vaccination to patients.

## WHAT:

- High ERP system not affordable to the some of the organization.This module will help to records & update ,appointments the vaccination.

## WHEN:

- Vaccination drives going on ,so we will implement this module now in the hospital.

## WHERE:

- We will implement module in organization , hospital in the world wide

## HOW:

- The effective vaccination is done if transparency in appointment ,scheduling the vaccination in the system.

# SWOT Analaysis

![SWOT Analysis](https://user-images.githubusercontent.com/86118433/130115816-309e7967-bb44-4ae8-ac57-e325df6093a5.PNG)

# Detail requirements

## High Level Requirements:

| ID   | Description                                          | Category       | Status      |
| ---- | ---------------------------------------------------- | -------------- | ----------- |
| HR01 | User shall be able to add new patient record         | Functional     | In Progress |
| HR02 | User shall be able to read a patient record          | Functional     | In Progress |
| HR03 | User shall be able to update a patient record        | Functional     | In Progress |
| HR04 | User shall be able to delete a patient record        | Functional     | In Progress |
| HR05 | User shall be able to save records in a file         | Functional     | In Progress |
| HR06 | User shall be able to read data from a file          | Functional     | In Progress |
| HR07 | Data should not be lost or corrupted if any failure  | Non-Functional | In Progress |
| HR08 | When closing the system data should always be stored | Non-Functional | In Progress |

## Low level Requirements:

| ID   | Description                                                                                                                                                                         | HLR ID                 | Status (Implemented/In Progress) |
| ---- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------- | -------------------------------- |
| LR01 | (1). New record shall be added by providing all the asked information (2). Id should be unique and validated from persistent file or else patient record should not be accepted.    | HR01                   | In Progress                      |
| LR02 | Reading patient data should be possible in 2 ways (1). first being by searching by id of a patient (2). By printing all the records available                                       | HR02                   | In Progress                      |
| LR03 | While reading all the records, only 10 records per page should be visible and should add 10 more if user wants to see more                                                          | HR02                   | In Progress                      |
| LR04 | If user searches for an invalid ID "No Record Found" message should be displayed                                                                                                    | HR02                   | In Progress                      |
| LR05 | User need to search by id for the patient record to be updated, if no such record is available then "No Record Found" Message should be displayed                                   | HR03                   | In Progress                      |
| LR06 | User need to search by id for the patient record to be deleted, if no such record is available then "No Record Found" Message should be displayed                                   | HR04                   | In Progress                      |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05                   | In Progress                      |
| LR06 | If opening the file fails, then the system should prompt the message "Unable to access file" and should not end the program execution                                               | HR05, HR06, HR07, HR08 | In Progress                      |
| LR07 | When user Log off the system perform check and save data to file (1). If new data in inserted add it to file (2). If New data is not inserted do not add anything to file           | HR08                   | In Progress                      |
