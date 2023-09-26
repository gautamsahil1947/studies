-- if statements in lua
if 0 then
	-- even 0 is true in lua
	-- only false and nil are no
	print("The statement was true")
end

local age = 15

if age > 17 then
	print("You may enter")
	-- operators are > < >= <= ~=
end

local count = 44
if (count > 40) and (count < 50) then
	print("count in range 40-50")
end

if (count < 40) or (count > 50) then
	print("count out of range 40-50")
end

local age1 = 44
if age1 == 44 then
	print("Your age is 44")
end

age = 44
if not (age < 18) then -- here not inverts the meaning of the (boolean)
	print("not allowed inside")
end
