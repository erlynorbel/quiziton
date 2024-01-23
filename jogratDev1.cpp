#include <iostream> // Basic inclusion for basic C++ codes
#include <unistd.h> // Delay code with seconds

using namespace std; // For shortcuts with std::

const int QUESTIONS_SIZE = 25; //Declared how many number of questions per mode.

const char *easyQuestions[QUESTIONS_SIZE][6] = { // Declared chars or string arrays with size of 25 questions and within those, 6 strings are in it. The sixth one is the correct answer. Each difficulty mode has their own lists of chars or strings.
        {
                "Fill in the right symbol in the blanks: 7_-5",
                "A. <",
                "B. >",
                "C. none of the above",
                "",
                "B"
        },
        {
                "Who is the first president of the Republic of the Philippines?",
                "A. Emilio Aguinaldo",
                "B. Juan Luna",
                "C. Andres Bonifacio",
                "D. George Washington",
                "A"
        },
        {
                "Our solar system has eight planets.",
                "A. The statement is true.",
                "B. The statement is false.",
                "C. The statement is partly true.",
                "D. Our solar system has twelve planets.",
                "A"
        },
        {
                "The Philippine Independence Day held every June 12 is the celebration of the coDeclaration of Independence from ____.",
                "A. Japanese Rule",
                "B. Spanish Rule",
                "C. American Rule",
                "D. German Rule",
                "B"
        },
        {
                "Who founded La Liga Filipina?",
                "A. Jose Rizal",
                "B. Andres Bonifacio",
                "C. Emilio Aguinaldo",
                "D. Juan Luna",
                "A"
        },
        {
                "What angle is 120 Degrees?",
                "A. Right Angle",
                "B. Acute Angle",
                "C. Obtuse Angle",
                "D. Righteous Angle",
                "C"
        },
        {
                "The Philippine Flag was sewn by Marcela Marino de Agoncillo, Lorenzo Agoncillo, and Delfina Herbosa de Natividad in _____",
                "A. Taiwan",
                "B. Spain",
                "C. Hong Kong",
                "D. Beijing",
                "C"
        },
        {
                "Fill in the blank ___ is the only voluntary muscle tissue in the human body -it is controlled consciously.",
                "A. Visceral Muscle",
                "B. Skeletal Muscle",
                "C. Cardiac Muscle",
                "D. Abdominal Muscle",
                "B"
        },
        {
                "He is known as the Father of Botany",
                "A. Carl Linaaeus",
                "B. Theoprastus",
                "C. Jhong Hilario",
                "D. Plato",
                "B."
        },
        {
                "Fill in the blank: ____ is the eighth and farthest planet from the Sun.",
                "A. Uranus",
                "B. Neptune",
                "C. Saturn",
                "D. Pluto",
                "B"
        },
        {
                "When did Jose Rizal die?",
                "A. December 31, 1896",
                "B. December 30, 1898",
                "C. December 30, 1896",
                "D. December 29, 1892",
                "C"
        },
        {
                "What is the derivative of 27?",
                "A. X",
                "B. 27",
                "C. 0",
                "D. 20",
                "C"
        },
        {
                "Which of the following is the prime number?",
                "A. 15",
                "B. 5",
                "C. 87",
                "D. 3",
                "A"
        },
        {
                "While at Ateneo, Rizal met his first love. She was a pretty fourteen-year-old Batangueña. Who is she?",
                "A. Josephine Bracken",
                "B. Segunda Katigbak",
                "C. Leonor Rivera",
                "D. Anne Curtis",
                "B."
        },
        {
                "What is the correct seentence in the equation 5 > 4?",
                "A. Four is greater than five",
                "B. Four is equals to five",
                "C. FIve is greater than four",
                "D. Seven is greater than five",
                "C"
        },
        {
                "Which terrestial planet is the furthest from the Sun?",
                "A. Earth",
                "B. Jupiter",
                "C. Mars",
                "D. Saturn",
                "C"
        },
        {
                "Who was Emilio Aguinaldo's unofficial adviser who opposed the plan to declare the country's independence on June 12, 1898?",
                "A. Jose Rizal",
                "B. Antonio Luna",
                "C. Apolinario Mabini",
                "D. Andres Bonifacio",
                "C"
        },
        {
                "The Earth is composed of four different layers.",
                "A. The statement is true.",
                "B. The statement is false.",
                "C. The statement is partly false",
                "D. The statement is partly true",
                "A"
        },
        {
                "Fill in the blank. The Earth's _____ is like the skin of an apple, It is very thin in comparison to the other three layers.",
                "A. Mantle",
                "B. Crust",
                "C. Outer Core",
                "D. Epidermis",
                "B"
        },
        {
                "What angle is 45 degrees?",
                "A. Right Angle",
                "B. Acute Angle",
                "C. Obtuse Angle",
                "D. Righteous Angle",
                "B"
        },
        {
                "Fill in the right symbol in the blanks: -10 __ -21",
                "A. <",
                "B. >",
                "C. None of the Above",
                "D. All of the Above",
                "B"
        },
        {
                "Fill in the right symbol in the blanks: -82 __82",
                "A. <",
                "B. >",
                "C. =",
                "D. -",
                "A"
        },
        {
                "He is known as the Father of Zoology.",
                "A. Carl Linnaeus",
                "B. Aristotle",
                "C. Jhong Hilario",
                "D. Abraham Lincolm",
                "B"
        },
        {
                "What angle is 90 Degrees?",
                "A. Right Angle",
                "B. Acute Angle",
                "C. Obtuse Angle",
                "D. Cutiepie Angle",
                "A"
        },
        {
                "Fill in the blank. The _____________ is responsible for keeping us alive by providing oxygenated, arterial blood, to every part of the human body.",
                "A. Respiratory System",
                "B. Circulatory System",
                "C. Digestive System",
                "D. Cardiovascular System",
                "A"
        }
};

const char *mediumQuestions[QUESTIONS_SIZE][6] = {
        {
                "What angle is 180 Degrees?",
                "A. Right Angle",
                "B. Acute Angle",
                "C. Straight Angle",
                "D. Left Angle",
                "C"
        },
        {
                "Jupiter is the fourth planet from the Sun and the largest in the Solar System",
                "A. The statement is true ",
                "B. The statement is false",
                "C. THe statement is partly false",
                "D. THe statement is partly true",
                "B"
        },
        {
                "All are Prime Numbers EXCEPT:",
                "A. 37",
                "B. 29",
                "C. 33",
                "D. 21",
                "C"
        },
        {
                "Foreign influences were evident in most aspects of Filipino culture - the Philippine languages, for example. Now, from which Asian Language do these wrods com from: 'Alam', 'Hukom', and 'Salamat'",
                "A. Mandarin",
                "B. Arabic",
                "C. Sanskrit",
                "D. Chinese",
                "B"
        },
        {
                "A short section of the airway that connect the laryngopharynx and the trachea. It's also known as the voice box",
                "A. Bronchi",
                "B. Larynx",
                "C. Pharynx",
                "D. Esophagus",
                "B"
        },
        {
                "Fill in the blank. Commonly called the kneecap, the ____ is special, because it's one of the few bones that aren't present at birth.", // to edit
                "A. Patella",
                "B. Tibia",
                "C. Hip Joint",
                "D. Cardiovascular System",
                "A"
        },
        {
                "The Pangea begins to break aprt during what period?",
                "A. Tertiary",
                "B. Triassic",
                "C. Permian",
                "D. None of the Above",
                "B"
        },
        {
                "Who was the first Filipino olympian?",
                "A. Efren 'Bata' Reyes",
                "B. David Nepomuceno",
                "C. Paeng Nepomuceno",
                "D. Manny Pacquiao",
                "B"
        },
        {
                "What is considered the earliest form of writing in the Philippines?",
                "A. Roman Alphabet",
                "B. Baybayin",
                "C. Abakada",
                "D. English",
                "B"
        },
        {
                "What is the area of a square if its sides are 9m?",
                "A. 18m^2",
                "B. 36m^2",
                "C. 81m^2",
                "D. 162m^2",
                "C"
        },
        {
                "The British Occupation of Manila ended in 1764 with the signing of what treaty the year before?",
                "A. Treaty of Paris",
                "B. Treaty of Tordesillas",
                "C. Treaty of Versailles",
                "D. Treaty of Manila",
                "A"
        },
        {
                "What is the derivative of 5x^4 - 6x^2",
                "A. 20x^3 - 12x^2",
                "B. 20x^3 - 6x^2",
                "C. 20x^3 - 12x",
                "D. 20x^3 + 12x",
                "C"
        },
        {
                "Who designed the Rizal Monument?",
                "A. Carlos Nicoli",
                "B. Antonio Luna",
                "C. Richard Kissling",
                "D. John Carlos",
                "C"
        },
        {
                "What is the primary rock type formed from the cooling and solidification of molten magma or lava?",
                "A. Sedimentary",
                "B. Igneous",
                "C. Metamorphic",
                "D. Sentimental",
                "B"
        },
        {
                "What are the sides of a square if the area is 81m^2?",
                "A. 3m",
                "B. 6m",
                "C. 9ma",
                "D. 18m",
                "C"
        },
        {
                "In order to start the process of Spanish colonization and Christianization of the archipelago, he traveled to Cebu in 1565 and established the first Spanish settlement in the Philippines. Who was this guy?",
                "A. Miguel Lopez de Legazpi",
                "B. Christopher Columbus",
                "C. Ferdinand Magellan",
                "D. Jose Rizal",
                "C"
        },
        {
                "What's the term for the bending or folding of rock layers due to tectonic forces?",
                "A. Faulting",
                "B. Folding",
                "C. Uplifting",
                "D. Downlifting",
                "B"
        },
        {
                "What is the sum of the interior angles of a hexagon?",
                "A. 180°",
                "B. 360°",
                "C. 720°",
                "D. 1090°",
                "C"
        },
        {
                "Where is Emilio Aguinaldo’s ancestral house (Aguinaldo Shrine as of now) located?",
                "A. Kawit, Cavite",
                "B. Mexico, Pampanga",
                "C. Lipa, Batangas",
                "D. San Juan, Batangas",
                "A"
        },
        {
                "If a triangle has angles measuring 30°, 60°, and 90°, what is the length of the side opposite the 60° angle in relation to the side opposite the 30° angle?",
                "A. Equal",
                "B. Double",
                "C. Square root of 3 times longer",
                "D. Triple",
                "A"
        },
        {
                "What was the first book published in the Philippines?",
                "A. Noli me Tangere",
                "B. Doctrina Christana",
                "C. El Fili",
                "D. Nuestra Senora del Rosario",
                "B"
        },
        {
                "What type of plate boundary is characterized by plates moving away from each other",
                "A. Convergent",
                "B. Divergent",
                "C. Transform",
                "D. Tectonic",
                "B"
        },
        {
                "Simplify: (3x + 2)(2x -5)",
                "A. 6x^2 - 11x - 10",
                "B. 6x^2 + x -10",
                "C. 6x^2 - x - 10",
                "D. 6x^2 - x - 20",
                "A"
        },
        {
                "Which layer of the Earth is primarily composed aof solid iron and nickel?",
                "A. Crust",
                "B. Mantle",
                "C. Core",
                "D. Obsidian",
                "C"
        },
        {
                "Which of the following is the square root of 144?",
                "A. 10",
                "B. 12",
                "C. 14",
                "D. 16",
                "B"
        },

};

const char *difficultQuestions[QUESTIONS_SIZE][6] = {
        {
                "Fill in the blanks. The layer below the rigid___ is a zone of asphalt-like consistenct called ____",
                "A. Lithosphere; Asthenosphere",
                "B. Asthenosphere; Lithosphere",
                "C. None of the Above",
                "D. All of the Above",
                "A"
        },
        {
                "What event marked the beginning of the Philippine Revolution against Spanish Rule in 1896?",
                "A. Execeution of Gomburza",
                "B. Cry of Pugad Lawin",
                "C. Battle of Mactan",
                "D. Battle of Paris",
                "B"
        },
        {
                "What is the sum of the first 10 terms of the arithmetic sequence 3, 7, 11,. ..",
                "A. 270",
                "B. 280",
                "C. 290",
                "D. 300",
                "A"
        },
        {
                "What is the main function of white blood cells in the human body?",
                "A. Carrying Oxygen",
                "B. Fighting Infections",
                "C. Clotting blood",
                "D. Pumping vitamins",
                "B"
        },
        {
                "What is the term for the bending of light as it passes from one medium to another?",
                "A. Reflection",
                "B. Diffraction",
                "C. Refraction",
                "D. Translation",
                "C"
        },
        {
                "A circle is inscribed in a square with a side length of 10cm. What is the area of the circle?",
                "A. 25π square cm",
                "B. 50π square cm",
                "C. 100π square cm",
                "D. 80π square cm",
                "B"
        },
        {
                "The skull is composed of ___ bones that are fused together except for the mandible.",
                "A. 21",
                "B. 22",
                "C. 23",
                "D. 24",
                "B"
        },
        {
                "During the Spanish colonization, what was the primary purpose of the Galleon Trade?",
                "A. Cultural Exchange",
                "B. Economic Profit",
                "C. Religious Expansion",
                "D. Gold Exchange",
                "B"
        },
        {
                "Which subatomic particle is shared in a chemical bond between two atoms?",
                "A. Neutron",
                "B. Proton",
                "C. Electron",
                "D. Atom",
                "C"
        },
        {
                "What is the term for the study of the Earth's structure and the processes that shape it?",
                "A. Meteorology",
                "B. Geology",
                "C. Astronomy",
                "D. Astrology",
                "B"
        },
        {
                "Fill in the blank ___ is a part of the brain located superior and anterior to the brain stem and inferior to the thalamus",
                "A. Diencephalon",
                "B. Epithalamus",
                "C. Hypothalamus",
                "D. Mandible",
                "C"
        },
        {
                "Who was the leader of the Katipununan, a secret revolutionary society against Spanish Rule?",
                "A. Andres Bonifacio",
                "B. Apolinario Mabini",
                "C. Jose Rizal",
                "D. General Luna",
                "A"
        },
        {
                "In the human body, which organ produces insulin?",
                "A. Liver",
                "B. Pancreas",
                "C. Kidneys",
                "D. Esophagus",
                "B"
        },
        {
                "If a circle has a radius of 5cm, what is its circumference?",
                "A. 10π cm",
                "B. 15π cm",
                "C. 20π cm",
                "D. 30π cm",
                "C"
        },
        {
                "What is the SI unit for measuring electric unit?",
                "A. Watt",
                "B. Volt",
                "C. Ampere",
                "D. Pound",
                "C"
        },
        {
                "What was the significance of the 'Lavanderia Gobyernos' movement during the American colonial period?",
                "A. Advocacy for women's suffrage",
                "B. Protest against forced labor",
                "C. Compaign for educational reforms",
                "D. Protest against slavery",
                "B"
        },
        {
                "In chemistry, what is the term for the smallest unit of an element that retains its chemical properties?",
                "A. Molecule",
                "B. Atom",
                "C. Compound",
                "D. Proton",
                "B"
        },
        {
                "What is the role of chlorophyll in plants during photosynthesis?",
                "A. Absorbing sunlight",
                "B. Converting glucose to energy",
                "C.Facilitating water absorption",
                "D. Creating vitamins",
                "A"
        },
        {
                "Which uprising in the 19th century was primarily led by religious leaders such as Hermano Pule?",
                "A. Silang Revolt",
                "B. Colorum Uprising",
                "C. Cofradia de San Jose Rebellion",
                "D. Battle of Troy",
                "C"
        },
        {
                "Which planet in our solar system is known as the 'Red Planet'?",
                "A. Mars",
                "B. Venus",
                "C. Jupiter",
                "D. Saturn",
                "A"
        },
        {
                "What event sparked the declaration of Martial Law in the Philippines in 1972?",
                "A. Plaza Miranda Bombing",
                "B. Communist Isurgency",
                "C. NPA's First Quarter Storm",
                "D. Martial Law",
                "B"
        },
        {
                "What is the process by which a cell engulfs large particles or even other cells?",
                "A. Osmosis",
                "B. Endocytosis",
                "C. Exocytosis",
                "D. Telekinesis",
                "B"
        },
        {
                "What is the area of a rectangle with 8cm length and 5cm width?",
                "A. 40 square cm",
                "B. 35 square cm",
                "C. 13 square cm",
                "D. 53 square cm",
                "A"
        },
        {
                "What is the difference of the following binomial (24x^2) -(14x^2 - 13y^5)",
                "A. 10x^4 - 4y^10",
                "B. 10xy^4 - 4xy^10",
                "C. 10x^2 = 4y^5",
                "D. 10xy^4 - 4xy^11",
                "C"
        },
        {
                "Which indigenous group led a rebellion against Spanish Colonization known was the 'Dagohoy Rebellion' in the 18th century?",
                "A. Igorots",
                "B. Moros",
                "C. Boholanos",
                "D. Badjao",
                "C"
        }
};

const char *clincherQuestions[QUESTIONS_SIZE][6] = {
        {
                "Which famous mathematician is often referred to as the \"Father of Geometry\"?",
                "A. Euclid",
                "B. Pythagoras",
                "C. Archimedes",
                "D. Icarus",
                "A"
        },
        {
                "Which process involves the conversion of atmospheric nitrogen into ammonia, making it available for plants?",
                "A. Denitrification",
                "B. Nitrogen Fixation",
                "C. Nitrification",
                "D. Photosynthesis",
                "B"
        },
        {
                "What is the process by which an unspecialized cell develops into a specialized cell type during the growth and development of an organism?",
                "A. Fertilization",
                "B. Mitosis",
                "C. Differentiation",
                "D. Synthesization",
                "C"
        },
        {
                "What is the cold dark misty world of the dead, ruled by the goddess Hel?",
                "A. Nifleheim",
                "B. Asgard",
                "C. Purgatory",
                "D. Heaven",
                "A"
        },
        {
                "In set theory, what does the union of two sets represent?",
                "A. Elements common to both sets.",
                "B. All elements in either et or both",
                "C. Elements unique to each set.",
                "D. Represents nothing",
                "B"
        },
        {
                "In the context of genetics, what is an allele?",
                "A. Type of varius",
                "B. Form of a gene",
                "C. Bacterial structure",
                "D. Type of muscle",
                "B"
        },
        {
                "In chemistry, what is the term for a substance that speeds up a chemical reaction without being consumed in the process?",
                "A. Catalyst",
                "B. Reactant",
                "C. Enzyme",
                "D. Bacteria",
                "A"
        },
        {
                "What is the oldest written piece of literature?",
                "A. The Gutenberg Title",
                "B. The Epic of Gilgamesh",
                "C. The Odyssey",
                "D. The Book of Job",
                "B"
        },
        {
                "What is the mathematical term for a whole number greater than 1 that has no positive divisors other than 1 and itself?",
                "A. Composite Number",
                "B. Prime Number",
                "C. Rational Number",
                "D. Even Number",
                "B"
        },
        {
                "Which type of electromagnetic radiation has the shortest wavelength in the electromagnetic spectrum?",
                "A. Infrared",
                "B. Ultraviolet",
                "C. Gamma Rays",
                "D. Infrared Rays",
                "C"
        },
        {
                "What is the outermost layer of the Earth's atmosphere, where the auroras occur and satellites orbit?",
                "A. Troposphere",
                "B. Stratosphere",
                "C. Exosphere",
                "D. Mesosphere",
                "C"
        },
        {
                "What is the famous mathematical constant representing the ratio of a circle's circumference to its diameter?",
                "A. π (pi)",
                "B. e (Euler's number)",
                "C. ϕ (phi)",
                "D. $ (dollar)",
                "A"
        },
        {
                "What is the dwelling place of the Norse gods, comparable to the Greek gods’ Mount Olympus?",
                "A. Bifrost",
                "B. Asgard",
                "C. Midgard",
                "D. Alfheim",
                "B"
        },
        {
                "Which famous English naturalist and biologist proposed the theory of natural selection as a mechanism for evolution?",
                "A. Blaise Pascal",
                "B. Pierre-Simon Laplace",
                "C. Rene Descartes",
                "D. Timothee Chalamet",
                "B"
        },
        {
                "Which legendary greek creature is part horse and part man?",
                "A. Tikbalang",
                "B. Centaur",
                "C. Hippogriff",
                "D. Minotaur",
                "B"
        },
        {
                "In astronomy, what is the name given to a small, icy body that orbits the Sun and develops a tail as it approaches the Sun?",
                "A. Asteroid",
                "B. Comet",
                "C. Meteoroid",
                "D. Black Hole",
                "B"
        },
        {
                "What is the concept in calculus that describes the rate at which a function changes with respect to its independent variable?",
                "A. Derivative",
                "B. Integral",
                "C. Limit",
                "D. Square",
                "A"
        },
        {
                "In physics, what is the law that states that the total electric flux through a closed surface is equal to the net charge enclosed divided by the electric constant?",
                "A. Gauss' Law",
                "B. Coulomb's Law",
                "C. Ohm's Law",
                "D. Einstein's Law",
                "A"
        },
        {
                "What did Prometheus steal from Zeus to give to the humans?",
                "A. Hope",
                "B. Fear",
                "C. Zeus' Lightning Bolt",
                "D. Fire",
                "D"
        },
        {
                "What is the fundamental theorem in calculus that relates the derivative and integral of a function?",
                "A. Fundamental Theorem of Algebra",
                "B. Fundamental Theorem of Calculus",
                "C. Fundamental Theorem of Arithmetic",
                "D. Fundamental Theorem of Math",
                "B"
        },
        {
                "Which scientist formulated the laws of electrolysis and proposed the existence of ions?",
                "A. Michael Faraday",
                "B. Antoine Lavoisier",
                "C. Marie Curie",
                "D. J. Robert Oppenheimer",
                "A"
        },
        {
                "What is the phenomenon where an electric current produces a magnetic field around it, discovered by Hans Christian Ørsted?",
                "A. Electromagnetic Induction",
                "B. Ampere's Law",
                "C. Oersted Effect",
                "D. Parkinsons Disease",
                "C"
        },
        {
                "In statistics, what is the measure of the spread of a set of values, representing the average distance from the mean?",
                "A. Variance",
                "B. Standard Deviation",
                "C. Median",
                "D. Medium",
                "B"
        },
        {
                " Which companion of Odin and Thor is a cunning trickster who can change his shape and sex?",
                "A. Heimdall",
                "B. Baldur",
                "C. Freya",
                "D. Loki",
                "D"
        },
        {
                "What did Prometheus steal from Zeus to give to the humans?",
                "A. Hope",
                "B. Fear",
                "C. Zeus' Lightning Bolt",
                "D. Fire",
                "D"
        }
};

//Constant string types for "Quiz It On!" title, "FAILED", and "Try Again" ASCII Arts. Copied from https://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
const string mainTitle = "\n"
                         " $$$$$$\\            $$\\                 $$$$$$\\   $$\\            $$$$$$\\            $$\\ \n"
                         "$$  __$$\\           \\__|                \\_$$  _|  $$ |          $$  __$$\\           $$ |\n"
                         "$$ /  $$ |$$\\   $$\\ $$\\ $$$$$$$$\\         $$ |  $$$$$$\\         $$ /  $$ |$$$$$$$\\  $$ |\n"
                         "$$ |  $$ |$$ |  $$ |$$ |\\____$$  |        $$ |  \\_$$  _|        $$ |  $$ |$$  __$$\\ $$ |\n"
                         "$$ |  $$ |$$ |  $$ |$$ |  $$$$ _/         $$ |    $$ |          $$ |  $$ |$$ |  $$ |\\__|\n"
                         "$$ $$\\$$ |$$ |  $$ |$$ | $$  _/           $$ |    $$ |$$\\       $$ |  $$ |$$ |  $$ |    \n"
                         "\\$$$$$$ / \\$$$$$$  |$$ |$$$$$$$$\\       $$$$$$\\   \\$$$$  |       $$$$$$  |$$ |  $$ |$$\\ \n"
                         " \\___$$$\\  \\______/ \\__|\\________|      \\______|   \\____/        \\______/ \\__|  \\__|\\__|\n"
                         "     \\___|                                                                              \n"
                         "                                                                                        \n"
                         "                                                                                        ";

const string failed = "\n"
                      "$$$$$$$$\\  $$$$$$\\  $$$$$$\\ $$\\       $$$$$$$$\\ $$$$$$$\\  \n"
                      "$$  _____|$$  __$$\\ \\_$$  _|$$ |      $$  _____|$$  __$$\\ \n"
                      "$$ |      $$ /  $$ |  $$ |  $$ |      $$ |      $$ |  $$ |\n"
                      "$$$$$\\    $$$$$$$$ |  $$ |  $$ |      $$$$$\\    $$ |  $$ |\n"
                      "$$  __|   $$  __$$ |  $$ |  $$ |      $$  __|   $$ |  $$ |\n"
                      "$$ |      $$ |  $$ |  $$ |  $$ |      $$ |      $$ |  $$ |\n"
                      "$$ |      $$ |  $$ |$$$$$$\\ $$$$$$$$\\ $$$$$$$$\\ $$$$$$$  |\n"
                      "\\__|      \\__|  \\__|\\______|\\________|\\________|\\_______/ \n"
                      "                                                          \n"
                      "                                                          \n"
                      "                                                          ";
const string tryAgain = "\n"
                        "$$$$$$$$\\                                                         $$\\                       \n"
                        "\\__$$  __|                                                        \\__|                      \n"
                        "   $$ |    $$$$$$\\  $$\\   $$\\        $$$$$$\\   $$$$$$\\   $$$$$$\\  $$\\ $$$$$$$\\              \n"
                        "   $$ |   $$  __$$\\ $$ |  $$ |       \\____$$\\ $$  __$$\\  \\____$$\\ $$ |$$  __$$\\             \n"
                        "   $$ |   $$ |  \\__|$$ |  $$ |       $$$$$$$ |$$ /  $$ | $$$$$$$ |$$ |$$ |  $$ |            \n"
                        "   $$ |   $$ |      $$ |  $$ |      $$  __$$ |$$ |  $$ |$$  __$$ |$$ |$$ |  $$ |            \n"
                        "   $$ |   $$ |      \\$$$$$$$ |      \\$$$$$$$ |\\$$$$$$$ |\\$$$$$$$ |$$ |$$ |  $$ |$$\\ $$\\ $$\\ \n"
                        "   \\__|   \\__|       \\____$$ |       \\_______| \\____$$ | \\_______|\\__|\\__|  \\__|\\__|\\__|\\__|\n"
                        "                    $$\\   $$ |                $$\\   $$ |                                    \n"
                        "                    \\$$$$$$  |                \\$$$$$$  |                                    \n"
                        "                     \\______/                  \\______/                                     ";

const string youGotThis = "\n"
                          "$$\\     $$\\                                                 $$\\             $$\\     $$\\       $$\\           $$\\ \n"
                          "\\$$\\   $$  |                                                $$ |            $$ |    $$ |      \\__|          $$ |\n"
                          " \\$$\\ $$  /  $$$$$$\\  $$\\   $$\\        $$$$$$\\   $$$$$$\\  $$$$$$\\         $$$$$$\\   $$$$$$$\\  $$\\  $$$$$$$\\ $$ |\n"
                          "  \\$$$$  /  $$  __$$\\ $$ |  $$ |      $$  __$$\\ $$  __$$\\ \\_$$  _|        \\_$$  _|  $$  __$$\\ $$ |$$  _____|$$ |\n"
                          "   \\$$  /   $$ /  $$ |$$ |  $$ |      $$ /  $$ |$$ /  $$ |  $$ |            $$ |    $$ |  $$ |$$ |\\$$$$$$\\  \\__|\n"
                          "    $$ |    $$ |  $$ |$$ |  $$ |      $$ |  $$ |$$ |  $$ |  $$ |$$\\         $$ |$$\\ $$ |  $$ |$$ | \\____$$\\     \n"
                          "    $$ |    \\$$$$$$  |\\$$$$$$  |      \\$$$$$$$ |\\$$$$$$  |  \\$$$$  |        \\$$$$  |$$ |  $$ |$$ |$$$$$$$  |$$\\ \n"
                          "    \\__|     \\______/  \\______/        \\____$$ | \\______/    \\____/          \\____/ \\__|  \\__|\\__|\\_______/ \\__|\n"
                          "                                      $$\\   $$ |                                                                \n"
                          "                                      \\$$$$$$  |                                                                \n"
                          "                                       \\______/                                                                 ";

const string error404 = "\n"
                        "$$$$$$$$\\ $$$$$$$\\  $$$$$$$\\   $$$$$$\\  $$$$$$$\\        $$\\   $$\\  $$$$$$\\  $$\\   $$\\ \n"
                        "$$  _____|$$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\       $$ |  $$ |$$$ __$$\\ $$ |  $$ |\n"
                        "$$ |      $$ |  $$ |$$ |  $$ |$$ /  $$ |$$ |  $$ |      $$ |  $$ |$$$$\\ $$ |$$ |  $$ |\n"
                        "$$$$$\\    $$$$$$$  |$$$$$$$  |$$ |  $$ |$$$$$$$  |      $$$$$$$$ |$$\\$$\\$$ |$$$$$$$$ |\n"
                        "$$  __|   $$  __$$< $$  __$$< $$ |  $$ |$$  __$$<       \\_____$$ |$$ \\$$$$ |\\_____$$ |\n"
                        "$$ |      $$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |            $$ |$$ |\\$$$ |      $$ |\n"
                        "$$$$$$$$\\ $$ |  $$ |$$ |  $$ | $$$$$$  |$$ |  $$ |            $$ |\\$$$$$$  /      $$ |\n"
                        "\\________|\\__|  \\__|\\__|  \\__| \\______/ \\__|  \\__|            \\__| \\______/       \\__|\n"
                        "                                                                                      \n"
                        "                                                                                      \n"
                        "                                                                                      ";

const string wrongMark = "\n"
                         "$$\\      $$\\ $$$$$$$\\   $$$$$$\\  $$\\   $$\\  $$$$$$\\  $$\\ \n"
                         "$$ | $\\  $$ |$$  __$$\\ $$  __$$\\ $$$\\  $$ |$$  __$$\\ $$ |\n"
                         "$$ |$$$\\ $$ |$$ |  $$ |$$ /  $$ |$$$$\\ $$ |$$ /  \\__|$$ |\n"
                         "$$ $$ $$\\$$ |$$$$$$$  |$$ |  $$ |$$ $$\\$$ |$$ |$$$$\\ $$ |\n"
                         "$$$$  _$$$$ |$$  __$$< $$ |  $$ |$$ \\$$$$ |$$ |\\_$$ |\\__|\n"
                         "$$$  / \\$$$ |$$ |  $$ |$$ |  $$ |$$ |\\$$$ |$$ |  $$ |    \n"
                         "$$  /   \\$$ |$$ |  $$ | $$$$$$  |$$ | \\$$ |\\$$$$$$  |$$\\ \n"
                         "\\__/     \\__|\\__|  \\__| \\______/ \\__|  \\__| \\______/ \\__|\n"
                         "                                                         \n"
                         "                                                         \n"
                         "                                                         ";

const string correct = "\n"
                       " $$$$$$\\   $$$$$$\\  $$$$$$$\\  $$$$$$$\\  $$$$$$$$\\  $$$$$$\\  $$$$$$$$\\ $$\\ \n"
                       "$$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\ $$  _____|$$  __$$\\ \\__$$  __|$$ |\n"
                       "$$ /  \\__|$$ /  $$ |$$ |  $$ |$$ |  $$ |$$ |      $$ /  \\__|   $$ |   $$ |\n"
                       "$$ |      $$ |  $$ |$$$$$$$  |$$$$$$$  |$$$$$\\    $$ |         $$ |   $$ |\n"
                       "$$ |      $$ |  $$ |$$  __$$< $$  __$$< $$  __|   $$ |         $$ |   \\__|\n"
                       "$$ |  $$\\ $$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |      $$ |  $$\\    $$ |       \n"
                       "\\$$$$$$  | $$$$$$  |$$ |  $$ |$$ |  $$ |$$$$$$$$\\ \\$$$$$$  |   $$ |   $$\\ \n"
                       " \\______/  \\______/ \\__|  \\__|\\__|  \\__|\\________| \\______/    \\__|   \\__|\n"
                       "                                                                          \n"
                       "                                                                          \n"
                       "                                                                          ";
const string teamEsophagus = "\n"
                             "$$$$$$$$\\  $$$$$$\\   $$$$$$\\  $$$$$$$\\  $$\\   $$\\  $$$$$$\\   $$$$$$\\  $$\\   $$\\  $$$$$$\\  \n"
                             "$$  _____|$$  __$$\\ $$  __$$\\ $$  __$$\\ $$ |  $$ |$$  __$$\\ $$  __$$\\ $$ |  $$ |$$  __$$\\ \n"
                             "$$ |      $$ /  \\__|$$ /  $$ |$$ |  $$ |$$ |  $$ |$$ /  $$ |$$ /  \\__|$$ |  $$ |$$ /  \\__|\n"
                             "$$$$$\\    \\$$$$$$\\  $$ |  $$ |$$$$$$$  |$$$$$$$$ |$$$$$$$$ |$$ |$$$$\\ $$ |  $$ |\\$$$$$$\\  \n"
                             "$$  __|    \\____$$\\ $$ |  $$ |$$  ____/ $$  __$$ |$$  __$$ |$$ |\\_$$ |$$ |  $$ | \\____$$\\ \n"
                             "$$ |      $$\\   $$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |$$\\   $$ |\n"
                             "$$$$$$$$\\ \\$$$$$$  | $$$$$$  |$$ |      $$ |  $$ |$$ |  $$ |\\$$$$$$  |\\$$$$$$  |\\$$$$$$  |\n"
                             "\\________| \\______/  \\______/ \\__|      \\__|  \\__|\\__|  \\__| \\______/  \\______/  \\______/ \n";

const string easyMode = "\n"
                        "$$$$$$$$\\                                 $$\\      $$\\               $$\\          \n"
                        "$$  _____|                                $$$\\    $$$ |              $$ |         \n"
                        "$$ |     $$$$$$\\  $$$$$$$\\$$\\   $$\\       $$$$\\  $$$$ |$$$$$$\\  $$$$$$$ |$$$$$$\\  \n"
                        "$$$$$\\   \\____$$\\$$  _____$$ |  $$ |      $$\\$$\\$$ $$ $$  __$$\\$$  __$$ $$  __$$\\ \n"
                        "$$  __|  $$$$$$$ \\$$$$$$\\ $$ |  $$ |      $$ \\$$$  $$ $$ /  $$ $$ /  $$ $$$$$$$$ |\n"
                        "$$ |    $$  __$$ |\\____$$\\$$ |  $$ |      $$ |\\$  /$$ $$ |  $$ $$ |  $$ $$   ____|\n"
                        "$$$$$$$$\\$$$$$$$ $$$$$$$  \\$$$$$$$ |      $$ | \\_/ $$ \\$$$$$$  \\$$$$$$$ \\$$$$$$$\\ \n"
                        "\\________\\_______\\_______/ \\____$$ |      \\__|     \\__|\\______/ \\_______|\\_______|\n"
                        "                          $$\\   $$ |                                              \n"
                        "                          \\$$$$$$  |                                              \n"
                        "                           \\______/                                               ";

const string mediumMode = "\n"
                          "$$\\      $$\\               $$\\$$\\                             $$\\      $$\\               $$\\          \n"
                          "$$$\\    $$$ |              $$ \\__|                            $$$\\    $$$ |              $$ |         \n"
                          "$$$$\\  $$$$ |$$$$$$\\  $$$$$$$ $$\\$$\\   $$\\$$$$$$\\$$$$\\        $$$$\\  $$$$ |$$$$$$\\  $$$$$$$ |$$$$$$\\  \n"
                          "$$\\$$\\$$ $$ $$  __$$\\$$  __$$ $$ $$ |  $$ $$  _$$  _$$\\       $$\\$$\\$$ $$ $$  __$$\\$$  __$$ $$  __$$\\ \n"
                          "$$ \\$$$  $$ $$$$$$$$ $$ /  $$ $$ $$ |  $$ $$ / $$ / $$ |      $$ \\$$$  $$ $$ /  $$ $$ /  $$ $$$$$$$$ |\n"
                          "$$ |\\$  /$$ $$   ____$$ |  $$ $$ $$ |  $$ $$ | $$ | $$ |      $$ |\\$  /$$ $$ |  $$ $$ |  $$ $$   ____|\n"
                          "$$ | \\_/ $$ \\$$$$$$$\\\\$$$$$$$ $$ \\$$$$$$  $$ | $$ | $$ |      $$ | \\_/ $$ \\$$$$$$  \\$$$$$$$ \\$$$$$$$\\ \n"
                          "\\__|     \\__|\\_______|\\_______\\__|\\______/\\__| \\__| \\__|      \\__|     \\__|\\______/ \\_______|\\_______|\n"
                          "                                                                                                      \n"
                          "                                                                                                      \n"
                          "                                                                                                      ";

const string difficultMode = "\n"
                             "$$$$$$$\\ $$\\ $$$$$$\\  $$$$$$\\ $$\\                  $$\\  $$\\           $$\\      $$\\               $$\\          \n"
                             "$$  __$$\\\\__$$  __$$\\$$  __$$\\\\__|                 $$ | $$ |          $$$\\    $$$ |              $$ |         \n"
                             "$$ |  $$ $$\\$$ /  \\__$$ /  \\__$$\\ $$$$$$$\\$$\\   $$\\$$ $$$$$$\\         $$$$\\  $$$$ |$$$$$$\\  $$$$$$$ |$$$$$$\\  \n"
                             "$$ |  $$ $$ $$$$\\    $$$$\\    $$ $$  _____$$ |  $$ $$ \\_$$  _|        $$\\$$\\$$ $$ $$  __$$\\$$  __$$ $$  __$$\\ \n"
                             "$$ |  $$ $$ $$  _|   $$  _|   $$ $$ /     $$ |  $$ $$ | $$ |          $$ \\$$$  $$ $$ /  $$ $$ /  $$ $$$$$$$$ |\n"
                             "$$ |  $$ $$ $$ |     $$ |     $$ $$ |     $$ |  $$ $$ | $$ |$$\\       $$ |\\$  /$$ $$ |  $$ $$ |  $$ $$   ____|\n"
                             "$$$$$$$  $$ $$ |     $$ |     $$ \\$$$$$$$\\\\$$$$$$  $$ | \\$$$$  |      $$ | \\_/ $$ \\$$$$$$  \\$$$$$$$ \\$$$$$$$\\ \n"
                             "\\_______/\\__\\__|     \\__|     \\__|\\_______|\\______/\\__|  \\____/       \\__|     \\__|\\______/ \\_______|\\_______|\n"
                             "                                                                                                              \n"
                             "                                                                                                              \n"
                             "                                                                                                              ";

const string clincherMode = "\n"
                            " $$$$$$\\ $$\\$$\\                  $$\\                               $$\\      $$\\               $$\\          \n"
                            "$$  __$$\\$$ \\__|                 $$ |                              $$$\\    $$$ |              $$ |         \n"
                            "$$ /  \\__$$ $$\\$$$$$$$\\  $$$$$$$\\$$$$$$$\\  $$$$$$\\  $$$$$$\\        $$$$\\  $$$$ |$$$$$$\\  $$$$$$$ |$$$$$$\\  \n"
                            "$$ |     $$ $$ $$  __$$\\$$  _____$$  __$$\\$$  __$$\\$$  __$$\\       $$\\$$\\$$ $$ $$  __$$\\$$  __$$ $$  __$$\\ \n"
                            "$$ |     $$ $$ $$ |  $$ $$ /     $$ |  $$ $$$$$$$$ $$ |  \\__|      $$ \\$$$  $$ $$ /  $$ $$ /  $$ $$$$$$$$ |\n"
                            "$$ |  $$\\$$ $$ $$ |  $$ $$ |     $$ |  $$ $$   ____$$ |            $$ |\\$  /$$ $$ |  $$ $$ |  $$ $$   ____|\n"
                            "\\$$$$$$  $$ $$ $$ |  $$ \\$$$$$$$\\$$ |  $$ \\$$$$$$$\\$$ |            $$ | \\_/ $$ \\$$$$$$  \\$$$$$$$ \\$$$$$$$\\ \n"
                            " \\______/\\__\\__\\__|  \\__|\\_______\\__|  \\__|\\_______\\__|            \\__|     \\__|\\______/ \\_______|\\_______|\n"
                            "                                                                                                           \n"
                            "                                                                                                           \n"
                            "                                                                                                           ";

const string congratulations = "\n"
                               "  /$$$$$$   /$$$$$$  /$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$  /$$$$$$$$ /$$   /$$ /$$        /$$$$$$  /$$$$$$$$ /$$$$$$  /$$$$$$  /$$   /$$  /$$$$$$ \n"
                               " /$$__  $$ /$$__  $$| $$$ | $$ /$$__  $$| $$__  $$ /$$__  $$|__  $$__/| $$  | $$| $$       /$$__  $$|__  $$__/|_  $$_/ /$$__  $$| $$$ | $$ /$$__  $$\n"
                               "| $$  \\__/| $$  \\ $$| $$$$| $$| $$  \\__/| $$  \\ $$| $$  \\ $$   | $$   | $$  | $$| $$      | $$  \\ $$   | $$     | $$  | $$  \\ $$| $$$$| $$| $$  \\__/\n"
                               "| $$      | $$  | $$| $$ $$ $$| $$ /$$$$| $$$$$$$/| $$$$$$$$   | $$   | $$  | $$| $$      | $$$$$$$$   | $$     | $$  | $$  | $$| $$ $$ $$|  $$$$$$ \n"
                               "| $$      | $$  | $$| $$  $$$$| $$|_  $$| $$__  $$| $$__  $$   | $$   | $$  | $$| $$      | $$__  $$   | $$     | $$  | $$  | $$| $$  $$$$ \\____  $$\n"
                               "| $$    $$| $$  | $$| $$\\  $$$| $$  \\ $$| $$  \\ $$| $$  | $$   | $$   | $$  | $$| $$      | $$  | $$   | $$     | $$  | $$  | $$| $$\\  $$$ /$$  \\ $$\n"
                               "|  $$$$$$/|  $$$$$$/| $$ \\  $$|  $$$$$$/| $$  | $$| $$  | $$   | $$   |  $$$$$$/| $$$$$$$$| $$  | $$   | $$    /$$$$$$|  $$$$$$/| $$ \\  $$|  $$$$$$/\n"
                               " \\______/  \\______/ |__/  \\__/ \\______/ |__/  |__/|__/  |__/   |__/    \\______/ |________/|__/  |__/   |__/   |______/ \\______/ |__/  \\__/ \\______/ \n"
                               "                                                                                                                                                    \n"
                               "                                                                                                                                                    \n"
                               "                                                                                                                                                    ";

int startQuiz(const char *questions[QUESTIONS_SIZE][6]) { //The function takes a set of questions as a parameter
    int localScore = 0; // Initializes a variable to keep track of the player's score.


    for (int questionIndex = 0;
         questionIndex < QUESTIONS_SIZE; questionIndex++) { // Goes through each question in the array

        const char **const question = questions[questionIndex];
        if (question == nullptr) {
            continue;
        } // Skips to the next iteration if the current question is null.

        //Collects information about the current question, like the current question text, answer choices, and the correct answer from the function parameters
        const string questionText = question[0];
        const string firstChoiceText = question[1];
        const string secondChoiceText = question[2];
        const string thirdChoiceText = question[3];
        const string fourthChoiceText = question[4];
        const char correctLetter = question[5][0];

        system("cls");

        cout << questionIndex + 1 << ". " << questionText << endl;
        cout << endl;
        cout << firstChoiceText << endl;
        cout << secondChoiceText << endl;
        cout << thirdChoiceText << endl;
        cout << fourthChoiceText << endl;
        cout << endl;

        char letter;


        while (true) { // While loop, to make the user input the correct letter. It'll loop back the function again if the user inputs a wrong input.
            string answer;
            cout << "Enter the letter of your answer: ";
            cin >> answer;

            if (answer.size() >
                1) { // If there are more than a letter, it will prompt the user to enter a valid letter that's only one.
                cout << "Enter a valid letter." << endl;
                continue;
            }

            letter = answer[0]; // If letter isn't equal to 'A', 'B', 'C', and 'D', it will prompt the user to enter a valid letter that's only A,B,C, and D capitals.
            if (letter != 'A' && letter != 'B' && letter != 'C' && letter != 'D') {
                cout << "Enter a valid letter." << endl;
                continue;
            }

            break;
        }

        //If else statement, if the user inputs the correct answer or not.
        if (correctLetter == letter) {
            localScore += 1;
            system("cls");
            cout << correct << endl;
            sleep(2);
        } else {
            system("cls");
            cout << wrongMark << endl;
            sleep(2);
        }

        cout << endl;
    }

    return localScore; // Returns the local score, passed on as a parameter for
}

void
splashScreen() { // Function to show the Team who developed the quiz. This function will show at the start or end of the game.

    system("color 0A");
    cout << teamEsophagus << endl
         << "================================ Developed by Team ===================================" << endl
         << "================================ From Section C1A ====================================";
    sleep(2);
    system("cls");
}

void
loadingScreen() { // Loading function, source code copied from https://www.youtube.com/watch?v=fPva4Diy7SU&ab_channel=CodingIdeas
    system("cls");
    char a = 177;
    char b = 219;
    system("color 0A");
    cout << "\n\n\n\t\t\t\tLoading...\n\n";
    cout << "\t\t\t\t";
    for (int i = 0; i <= 15; i++)
        cout << a;
    cout << "\r";
    cout << "\t\t\t\t";
    for (int i = 0; i <= 15; i++) {
        cout << b;
        for (int j = 0; j <= 1e8; j++);
    }
}

void mainMenu() {
    splashScreen(); // called Splash Screen Function
    loadingScreen(); // called Loading Screen Function
    system("cls"); // for clearing the screen or console; only works on Windows Operating Systems
    cout << mainTitle << endl;
    sleep(1); // One second delay for execeuting the next function.
    cout << "-----------------------------------Type START to start-----------------------------------" << endl;
    cout << "-----------------------------Type EXIT to close the program------------------------------" << endl;
    cout << endl << endl;

    while (true) { // While true loop. It is to prompt the user to input the correct inputs. If inputs aren't either of the said inputs, then it'll loop b
        string userMenu_input;
        cout << "User Input: ";
        cin >> userMenu_input;

        if (userMenu_input ==
            "START") { // If the user inputs "START", then it'll break from the if function to start the quiz.
            break;
        } else if (userMenu_input ==
                   "EXIT") { // Else if the user inputs "EXIT", it'll load then say thank you for using the program. Then, show the splash screen, emphasizing the game was developed by the Team.
            system("cls");
            cout << endl << endl;
            loadingScreen();
            sleep(1);
            system("cls");
            cout << "======== Thank you for using the program! =========";
            sleep(2);
            cout << endl << endl;
            system("cls");
            splashScreen();
            exit(0);
        } else { // Else the user will get an error404 ascii art, and tell them that the input is correct. The function will loop until the user inputs either "START" or "EXIT".
            system("cls");
            cout << error404 << endl << endl;
            sleep(1);
            cout << "Incorrect input, please try again!";
            cout << endl;
            sleep(1);
            system("cls");
            mainMenu(); // Recursive action to call the function again in the same function itself.
        }
    }

    system("cls");

    loadingScreen(); // Loading animation as transition to starting the quiz. It's also in between of each difficulty modes in the quiz.
    system("cls");


    cout << endl << easyMode << endl;
    sleep(1);
    system("cls");

    int easyScore = startQuiz(
            easyQuestions); // Returned local score from the startQuiz function, will be decalared as a score for each mode. Goes with all of the modes of the quiz.

    if (easyScore <
        20) { //If the score returned from the function is less than 20, then the user failed the quiz. Goes the same way to Medium, Difficult, and Clincher Modes.
        cout << endl;
        sleep(1);
        system("cls");
        cout << failed << endl << endl << endl << endl;
        sleep(1);
        system("cls");
        cout << tryAgain << endl << endl;
        sleep(1);
        system("cls");
        cout << youGotThis << endl << endl;
        sleep(1);
        system("cls");
        mainMenu();
        return;
    }
    cout << "======== You passed the Easy Mode! =========" << endl;
    sleep(1);
    system("cls");

    loadingScreen();
    system("cls");

    cout << endl << mediumMode << endl;
    sleep(1);
    system("cls");

    int mediumScore = startQuiz(mediumQuestions);
    if (mediumScore < 20) {
        cout << endl;
        sleep(1);
        system("cls");
        cout << failed << endl << endl << endl << endl;
        sleep(1);
        system("cls");
        sleep(1);
        cout << tryAgain << endl << endl;
        system("cls");
        cout << youGotThis << endl << endl;
        sleep(1);
        system("cls");
        mainMenu();
        return;
    }

    cout << "======== You passed the Medium Mode! =========" << endl;
    sleep(1);
    system("cls");

    loadingScreen();
    system("cls");

    cout << endl << difficultMode << endl;
    sleep(1);
    system("cls");

    int difficultScore = startQuiz(difficultQuestions);
    if (difficultScore < 20) {
        cout << endl;
        sleep(1);
        system("cls");
        cout << failed << endl << endl << endl << endl;
        sleep(1);
        system("cls");
        sleep(1);
        cout << tryAgain << endl << endl;
        system("cls");
        cout << youGotThis << endl << endl;
        sleep(1);
        system("cls");
        mainMenu();
        return;
    }

    cout << "======== You passed the Difficult Mode! =========!" << endl;
    sleep(1);
    system("cls");

    loadingScreen();
    system("cls");

    cout << endl << clincherMode << endl;
    sleep(1);
    system("cls");

    int clincherScore = startQuiz(clincherQuestions);
    if (clincherScore < 20) {
        cout << endl;
        sleep(1);
        system("cls");
        cout << failed << endl << endl << endl << endl;
        sleep(1);
        system("cls");
        sleep(1);
        cout << tryAgain << endl << endl;
        system("cls");
        cout << youGotThis << endl << endl;
        sleep(1);
        system("cls");
        mainMenu();
        return;
    }

    cout << endl << endl;

    cout << congratulations << endl;
    sleep(2);
    system("cls");
    cout << "========= You have passed the quiz! ==========" << endl << endl;
    sleep(1);

    while (true) { //While true loop for retaking the quiz
        string userRetake;
        cout << "Do you want to retake the quiz again?" << endl << endl
             << "Type YES if you want to retake, and NO if not" << endl << endl;
        cout << "User Input: ";
        cin >> userRetake;

        if (userRetake == "YES") { // If user inputs "YES", then it'll recurse back from the Main Menu function.
            system("cls");
            mainMenu();
        } else if (userRetake ==
                   "NO") { // Else if the user inputs "NO", then it'll thank the user for using the program, then show the splash screen once again before exiting.
            system("cls");
            cout << "======== Thank you for using the program! =========";
            sleep(2);
            cout << endl << endl;
            system("cls");
            splashScreen();
            exit(0);
        } else { // Else if the inputs unlike from the inputs above, it'll show the error 404, then it'll loop back to promp the user until they input the correct inputs.
            system("cls");
            cout << error404 << endl << endl;
            sleep(1);
            cout << "======== Invalid input, please try again. =========\"" << endl;
            sleep(1);
            system("cls");
        }
    }
}

int main() {
    mainMenu();
    return 0;
}