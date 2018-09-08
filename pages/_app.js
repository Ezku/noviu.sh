import App, { Container } from 'next/app';
import React from 'react';
import { hydrate, injectGlobal } from 'react-emotion';

// Adds server generated styles to emotion cache.
// '__NEXT_DATA__.ids' is set in '_document.js'
if (typeof window !== 'undefined') {
  hydrate(window.__NEXT_DATA__.ids);
}

injectGlobal`
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
`;

export default class MyApp extends App {
  static async getInitialProps({ Component, router, ctx }) {
    let pageProps = {};

    if (Component.getInitialProps) {
      pageProps = await Component.getInitialProps(ctx);
    }

    return { pageProps };
  }

  render() {
    const { Component, pageProps } = this.props;
    return (
      <Container>
        <Component {...pageProps} />
      </Container>
    );
  }
}
