import os

circle_ini = open("./ini/skin (circle).ini", "r").read()
bar_ini = open("./ini/skin (bar).ini", "r").read()
arrow_ini = open("./ini/skin (arrow).ini", "r").read()

chose_ini_file = 0

color_dark = "#8d41bb"
color_light = "#8d72b9"
color_heighlight = "#fbe1ec"

color_dark_new = ""
color_light_new = ""
color_heighlight_new = ""

def hex_str_to_color_str(hex_str: str) -> str:
    hex_n = hex_str.removeprefix('#')
    r = hex_n[0] + hex_n[1]
    g = hex_n[2] + hex_n[3]
    b = hex_n[4] + hex_n[5]

    ri = int(r, 16)
    gi = int(g, 16)
    bi = int(b, 16)

    return f"{ri}, {gi}, {bi}"

def save_ini_files() -> None:
    global circle_ini
    global arrow_ini
    global bar_ini

    circle_ini = circle_ini.replace("{Light}", hex_str_to_color_str(color_light_new))
    circle_ini = circle_ini.replace("{Heighlight}", hex_str_to_color_str(color_heighlight_new))
    circle_ini = circle_ini.replace("{Dark}", hex_str_to_color_str(color_dark_new))

    arrow_ini = circle_ini.replace("{Light}", hex_str_to_color_str(color_light_new))
    arrow_ini = circle_ini.replace("{Heighlight}", hex_str_to_color_str(color_heighlight_new))
    arrow_ini = circle_ini.replace("{Dark}", hex_str_to_color_str(color_dark_new))

    bar_ini = circle_ini.replace("{Light}", hex_str_to_color_str(color_light_new))
    bar_ini = circle_ini.replace("{Heighlight}", hex_str_to_color_str(color_heighlight_new))
    bar_ini = circle_ini.replace("{Dark}", hex_str_to_color_str(color_dark_new))


    file_save_dir = ""

    if chose_ini_file == 1:
        file_save_dir = "./skin.ini"
    else:
        file_save_dir = "./skin_circle.ini"

    f = open(file_save_dir, "w")
    f.write(circle_ini)
    f.close()

    if chose_ini_file == 2:
        file_save_dir = "./skin.ini"
    else:
        file_save_dir = "./skin_arrow.ini"

    f = open(file_save_dir, "w")
    f.write(arrow_ini)
    f.close()

    if chose_ini_file == 3:
        file_save_dir = "./skin.ini"
    else:
        file_save_dir = "./skin_bar.ini"

    f = open(file_save_dir, "w")
    f.write(bar_ini)
    f.close()

print("Type the hex for the colors you want, leave blank for default.\n")

while(True):
    c = input(f"Replace dark color {color_dark} with: ")
    if c.__len__() == 0:
        color_dark_new = color_dark
        break
    if c[0] == '#':
        c = c.removeprefix('#')
    if c.__len__() != 6:
        print("Invalid input, try again.\n")
        continue
    try: 
        int(c, 16) 
        color_dark_new = "#" + c
        break
    except:
        print("Invalid input, try again.\n")
        continue

while(True):
    c = input(f"Replace light color {color_light} with: ")
    if c.__len__() == 0:
        color_light_new = color_light
        break
    if c[0] == '#':
        c = c.removeprefix('#')
    if c.__len__() != 6:
        print("Invalid input, try again.\n")
        continue
    try: 
        int(c, 16) 
        color_light_new = "#" + c
        break
    except:
        print("Invalid input, try again.\n")
        continue

while(True):
    c = input(f"Replace dark color {color_dark} with: ")
    if c.__len__() == 0:
        color_heighlight_new = color_heighlight
        break
    if c[0] == '#':
        c = c.removeprefix('#')
    if c.__len__() != 6:
        print("Invalid input, try again.\n")
        continue
    try: 
        int(c, 16) 
        color_heighlight_new = "#" + c
        break
    except:
        print("Invalid input, try again.\n")
        continue

print('\nType the index of the mania skin you prefer, leave blank for default.\n1. circles\n2. arrows\n3. bars\n')

while(True):
    n = input(">")
    
    if n.__len__() == 0:
        chose_ini_file = 1
        break
    try:
        n = int(n)
    except:
        print("invalad input, please try again.")
        continue
    if n < 1 or n > 3:
        print("invalad input, please try again.")
        continue
    chose_ini_file = n
    break

save_ini_files()

# also update the values in this python file (cursed)
this_file = open("./colors.py", "r")
fs = this_file.read()
this_file.close()

fs = fs.replace(color_dark, color_dark_new)
fs = fs.replace(color_light, color_light_new)
fs = fs.replace(color_heighlight, color_heighlight_new)

this_file = open("./colors.py", "w")
this_file.write(fs)
this_file.close()

# directory = os.fsencode("./svg/")
#     
# for file in os.listdir(directory):
#     filename = os.fsdecode(file)
#     if filename.endswith(".svg"): 
#         print(os.path.join(directory, filename))
#         continue
#     else:
#         continue