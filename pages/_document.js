import Document, { Head, Main, NextScript } from "next/document";

export default class MyDocument extends Document {
  static async getInitialProps(ctx) {
    const initialProps = await Document.getInitialProps(ctx);
    return { ...initialProps };
  }

  render() {
    return (
      <html>
        <Head>
          <style>{`
            @import url("https://use.typekit.net/lgx6cgr.css");
            * {
              font-family: neue-haas-grotesk-text, sans-serif;
            }
            html {
              font-size: 16px;
              font-weight: 400;
            }
            h1, h2, h3, h4, h5, h6 {
              font-family: neue-haas-grotesk-display, sans-serif;
            }
            h1 {
              font-size: 42px;
              font-weight: 600;
              letter-spacing: -0.03em;
            }
          `}</style>
        </Head>
        <body>
          <Main />
          <NextScript />
        </body>
      </html>
    );
  }
}
