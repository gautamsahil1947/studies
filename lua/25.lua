-- oops

-- lua is not ooplang, therefore it is stimulated here

local function Pet(name)
	name = name or "defaultName"
	return {
		name = name,
		status = "hungry",

		feed = function(self)
			-- self is a reference to the current object
			self.status = "FULL"
			print(name .. " is fed")
		end,
	}
end

local mypet = Pet("dog")
print(mypet.name)
print(mypet.status)
mypet:feed()
print(mypet.status)
