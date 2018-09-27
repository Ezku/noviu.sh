import Document, { Head, Main, NextScript } from 'next/document';
import { extractCritical } from 'emotion-server';

export default class MyDocument extends Document {
  static async getInitialProps({ renderPage, ...otherProps }) {
    const initialProps = await Document.getInitialProps({
      renderPage,
      ...otherProps
    });
    const page = renderPage();
    const styles = extractCritical(page.html);
    return { ...initialProps, ...page, ...styles };
  }

  constructor(props) {
    super(props);
    const { __NEXT_DATA__, ids } = props;
    if (ids) {
      __NEXT_DATA__.ids = ids;
    }
  }

  render() {
    return (
      <html>
        <Head>
          <style type="text/css" dangerouslySetInnerHTML={{
            __html: `
            @import url("https://use.typekit.net/lgx6cgr.css");

            /* http://meyerweb.com/eric/tools/css/reset/ 
            v2.0 | 20110126
            License: none (public domain)
            */

            html, body, div, span, applet, object, iframe,
            h1, h2, h3, h4, h5, h6, p, blockquote, pre,
            a, abbr, acronym, address, big, cite, code,
            del, dfn, em, img, ins, kbd, q, s, samp,
            small, strike, strong, sub, sup, tt, var,
            b, u, i, center,
            dl, dt, dd, ol, ul, li,
            fieldset, form, label, legend,
            table, caption, tbody, tfoot, thead, tr, th, td,
            article, aside, canvas, details, embed, 
            figure, figcaption, footer, header, hgroup, 
            menu, nav, output, ruby, section, summary,
            time, mark, audio, video {
            margin: 0;
            padding: 0;
            border: 0;
            font-size: 100%;
            font: inherit;
            vertical-align: baseline;
            }
            /* HTML5 display-role reset for older browsers */
            article, aside, details, figcaption, figure, 
            footer, header, hgroup, menu, nav, section {
            display: block;
            }
            body {
            line-height: 1;
            }
            ol, ul {
            list-style: none;
            }
            blockquote, q {
            quotes: none;
            }
            blockquote:before, blockquote:after,
            q:before, q:after {
            content: '';
            content: none;
            }
            table {
            border-collapse: collapse;
            border-spacing: 0;
            }
            `}} />
          <style dangerouslySetInnerHTML={{ __html: this.props.css }} />
        </Head>
        <body>
          <Main />
          <NextScript />
        </body>
      </html>
    );
  }
}
