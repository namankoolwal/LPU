function validateForm() {
    // Get form inputs
    var fullname = document.getElementById('fullname').value;
    var email = document.getElementById('email').value;
    var package = document.getElementById('package').value;
    var persons = document.getElementById('persons').value;
    var agree = document.getElementById('agree').checked;

    // Perform validation
    if (fullname === '') {
        alert('Please enter your full name');
        return false;
    }

    if (package === '') {
        alert('Please select a tour package');
        return false;
    }

    if (persons === '') {
        alert('Please enter the number of persons');
        return false;
    }

    if (!agree) {
        alert('Please agree to the terms and conditions');
        return false;
    }

    // Additional validation and form submission logic here

    return true;
}