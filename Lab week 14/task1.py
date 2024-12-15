def getProportionOfArea(area):
    proportion = area / 148940000 * 100 
    return round(proportion, 2)

countryName = str(input("Enter name of country: "))
areaOfCountry = int(input("Enter area of country: "))
print(countryName, "is", getProportionOfArea(areaOfCountry), "% of total world's landmass.")
