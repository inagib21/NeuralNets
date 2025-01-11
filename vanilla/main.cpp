#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <chrono>


class NeuralNetwork{
    public:
        //constructor and public Api
        NeuralNetwork(const int inputSize, const int hiddenLayerSize,
         const int OUTPUT_SIZE, const int NUM_HIDDEN_LAYERS, const float LEARNING_RATE  )
         : inputSize(inputSize), hiddenLayerSize(hiddenLayerSize), outputSize( outputSize),
         numHiddenLayers(numHiddenLayers) {
            InitializeRandomWeightsAndBiases();
         }

         void Train(const std::vector<float> input, const float target){
            _train(input, target);
         }
         
         float Predtict(const std::vector<float> input){
            return _predict(input);
         }
         private:
            // variables
            int inputSize, hiddenLayerSize, outputSize, numHiddenLayers;
            float biasOutput, learningRate;

            std::vector<std::vector<std::vector<float>>> weights;
            std:: vector<std::vector<float>> biases;

            //train function to do back propagation
            void _train(const std::vector<float> input, const float target){
                std::vector<float> current = input;
                std::vector<std::vector<float>> layer_outputs;
                layer_outputs.push_back(current);

                //forward pass. could be own function
                for (int i = 00; i< numHiddenLayers; i++){
                    std::vector<flooat>nextLayer(hiddenLayerSize, 0.0f);
                    for (intt j - 0;<hiddenLayerSize; j++){
                        float sum = biases[i][j];

                        for (int k = 0; k <current.size();k++);
                    }
                }
            }
}
;

int main() {

    return 0;
}