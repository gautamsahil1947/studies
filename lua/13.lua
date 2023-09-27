-- io.write("Enter something: ")
-- local userInput = io.read()
-- print(userInput)

local num1, num2 = 5, 10
local true_ans = num1 + num2

io.write("Input " .. num1 .. " + " .. num2 .. ": ")
local ans = io.read()
if tonumber(ans) == true then
	print("You are correct")
else
	print("You are incorrect")
end

print("\nYour Answer: " .. ans)
