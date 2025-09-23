--1683. Invalid Tweets
Ans:
SELECT tweet_id FROM Tweets
WHERE length(content)>15;
