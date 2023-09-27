--> anonyamus functions

local function counter()
	local count = 0

	return function()
		count = count + 1
		return count
	end
end

local x = counter() -- this returns a function
-- kind of like a function pointer

print(x())
print(x())
print(x())
print(x())

-- What I understood from this.
-- this works because the x we have is from that instance
-- of function counter. and we are calling it again and again
-- from that instance only
