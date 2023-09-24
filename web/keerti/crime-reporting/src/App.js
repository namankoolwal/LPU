import React, { Component } from 'react';
import './App.css';
import HeaderOuter from "./components/HeaderOuter"
import Footer from './components/Footer';


class App extends Component {
    render() {
        return (
            <div>
<HeaderOuter />
                <div>
                    
                    {this.props.children}
                    
                </div>
        <Footer/>

            </div>
        );
    }
}

export default App;