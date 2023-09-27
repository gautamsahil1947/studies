--> functions

local function displayAge(age) -- age is a parameter here
	age = age or 5 -- if no value of age is passed, then  5 is taken by default
	print("you are " .. age .. " years old")
end

displayAge(4)
displayAge() -- default value 5
