import java.util.Scanner;

/**
 * Algorytm Neville'a
 * 
 * @author Gojira Green
 */
public class Neville {
	
	private Double[] valuesOfX;
	private Double[][] valuesTable;
	private int size;
	private double argX;
	
	public static void main(String[] args) {
		Neville neville = new Neville();
		neville.readXandY();
		neville.calculate();
		System.out.println(neville);
	}
	
	/**
	 * Zwraca odpowiedni element tablicy jako wynik
	 * @return
	 */
	private Double solution() {
		return valuesTable != null ? valuesTable[0][size-1] : null;
	}

	/**
	 * Iteracja po tablicy wrtosci
	 */
	private void calculate() {
		for(int k=1; k<size; k++){
			for(int j=0; j<size-k; j++){
				valuesTable[j][k] = formula(j, k);
			}
		}
	}

	/**
	 * Wzór Nevilla
	 * 
	 * @param int j
	 * @param int k
	 * @return Double
	 */
	private Double formula(int j, int k) {
		return ((argX - valuesOfX[j])*(valuesTable[j+1][k-1]) - (argX - valuesOfX[j+k])*(valuesTable[j][k-1]))
				/((valuesOfX[j+k])-(valuesOfX[j]));
	}

	/**
	 * Wczytanie p(x) i węzłów do programu.
	 */
	private void readXandY() {
		Scanner input = new Scanner(System.in);
		
		System.out.print("Podaj wartosc p(x): ");
		argX = input.nextDouble();
		
		System.out.print("Podaj ilosc wezlow: ");
		size = input.nextInt();
		
		valuesOfX = new Double[size];
		valuesTable = new Double[size][size];
		
		for(int n = 0; n < size; n++){
			System.out.print("podaj x" + n +": ");
			valuesOfX[n] = input.nextDouble();
			System.out.print(" podaj y" + n +": ");
			valuesTable[n][0] = input.nextDouble();
		}
		input.close();
	}
	
	/**
	 * Zwraca wynik
	 */
	@Override
	public String toString() {
		return 	solution() != null ? "Wartosc wielomianu w punkcie " + argX + " wynosi: " + solution()
				: "Nie wykonano obliczen!";
	}
	
}
