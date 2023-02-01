FROM alpine as build-env
RUN apk add --no-cache build-base
WORKDIR /app
COPY . .

RUN gcc -o fibo fibo.c
FROM alpine
COPY --from=build-env /app/fibo /app/fibo
WORKDIR /app

CMD ["/app/fibo"]
