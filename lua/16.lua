-- local z = 10
-- local function sum(a, b)
-- 	local y = a + z
-- 	return y
-- end
--
-- print(sum(1, 2))

-- local add10 = function(number)
-- 	return 10 + number
-- end
--
-- print(add10(5))
--

-- local add10 = function(number)
-- 	local outcome = 10 + number
-- 	return number, outcome
-- 	-- so in lua we can return more than 1 values as well
-- end
--
-- local stored, output = add10(20)
-- print(stored .. " had 10 added to it: " .. output)

-- so any number of values are allowed
local function add()
	return 1, 2, 3
end

local f, s, t = add()
print(f .. s .. t)
