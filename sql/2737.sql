# USING PostgreSQL (PSQL)
SELECT
    name,
    customers_number
FROM
    lawyers
WHERE
    customers_number =(
        SELECT
            MAX(customers_number)
        FROM
            lawyers
    )
UNION
(
    SELECT
        name,
        customers_number
    FROM
        lawyers
    WHERE
        customers_number =(
            SELECT
                MIN(customers_number)
            FROM
                lawyers
        )
    UNION
    SELECT
        'Average' AS name,
        AVG(customers_number) :: INT AS customers_number
    FROM
        lawyers
);