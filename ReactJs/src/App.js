// import logo from "./logo.svg";
import "./App.css";

function App() {
  return (
    // Harus ada parentnya
    <div className="Parentbox">
      <FotoProduk />
      <ProdukInfo isDiscount="yes" name="Eudora Chan" category="Wanita Manis" />
    </div>
  );
}

function FotoProduk() {
  return (
    <div className="Foto">
      <img src="/AI Smile.png" alt="" />
    </div>
  );
}

function CheckDiscount(props) {
  const { isDiscount } = props;
  if (isDiscount == "yes") {
    return <p>Diskon 50% Off</p>;
  } else if (isDiscount == "coming") {
    return <p>Diskon akan tersedia</p>;
  } else {
    return <p>Belum ada diskon</p>;
  }
}

function ProdukInfo(props) {
  const { name, category, isDiscount } = props;
  const price = 73999000;
  const formattedPrice = new Intl.NumberFormat("id-ID", {
    style: "currency",
    currency: "IDR",
  }).format(price);
  const benefits = ["Bisa memasak", "Wangi", "Cantik", "Mandiri"];
  const listBenefits = benefits.map((itemBenefit, index) => (
    <li key={index}>{itemBenefit}</li>
  ));

  return (
    <div className="Deskripsi">
      <p className="Cate">{category}</p>
      <h1 className="Title">{name}</h1>
      <p className="Price">{formattedPrice}</p>
      <CheckDiscount isDiscount={isDiscount} />
      <p className="Info">
        Lorem ipsum dolor sit amet, consectetur adipisicing elit. Animi unde
        officia tenetur dolore temporibus, totam neque delectus quae voluptas
        quas.
      </p>
      <ul>{listBenefits}</ul>
      <a onClick={(e) => TambahCart(name, category)} href="#">
        Add to Cart
      </a>
    </div>
  );
}

function TambahCart(e) {
  console.log("Membeli " + e);
}

export default App;
