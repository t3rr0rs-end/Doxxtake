# this is a python version of DoxxTake 

print("\n")
print(" ######                                                  ")
print(" #     #  ####  #    # #    # #####   ##   #    # ###### ")
print(" #     # #    #  #  #   #  #    #    #  #  #   #  #      ")
print(" #     # #    #   ##     ##     #   #    # ####   #####  ")
print(" #     # #    #   ##     ##     #   ###### #  #   #      ")
print(" #     # #    #  #  #   #  #    #   #    # #   #  #      ")
print(" ######   ####  #    # #    #   #   #    # #    # ###### ")
print("---------------------------------------------------------")
print("\n")


# personal information 

name = input("Enter target's full name : ")
age = int(input("Enter target's age : "))
email = input("Enter target's email : ")
phone = input("Enter target's phone no. (format (000)-000-000) : ")

# address

address1 = int(input("\nEnter target's house / apartment number : "))
address1_1 = input("Enter target's street : ")
address2 = input("Enter target's Town / City : ")
address3 = int(input("Enter target's Zip Code : "))
address4 = input("Enter target's State (Initials only) : ")
address5 = input("Enter target's Country : ")

# online 

instagram = input("\nEnter target's Instagram (@ symbol will be added automatically) : " + "@" )
snapchat = input("Enter target's snapchat : ")
facebookURL = input("Enter target's facebook profile : ")
ip = input("Enter target's IP : ")
isp = input("Enter target's ISP : ")

print(" ")

# save information to file

f = open("output.txt", "w")
f.write(" \n")
f.write(f"Name : {name}\n")
f.write(f"Age : {age}\n")
f.write(f"Email : {email}\n")
f.write(f"Phone No. {phone}\n")

# save address to file

f.write(f"\nHouse / Apartment No. : {address1} {address1_1}\n")
f.write(f"Enter street : {address1_1}\n")
f.write(f"Town City : {address2}\n")
f.write(f"Zip Code : {address3}\n")
f.write(f"State (Initials only!) : {address4}\n")
f.write(f"Country : {address5}\n")

# save internet info to file

f.write(f"\nInstagram (@ will be added automatically) : @{instagram}\n")
f.write(f"Snapchat : {snapchat}\n")
f.write(f"Facebook URL : {facebookURL}\n")
f.write(f"IP : {ip}\n")
f.write(f"ISP : {isp}")

f.close()
