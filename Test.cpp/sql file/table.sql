-- Create the database
CREATE DATABASE LibraryManagementSystem_24BCE10272;
USE LibraryManagementSystem_24BCE10272;

-- Create PUBLISHER table
CREATE TABLE PUBLISHER_24BCE10272 (
    Name VARCHAR(100) PRIMARY KEY DEFAULT 'Balalaji',
    Address VARCHAR(200),
    Phone VARCHAR(20)
);

-- Insert default publisher
INSERT INTO PUBLISHER_24BCE10272 (Name) VALUES ('Balalaji');

-- Create BOOK table
CREATE TABLE BOOK_24BCE10272 (
    Book_id INT PRIMARY KEY,
    Title VARCHAR(200) NOT NULL,
    Publisher_name VARCHAR(100) DEFAULT 'Balalaji',
    FOREIGN KEY (Publisher_name) REFERENCES PUBLISHER_24BCE10272(Name) ON UPDATE CASCADE
);

-- Create BOOK_AUTHORS table
CREATE TABLE BOOK_AUTHORS_24BCE10272 (
    Book_id INT,
    Author_name VARCHAR(100) DEFAULT 'Abhishek',
    PRIMARY KEY (Book_id, Author_name),
    FOREIGN KEY (Book_id) REFERENCES BOOK_24BCE10272(Book_id) ON DELETE CASCADE
);

-- Create LIBRARY_BRANCH table
CREATE TABLE LIBRARY_BRANCH_24BCE10272 (
    Branch_id INT PRIMARY KEY,
    Branch_name VARCHAR(100) NOT NULL,
    Address VARCHAR(200)
);

-- Create BOOK_COPIES table
CREATE TABLE BOOK_COPIES_24BCE10272 (
    Book_id INT,
    Branch_id INT,
    No_of_copies INT NOT NULL CHECK (No_of_copies >= 0),
    PRIMARY KEY (Book_id, Branch_id),
    FOREIGN KEY (Book_id) REFERENCES BOOK_24BCE10272(Book_id) ON DELETE CASCADE,
    FOREIGN KEY (Branch_id) REFERENCES LIBRARY_BRANCH_24BCE10272(Branch_id) ON DELETE CASCADE
);

-- Create BORROWER table
CREATE TABLE BORROWER_24BCE10272 (
    Card_no INT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    Address VARCHAR(200),
    Phone VARCHAR(20)
);

-- Create BOOK_LOANS table
CREATE TABLE BOOK_LOANS_24BCE10272 (
    Book_id INT,
    Branch_id INT,
    Card_no INT,
    Date_out DATE NOT NULL,
    Due_date DATE NOT NULL,
    PRIMARY KEY (Book_id, Branch_id, Card_no),
    FOREIGN KEY (Book_id) REFERENCES BOOK_24BCE10272(Book_id),
    FOREIGN KEY (Branch_id) REFERENCES LIBRARY_BRANCH_24BCE10272(Branch_id),
    FOREIGN KEY (Card_no) REFERENCES BORROWER_24BCE10272(Card_no),
    CHECK (Due_date > Date_out)
);