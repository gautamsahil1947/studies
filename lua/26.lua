-->  this is inheritence
--> basically same as oop of other languages
local function Pet(name)
	name = name or "defaultDogName"
	return {
		name = name,
		status = "hungry",

		feed = function(self)
			print(name .. " is fed")
			self.status = "full"
		end,
	}
end

local function Dog(name, breed)
	-- we are creating a table here
	local dog = Pet(name)
	-- here we are modifying that table
	dog.breed = breed
	dog.loyality = 0

	dog.isLoyal = function(self)
		return self.loyality >= 10
	end

	-- overridding the predefined function inside Pet
	dog.feed = function(self)
		print(name .. " is fed")
		self.status = "full"
		self.loyality = self.loyality + 5
	end

	dog.bark = function(self)
		print("Woof Woof")
	end
	-- returning that modified table
	return dog
end

local lassy = Dog("Lassy", "Poodle")
-- print(lassy.breed)
-- functions inside a table object are called using
-- :, whereas the attribute values are accessed using .
print(lassy.status)
print(lassy:isLoyal())
print(lassy:feed())
print(lassy:feed())
print(lassy:isLoyal())
lassy:bark()
