# USING PostgreSQL (psql)
SELECT name, EXTRACT(DAY FROM payday)::INT AS day FROM loan;