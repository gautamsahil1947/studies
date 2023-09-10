-- while-loop

local peeps = 10

while peeps > 0 do
	print(peeps .. " There are still peeps")
	peeps = peeps - 1
end

local count = 0
repeat
	print("repeating")
	count = count + 1
until count > 10
-- repeate it until the until condition is not true
