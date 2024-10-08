CREATE TABLE student (
  id INT PRIMARY KEY,
  name VARCHAR(255),
  age INT,
  gender VARCHAR(10),
  address VARCHAR(255),
  email VARCHAR(255),
  phone VARCHAR(20)
);

INSERT INTO student (id, name, age, gender, address, email, phone) VALUES
(1, 'John Smith', 18, 'Male', '123 Main St, Anytown USA', 'johnsmith@example.com', '555-1234');

