const form = document.querySelector("form")
const fullname = document.getElementById('fullname')
const mail = document.getElementById('email')
const phone = document.getElementById('phonenumber')
const note = document.getElementById('notes')

window.addEventListener("load", () => {
    const isValid = mail.value.length === 0;
    mail.className = isValid ? "valid" : "invalid";
    fullname.className = isValid ? "valid" : "invalid";
    phone.className = isValid ? "valid" : "invalid";
    note.className = isValid ? "valid" : "invalid";
});

mail.addEventListener("input", () => {
    const isValid = mail.value.length === 0;
    if (isValid) {
        mail.className = "valid";
        error.textContent = "";
        error.className = "error";
    } else {
        mail.className = "invalid";
    }
  });

fullname.addEventListener("input", () => {
    const isValid = fullname.value.length === 0;
    if (isValid) {
        fullname.className = "valid";
        error.textContent = "";
        error.className = "error";
    } else {
        fullname.className = "invalid";
    }
});

phone.addEventListener("input", () => {
    const isValid = phone.value.length === 0;
    if (isValid) {
        phone.className = "valid";
        error.textContent = "";
        error.className = "error";
    } else {
        phone.className = "invalid";
    }
});

note.addEventListener("input", () => {
    const isValid = note.value.length === 0;
    if (isValid) {
        note.className = "valid";
        error.textContent = "";
        error.className = "error";
    } else {
        note.className = "invalid";
    }
});

form.addEventListener("submit", (event) => {
    event.preventDefault();
  
    const isValid = mail.value.length === 0;
    if (!isValid) {
        mail.className = "invalid";
        error.textContent = "I expect an email, darling!";
        error.className = "error active";
    } 
    else {
        mail.className = "valid";
        error.textContent = "";
        error.className = "error";
    }
});