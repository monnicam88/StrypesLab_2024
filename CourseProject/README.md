## Digital Integrated Circuit console simulator, C++

The entire source code of the project is available here, along with the "_Basic documentation for Digital Integrated Circuits console simulator.pdf_" file, which is the basic documentation of the project, describing the general functionalities and workflow of the application.

### 1. Files organization
---
* **Header files**
  
| _.h_ files | Declare the baseline interface of the corresponding module |
| --- | --- |
| `Utils.h` | Declares simplified user interface and processing of input defined commands |
| `Constants.h` | Declares constants used across the application |
| `TruthTable.h` | Declares specific functions for creation, deletion and manipulation of truth tables |
| `DataStructures.h` | Declares customized structures for managing arrays of characters and integers, respectively and stack |
| `MemoryManagement.h` | Declares specisic functions for dynamic memory manipulation |
| `IntegratedCircuit.h` | Declares specific functions for creation, deletion, validation and representation of circuits |
| `IntegratedCircuitInput.h` | Declares specific functios for creation and manipulation of user’s input |
| `IntegratedCircuitStorage.h` | Declares specific functions for creation and manipulation of integrated circuits storage |
| `LogicalExpressionHandler.h` | Declares specific functions for logical expressions parsing, evaluation and conversion |

* **Source files**
  
| _.cpp_ files | Implement the baseline defined interface of the corresponding module |
| --- | --- |
| `main.cpp` | Implements the project's launch and workflow |
| `TruthTable.cpp` | Implements specific functions for creation, deletion and manipulation of truth tables |
| `DataStructures.cpp` | Implements specific functions for manipulation of customized data structures |
| `IntegratedCircuit.cpp` | Implements specific functions for creation, deletion, validation and representation of circuits |
| `IntegratedCircuitInput.cpp` | Implements specific functios for creation and manipulation of user’s input |
| `IntegratedCircuitStorage.cpp` | Implements specific functions for creation and manipulation of integrated circuits storage |
| `LogicalExpressionHandler.cpp` | Implements specific functions for logical expressions parsing, evaluation and conversion |

### 2. Sample valid workflow of the project
---
      1) User interface
      ![1](https://github.com/user-attachments/assets/f31abdfe-0bbe-42c6-8adf-03822c0b113e)

      2) DEFINE & RUN commands
      ![2](https://github.com/user-attachments/assets/7e3c0770-65ec-41ae-a9cb-a8cd889e36d3)

      3) ALL command
      ![3](https://github.com/user-attachments/assets/aca57c2f-78d1-4edc-8d10-c53ed66752b7)

      4) FIND command
      ![4](https://github.com/user-attachments/assets/7ee9c74b-316c-48ef-b03e-41946a616f53)

      5) PRINT & EXIT commands
      ![5](https://github.com/user-attachments/assets/cc0e0dcb-4445-4ab8-8486-c304622d5f3d)

### 3. Sample INvalid workflow of the project
---
      1) User interface
      ![1](https://github.com/user-attachments/assets/f31abdfe-0bbe-42c6-8adf-03822c0b113e)

      2) DEFINE command invalid inputs
      ![6](https://github.com/user-attachments/assets/163e6f42-ddb2-40c1-824e-61002c2b1632)
      
      
      3) RUN command invalid inputs
      ![7](https://github.com/user-attachments/assets/79ed77af-ea70-457c-aaae-3abc0af7e488)

      4) FIND command invalid input
      ![8](https://github.com/user-attachments/assets/48211af8-595e-49ad-aa5f-3bf9b9fe3d11)

