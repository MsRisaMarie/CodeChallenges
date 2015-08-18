-- assigns z as the range and checks if modulus is 0, if it is then print the string
fizzbuzz' :: [(Integer, String)] -> Integer -> String
fizzbuzz' st nb = foldl (\str (num, subst) -> if nb `mod` num == 0 then str ++ subst else str ++ "") "" st

-- if string is null show number
fizzbuzz :: [(Integer, String)] -> Integer -> String
fizzbuzz st nb = if null str then show nb else str
  where str = fizzbuzz' st nb

-- gives input values types and assigns them to the fizzbuzz function
fb :: Integer -> Integer -> Integer -> IO()
-- use mapM_ takes out the [ ] and only stores the values.
-- putStrLn prints the values
-- map returns a list constructed by applying the 1st arg to all items in a list.
fb x y z = mapM_ putStrLn $ map (fizzbuzz [(x, "Fizz"), (y, "Buzz")]) [0..z]
