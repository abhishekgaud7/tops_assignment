Create database New;
use  new;
-- Create Tables
CREATE TABLE Users (
    user_id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(255) NOT NULL,
    password VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL,
    phone_number VARCHAR(15),
    address TEXT
);

CREATE TABLE Categories (
    category_id INT AUTO_INCREMENT PRIMARY KEY,
    category_name VARCHAR(255) NOT NULL
);

CREATE TABLE Dishes (
    dish_id INT AUTO_INCREMENT PRIMARY KEY,
    dish_name VARCHAR(255) NOT NULL,
    category_id INT,
    description TEXT,
    price DECIMAL(10, 2),
    image_url VARCHAR(255),
    availability BOOLEAN DEFAULT TRUE,
    FOREIGN KEY (category_id) REFERENCES Categories(category_id)
);

CREATE TABLE Suppliers (
    supplier_id INT AUTO_INCREMENT PRIMARY KEY,
    supplier_name VARCHAR(255) NOT NULL,
    contact_name VARCHAR(255),
    contact_email VARCHAR(255),
    contact_phone VARCHAR(15),
    address TEXT
);

CREATE TABLE Ingredients (
    ingredient_id INT AUTO_INCREMENT PRIMARY KEY,
    ingredient_name VARCHAR(255) NOT NULL,
    supplier_id INT,
    quantity_in_stock DECIMAL(10, 2),
    unit_price DECIMAL(10, 2),
    FOREIGN KEY (supplier_id) REFERENCES Suppliers(supplier_id)
);

CREATE TABLE Dish_Ingredients (
    dish_ingredient_id INT AUTO_INCREMENT PRIMARY KEY,
    dish_id INT,
    ingredient_id INT,
    quantity DECIMAL(10, 2),
    FOREIGN KEY (dish_id) REFERENCES Dishes(dish_id),
    FOREIGN KEY (ingredient_id) REFERENCES Ingredients(ingredient_id)
);

CREATE TABLE Promotions (
    promotion_id INT AUTO_INCREMENT PRIMARY KEY,
    promotion_name VARCHAR(255) NOT NULL,
    start_date DATE,
    end_date DATE,
    discount_percentage DECIMAL(5, 2),
    description TEXT
);

CREATE TABLE Dish_Promotions (
    dish_promotion_id INT AUTO_INCREMENT PRIMARY KEY,
    dish_id INT,
    promotion_id INT,
    FOREIGN KEY (dish_id) REFERENCES Dishes(dish_id),
    FOREIGN KEY (promotion_id) REFERENCES Promotions(promotion_id)
);

CREATE TABLE Orders (
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    user_id INT,
    order_date DATETIME,
    status VARCHAR(50),
    delivery_address TEXT,
    FOREIGN KEY (user_id) REFERENCES Users(user_id)
);

CREATE TABLE Order_Items (
    order_item_id INT AUTO_INCREMENT PRIMARY KEY,
    order_id INT,
    dish_id INT,
    quantity INT,
    price DECIMAL(10, 2),
    FOREIGN KEY (order_id) REFERENCES Orders(order_id),
    FOREIGN KEY (dish_id) REFERENCES Dishes(dish_id)
);

CREATE TABLE Delivery (
    delivery_id INT AUTO_INCREMENT PRIMARY KEY,
    order_id INT,
    delivery_date DATETIME,
    delivery_status VARCHAR(50),
    delivery_address TEXT,
    delivery_contact VARCHAR(255),
    FOREIGN KEY (order_id) REFERENCES Orders(order_id)
);

CREATE TABLE Reviews (
    review_id INT AUTO_INCREMENT PRIMARY KEY,
    user_id INT,
    dish_id INT,
    rating INT CHECK (rating >= 1 AND rating <= 5),
    comment TEXT,
    review_date DATETIME,
    FOREIGN KEY (user_id) REFERENCES Users(user_id),
    FOREIGN KEY (dish_id) REFERENCES Dishes(dish_id)
);

-- Insert Sample Data
INSERT INTO Users (username, password, email, phone_number, address) VALUES
('john_doe', 'password123', 'john@example.com', '1234567890', '123 Elm Street'),
('jane_smith', 'password456', 'jane@example.com', '0987654321', '456 Oak Avenue');

INSERT INTO Categories (category_name) VALUES
('Appetizers'),
('Main Course'),
('Desserts'),
('Beverages');

INSERT INTO Suppliers (supplier_name, contact_name, contact_email, contact_phone, address) VALUES
('Fresh Farms', 'Alice Johnson', 'alice@freshfarms.com', '9876543210', '789 Pine Road'),
('Dairy Best', 'Bob Smith', 'bob@dairybest.com', '8765432109', '321 Maple Street');

INSERT INTO Ingredients (ingredient_name, supplier_id, quantity_in_stock, unit_price) VALUES
('Romaine Lettuce', 1, 100, 0.50),
('Tomato', 1, 200, 0.30),
('Parmesan Cheese', 2, 50, 1.00),
('Spaghetti', 2, 150, 0.80);

INSERT INTO Dishes (dish_name, category_id, description, price, image_url) VALUES
('Caesar Salad', 1, 'Fresh romaine lettuce with Caesar dressing', 5.99, 'caesar_salad.jpg'),
('Spaghetti Bolognese', 2, 'Spaghetti with rich Bolognese sauce', 12.99, 'spaghetti_bolognese.jpg'),
('Chocolate Cake', 3, 'Decadent chocolate cake with frosting', 6.49, 'chocolate_cake.jpg'),
('Lemonade', 4, 'Freshly squeezed lemonade', 2.99, 'lemonade.jpg');

INSERT INTO Dish_Ingredients (dish_id, ingredient_id, quantity) VALUES
(1, 1, 1),
(1, 2, 0.5),
(1, 3, 0.2),
(2, 4, 1);

INSERT INTO Promotions (promotion_name, start_date, end_date, discount_percentage, description) VALUES
('Summer Special', '2024-07-01', '2024-07-31', 10.00, 'Enjoy 10% off on selected dishes during the summer!'),
('Holiday Discount', '2024-12-01', '2024-12-31', 15.00, 'Get 15% off during the holiday season.');

INSERT INTO Dish_Promotions (dish_id, promotion_id) VALUES
(1, 1),
(2, 2);

INSERT INTO Orders (user_id, order_date, status, delivery_address) VALUES
(1, '2024-07-17 12:34:56', 'Processing', '123 Elm Street'),
(2, '2024-07-17 13:45:22', 'Completed', '456 Oak Avenue');

INSERT INTO Order_Items (order_id, dish_id, quantity, price) VALUES
(1, 1, 2, 5.99),
(1, 4, 1, 2.99),
(2, 2, 1, 12.99),
(2, 3, 2, 6.49);

INSERT INTO Delivery (order_id, delivery_date, delivery_status, delivery_address, delivery_contact) VALUES
(1, '2024-07-17 14:30:00', 'Out for Delivery', '123 Elm Street', 'John Doe'),
(2, '2024-07-17 15:00:00', 'Delivered', '456 Oak Avenue', 'Jane Smith');

INSERT INTO Reviews (user_id, dish_id, rating, comment, review_date) VALUES
(1, 1, 5, 'Absolutely delicious!', '2024-07-17 14:00:00'),
(2, 2, 4, 'Great taste but a bit pricey.', '2024-07-17 15:00:00'),
(1, 3, 3, 'Too sweet for my liking.', '2024-07-17 16:00:00');

SELECT * FROM Users, Categories,suppliers, Ingredients, Dishes, Dish_Ingredients,Promotions, Dish_Promotions,Orders,Order_Items,Delivery, Reviews;

SELECT
    o.order_date,
    oi.dish_id,
    d.dish_name,
    oi.quantity,
    oi.price
FROM
    Orders o
    JOIN Order_Items oi ON o.order_id = oi.order_id
    JOIN Dishes d ON oi.dish_id = d.dish_id;




