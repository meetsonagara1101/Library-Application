# Library Management System

## Overview
The Library Management System is a console-based application that allows users to manage library resources, including books and publications. The system provides functionality for adding new publications, removing existing ones, checking out items to members, and processing returns.

## Features

### 1. Data File Selection
- Supports multiple data file formats:
  - `LibRecsSmall.txt` (for testing)
  - `LibRecs.txt` (full library database)

### 2. Main Menu Options
The system provides the following main functionalities:
1. Add New Publication
2. Remove Publication
3. Checkout publication from library
4. Return publication to library
0. Exit

### 3. Publication Management
- **Adding Publications:**
  - Supports different types of publications (Books and Periodicals)
  - Structured data entry process
  - Validation of input data

- **Removing Publications:**
  - Search functionality to locate publications
  - Display of matching results in a tabulated format
  - Confirmation process before removal

### 4. Circulation Features
- **Checkout Process:**
  - Member verification
  - Publication availability check
  - Membership number validation
  - Due date assignment

- **Return Process:**
  - Publication lookup
  - Return date recording
  - Status update

### 5. Data Display Format
Publications are displayed in a structured format showing:

```
Row  |LocID | Title                          |Mem ID | Date       | Author          |
-----+------+--------------------------------+-------+------------+-----------------|
```

### 6. Data Persistence
- Changes can be saved to file
- Option to discard changes
- Confirmation prompts for data safety

## Technical Details

### Publication Records Format
Each publication record contains:
- Type (B for Book, P for Publication)
- Location ID
- Title
- Member ID (if checked out)
- Date
- Author (for books)

### Data File Structure
The system uses a text-based database with the following format:

```
Type    ID      LocID   Title   MemberID    Date    Author
```

## Usage Examples

### Checking Out a Publication
1. Select option `3` from main menu
2. Choose publication type
3. Search for publication
4. Enter valid membership number
5. Confirm checkout

### Returning a Publication
1. Select option `4` from main menu
2. Choose publication type
3. Locate publication in system
4. Confirm return

## Error Handling
- Invalid membership number detection
- Data validation for all inputs
- Confirmation prompts for critical actions
- Graceful exit handling

## System Requirements
- Console-based interface
- Text file reading/writing capabilities
- Support for date operations
- Memory management for large datasets

## Data Safety Features
- Save prompts when exiting
- Confirmation for discarding changes
- Data integrity checks

## Note
This system is designed for educational purposes and demonstrates fundamental library management operations. It includes basic security features and data validation but may require additional enhancements for production use.

