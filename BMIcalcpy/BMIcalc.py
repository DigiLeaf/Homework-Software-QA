from flask import Flask, request, render_template

###Program name: BMI calculator
###	Author: Leif Orth
###	NetId: leo94
###	The goal of this program is to be a BMI calculator by taking
###	in the user's height and weight then calculating their BMI and
###	returning what BMI range they fall into.

app = Flask(__name__, template_folder='templates' )


@app.route("/")
def home():
    return render_template('bmicalchtml.html')

@app.route("/result", methods=['GET','POST'])
def output():
    weight = int(request.form.get("weight"))
    feet = int(request.form.get("feet"))
    inch = int(request.form.get("inch"))

    BMIest= BMIcalc(weight,feet,inch)
    BMIlv = BMIcheck(BMIest)


    return render_template('result.html', BMIest = "%.1f" % BMIest, BMIrange = BMIlv)

def BMIcalc(weight,heightft,inches):

    ### converting the feet to inches for BMIcalc
    heightin = heightft * 12

    ### adding the feet converted to inches and the extra inches for total inches tall
    totalheightin = heightin + inches

    ###multiply weight by metric conversion factor of 0.45

    weightkg = weight * 0.45

    ### multiply height in inches by metric conversion factor 0.025

    heightcm = totalheightin * 0.025

    ### square the height

    heightcm2 = heightcm * heightcm

    ### divide weight in kg by height in cm2
    BMIestimate = weightkg / heightcm2

    print("Your BMI is: ", "%.1f" % BMIestimate, "\n")
    return BMIestimate


def BMIcheck(BMIestimate):
    if BMIestimate < 18.5:

        weight = "Underweight"
        return weight

    elif BMIestimate >= 18.5 and BMIestimate < 25:

        weight = "Normal weight"
        return weight

    elif BMIestimate >= 25 and BMIestimate < 30:

        weight = "Overweight"
        return weight

    elif BMIestimate >= 30:
        weight = "Obese"
        return weight;




app.run(debug=True)
