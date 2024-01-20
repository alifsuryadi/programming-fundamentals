import logo from "./logo.svg";
import "./App.css";

function App() {
  const userLogged = "Alif Suryadi";
  const userLoggedJSX = <strong>Hello</strong>;

  let a = 5;
  let b = 10;

  return (
    // Harus ada parentnya
    <div className="App">
      <h1>{userLogged}</h1>
      {userLoggedJSX}
      <div className="Aritmatika">{a + b / 200}</div>

      <h2>Hallo</h2>
      <p>
        Lorem ipsum dolor sit, amet consectetur adipisicing elit. Vero, nihil.
      </p>
      <h2>Hallo</h2>
      <p>
        Lorem ipsum dolor sit, amet consectetur adipisicing elit. Vero, nihil.
      </p>
    </div>
  );
}

export default App;
