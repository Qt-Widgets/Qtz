SELECT SUM(TABLE_ROWS)
FROM INFORMATION_SCHEMA.TABLES
WHERE TABLE_SCHEMA = DATABASE();
