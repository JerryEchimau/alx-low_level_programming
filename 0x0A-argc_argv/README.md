# 0x0A. C - argc, argv
<span style="color:red; font-size:0.8em; padding:2px 4px; border:1px solid red;">C</span>

In this project, we learnt about the arguments to main and how to pass arguments to our main program<br>
Here are the tasks in the project

## Tasks

<table style="width: 100%; border-collapse: collapse;">
    <tr>
        <th colspan="3" style="background-color: #333; color: white; padding: 10px; text-align: left;">0. It ain't what they call you, it's what you answer to</th>
    </tr>
        <td colspan="2" style="background-color: #333; padding: 10px;">Here, we just print the first string in argv and exit.<br><br>
        </td>
    </tr>
    <tr>

<table style="width: 100%; border-collapse: collapse;">
    <tr>
        <th colspan="3" style="background-color: #333; color: white; padding: 10px; text-align: left;">1. Silence is argument carried out by other means</th>
    </tr>
        <td colspan="2" style="background-color: #333; padding: 10px;">Here, we just print the argc minus 1 (because we are not counting the first argument which is the name of the program).<br><br>
        </td>
    </tr>
    <tr>

<table style="width: 100%; border-collapse: collapse;">
    <tr>
        <th colspan="3" style="background-color: #333; color: white; padding: 10px; text-align: left;">2. The best argument against democracy is a five-minute conversation with the average voter</th>
    </tr>
        <td colspan="2" style="background-color: #333; padding: 10px;">Here, we iterate through each string in argv (using pointer notation) and print each string.<br><br>
        </td>
    </tr>
    <tr>

<table style="width: 100%; border-collapse: collapse;">
    <tr>
        <th colspan="3" style="background-color: #333; color: white; padding: 10px; text-align: left;">3. Neither irony nor sarcasm is argument</th>
    </tr>
        <td colspan="2" style="background-color: #333; padding: 10px;">Here, we must first convert the input from the command line into integers using ``atoi()`` from the stdlib library.<br>
        We then check that the conversion was successful and then multiply the converted numbers<br>
        </td>
    </tr>
    <tr>

<table style="width: 100%; border-collapse: collapse;">
    <tr>
        <th colspan="3" style="background-color: #333; color: white; padding: 10px; text-align: left;">4. To infinity and beyond</th>
    </tr>
        <td colspan="2" style="background-color: #333; padding: 10px;">Here, we first iterate through each pointer and check whether each character is a digit.<br>
        We then add each converted digit to the total sum<br>
        </td>
    </tr>
    <tr>