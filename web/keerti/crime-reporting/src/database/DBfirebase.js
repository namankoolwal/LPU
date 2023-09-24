import * as firebase from 'firebase';

var config = {
//  apiKey: "AIzaSyDUbqPls1aDhX0MF_8iqDYfLKyqdZqiFvM",
//     authDomain: "report-crimes-app-in-react.firebaseapp.com",
//     databaseURL: "https://report-crimes-app-in-react.firebaseio.com",
//     storageBucket: "report-crimes-app-in-react.appspot.com",
//     messagingSenderId: "818357914916"


apiKey: "AIzaSyBBN_-QzV8yk7EY4XDt2mMMa5ZUt8DPFgQ",
authDomain: "ancient-blade-391403.firebaseapp.com",
storageBucket: "ancient-blade-391403.appspot.com",
messagingSenderId: "78940162672",
databaseURL: "https://ancient-blade-391403-default-rtdb.firebaseio.com"
};
firebase.initializeApp(config);
export class DBfirebase {

    static ref = firebase.database().ref();
    static storage = firebase.storage().ref();
    static auth = firebase.auth();
    static refCrime = firebase.database().ref('crimeList');
    static refMissing = firebase.database().ref('MissingPeople');
    

    static saveMultipath(multipath) {
        return this.ref.update(multipath);
    } // saveMultipath

    static customAuth(user) {
        return this.auth.createUserWithEmailAndPassword(user.email, user.password);
    } //AuthNewUser

    static customLogin(user) {
        return this.auth.signInWithEmailAndPassword(user.email, user.password);
    } //loginUser

    static addNewUser(user) {
        return this.ref.child(user).set();
    } //AuthNewUser

    static getPushRef(path) {
        return this.ref.child(path).push();
    }

// static Logout(){
//     return this.auth.signOut()
//         console.log("Signed out");
// }


}