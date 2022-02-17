# using PostgreSQL (PSQL)
select customers.name, rentals.rentals_date from customers, rentals where customers.id=rentals.id_customers and extract(month from rentals.rentals_date) = 9 and extract(year from rentals.rentals_date) = 2016;
