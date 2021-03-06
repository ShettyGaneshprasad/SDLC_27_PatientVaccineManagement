# SDLC_27_PatientVaccineManagement
|Linux & Windows Build Status |Unity Testing & Code Coverage  |	Dynamic & Static Code Quality |	Release & Git Inspector | Codacy & CodeInspector|
|------|---------------|--------------|--------------|--------------|
|[![Build](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/c-Build-Linux.yml/badge.svg)](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/c-Build-Linux.yml) [![Build](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/c-Build-Windows.yml/badge.svg)](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/c-Build-Windows.yml)|[![Unit Testing - Unity](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/Unitytest.yml/badge.svg)](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/Unitytest.yml)[![CI-Coverage](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/Code%20Coverage.yml/badge.svg)](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/Code%20Coverage.yml)|[![Valgrind-Dynamic Code Quality Analysis](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/codeQualityDynamic.yml/badge.svg)](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/codeQualityDynamic.yml)[![Cppcheck-Static Code Quality Analysis](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/codeQualityStatic.yml/badge.svg)](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/codeQualityStatic.yml)|[![Release App on Github.](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/release.yml/badge.svg)](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/release.yml)[![Contribution Check - Git Inspector](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/Git%20-Inspector.yml/badge.svg)](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/actions/workflows/Git%20-Inspector.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/c274c6793ff049c0931d46b2d568c4dc)](https://www.codacy.com/gh/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=ShettyGaneshprasad/SDLC_27_PatientVaccineManagement&amp;utm_campaign=Badge_Grade)[![Code Inspector Badge](https://www.code-inspector.com/project/26786/status/svg)](https://www.code-inspector.com/project/26786/status/svg)|






![Banner](https://github.com/ShettyGaneshprasad/SDLC_27_PatientVaccineManagement/blob/Production/1_Requirements/pvmsbanner.jpg)
# Introduction

- The modules help to provides the patient data ,scheduling the appointment for vaccination ,update a patient record and billing function.
- During COVID-19 Pnademic, Vaccination is the most effective protection one can give to themselves but managing patients at small hospitals and clinics may be a daunting task as they are not equipped with high end HMS and ERP systems so to ease the process this system will enable one to perform CRUD operations on patients records and will facilitate a smooth process of the hospital functioning.
- This topic was chosen because it gives me an opportunity to implement efficient data structures and provides me flexibilty to understand multiple C programming concepts.

## Folder Structure

| Folder              | Description                                                      |
| ------------------- | ---------------------------------------------------------------- |
| 1_Requirements      | Documents detailing requirements and research                    |
| 2_Design            | Structural and Behavioural Diagrams for High Level and Low level |
| 3_Implementation    | All code and documentation                                       |
| 4_TestPlanAndOutput | Documents with test plans and outputs                            |
| 5_Report            | Generated Report                                                 |
| 6_ImagesandVideos   | All the UML diagrams and other required images                   |
| 7_Data              | Files having text file                                           |

## Git Inspector
![image](https://user-images.githubusercontent.com/50592455/130726410-92133e94-5ff7-4a86-942c-fae257ac6c21.png)



## Contributors List and Summary

| PS No.   | Name                         |               Contribution of team members                                 | Issuess Raised | Issues Resolved | No Test Cases |  Pass |
| -------- | ---------------------------- | -------------------------------------------------------------------------- | -------------- | --------------- | ------------- | ----- |
| 99005695 | Mihir Adarsh                 | Patient Vaccine Management                                                 | Nil            | Nil             | 0             | 0     |
| 99005632 | Srinidhi V Nayak             | Patient Vaccine Management                                                 | Nil            | Nil             | 0             | 0     |
| 99005682 | Anand Prakash Botkule        | Swot,4W&1H,Main.c,vaccination.h,test.c,gitinspector,codecoverage,Unity     | 8              | 8               | 2             | 2     |
| 99005664 | Kanishk Thakur               | Patient Vaccine Management                                                 | Nil            | Nil             | 0             | 0     |
| 99005693 | Vysyaraju Srikar             | Patient Vaccine Management                                                 | Nil            | Nil             | 0             | 0     |
| 99005662 | Nikita Gajanan Deshmukh      | Patient Vaccine Management                                                 | Nil            | Nil             | 0             | 0     |
| 99005658 | Amit Kumar Sahani            | Patient Vaccine Management                                                 | Nil            | Nil             | 0             | 0     |
| 99005636 | Ganeshprasad Santhosh Shetty | Created and assigned issue,Github workflow,Kanban,various patient functions, Unit testing| 35            | 12             | 4             | 4     |
| 99005661 | Singama Setti Sai Pruthvi    | Patient Vaccine Management                                                 | Nil            | Nil             | 0             | 0     |
| 99005687 | Minhaaz Shaik                | Patient Vaccine Management                                                 | Nil            | Nil             | 0             | 0     |

## Features

| Feature Id | Feature                                                          |
| ---------- | ---------------------------------------------------------------- |
| F_01       | Option to load older saved data                                  |
| F_02       | Save data to file if only new data is added                      |
| F_03       | Update data in list and file(if in file)                         |
| F_04       | Deleting record automatically updates Record file and Index File |
| F_05       | New records gets saved in file at program shut down              |
| F_06       | Before program shut down all memory is freed and clean           |
| F_07       | Used Binary File System for quick access to files                |
| F_08       | Search of Data is possible from both List and file               |
| F_09       | Dynamic memory allocation and deallocation implemented           |

## Challenges faced and How it was Overcome

| Sr. No. | Challenges                                                                            | Overcome                                                                                          |
| ------- | ------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------- |
| 1       | Making of UML diagrams                                                                | By Studing about the basic concepts of making UML diagram                                         |
| 2       | Writing all the requirements,cost,swot analysis,4W 1H and High/low level requirements | By studing deep about the project                                                                 |
| 3       | Creating github Workflows                                                             | By Code Inspection                                                                                |
| 4       | Pushing files and folders to repository by Git bash                                   | By removing all the previous pushed files and folders                                             |
| 5       | C/C++ CI - Build Status is not passing                                                | By modifying the code                                                                             |
| 6       | Contributors pushing files in a repository                                            | Discussed issues in standup meeting call and helped each other to push files                      |
| 7       | Assigning Modules to Team Members                                                     | Decided with Team Members & assigned with the Tasks in meeting                                    |
| 8       | Negotiating with views                                                                | Sharing ideas, views and concluded the problem with a solution which would benefit the whole team |
| 9       | Unexpertise in any language                                                           | Helping the team members with the language they don't know                                        |
| 10      | De-motivation at any point                                                            | Motivating each other and working as a TEAM                                                       |

## Programming Language and Build With

### Following were used in Project

- C Language
- Visual Studio Code
- Codacy
- Code Inspector
- Git
