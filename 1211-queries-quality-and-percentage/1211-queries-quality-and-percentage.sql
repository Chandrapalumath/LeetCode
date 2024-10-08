WITH query_quality AS (
    SELECT 
        query_name, 
        AVG(rating * 1.0 / position) AS quality
    FROM Queries
    GROUP BY query_name
),
poor_query AS (
    SELECT 
        query_name,
        COUNT(CASE WHEN rating < 3 THEN 1 END) * 100.0 / COUNT(*) AS poor_query_percentage
    FROM Queries
    GROUP BY query_name
)
SELECT 
    q.query_name,
    ROUND(quality, 2) AS quality,
    ROUND(poor_query_percentage, 2) AS poor_query_percentage
FROM query_quality q
JOIN poor_query p
ON q.query_name = p.query_name;
