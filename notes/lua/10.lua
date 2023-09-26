-- if- else statements

local age = 20
local name = "Tom"

if age >= 20 then
	print("You are old")
elseif (age < 20) and (age >= 10) then
	print("You are not that young")
else
	print("You are young")
end

if type(age) == "number" then
	print("age is a number value")
end

age = 40
local old = (age > 30) and true or false
print(old)
