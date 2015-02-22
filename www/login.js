
function getUser() {
    return localStorage.getItem('user');
}

function userLogin(un, pw) {
    $.ajax({
        url: "http://192.168.25.33:5555/login.php?un=" + un + "&pw=" + pw,
        success: function(response) {
            localStorage.removeItem('user');
            if(response == 'OK') {
                localStorage.setItem('user', un);
                updateCaption();
            } else {
                $("#dialog_OK_head").html('Information');
                $("#dialog_OK_body").html('Login Failed');
                $("#dialog_OK").popup("open");
            }
        },
        complete: function() {
            hideBubble();
        }
    });
    
    return false;
}


function userLogout() {
    localStorage.removeItem('user');
    updateCaption();
}
