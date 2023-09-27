--> recursion in lua

-- recursively find the factorial of a number
local function factorial(num)
	if num == 1 then
		return 1
	else
		return num * factorial(num - 1)
	end
end

print(factorial(4))
