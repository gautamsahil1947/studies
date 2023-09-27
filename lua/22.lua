print(os.time())

local past = os.time({
	-- till when do you want from 1970
	year = 2000,
	month = 10,
	day = 1,
	hour = 13,
	min = 20,
	sec = 10,
})

print(os.time() - past)
print(os.difftime(os.time(), past))
print(os.date())

-- environment variables

print(os.getenv("HOME"))
print(os.getenv("USER"))
print(os.getenv("EDITOR")) -- nvim

os.rename("myfile.txt", "sahil.cxx")
os.remove("sahil.cxx")
