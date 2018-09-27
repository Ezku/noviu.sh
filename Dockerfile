FROM mhart/alpine-node:10

RUN apk update && apk upgrade
RUN apk add --virtual .build-deps gcc libc-dev make python g++
RUN yarn global add bs-platform

WORKDIR /app
COPY .yarn-offline-mirror .yarnrc yarn.lock package.json ./

RUN yarn install --prefer-offline --frozen-lockfile

COPY . .

RUN yarn build

RUN apk del .build-deps

EXPOSE 3000
CMD yarn start