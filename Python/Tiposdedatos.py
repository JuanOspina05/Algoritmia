import time

def main():
    start_time = time.time()

    numeroentero = 15
    flotante = 10.23
    decimal = 5.23425
    letra = 'j'

    print(numeroentero)
    print(flotante)
    print(decimal)
    print(letra)

    end_time = time.time()
    print(f"Tiempo de ejecución: {(end_time - start_time)*1e6} microsegundos")

if __name__ == "__main__":
    main()
