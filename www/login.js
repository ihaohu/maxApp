
function getUser() {
    return localStorage.getItem('user');
}

function userLogin() {
    $("#popupLogin").popup("open");
    //console.log('trigger login');
}
