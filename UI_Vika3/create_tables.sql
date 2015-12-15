CREATE TABLE Computers (
    id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    name VARCHAR NOT NULL,
    type INTEGER NOT NULL,
    yearBuilt INTEGER,
    wasBuilt BOOL
)

CREATE TABLE Scientists (
    id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    name VARCHAR NOT NULL,
    sex INTEGER NOT NULL,
    yearBorn INTEGER NOT NULL,
    yearDied INTEGER
)

CREATE TABLE ScientistComputerConnections(
    id INTEGER PRIMARY KEY AYTOINCREMENT NOT NULL,
    scientistName VARCHAR,
    scientistYearBorn INTEGER,
    computerName VARCHAR,
    computerYearBuilt INTEGER,
    foreign key (scientistName) references Scientists(name),
    foreign key (scientistYearBorn) references Scientists(yearBorn),
    foreign key (computerName) references Computers(name),
    foreign key (computerYearBuilt) references Computers(yearBuilt)
)