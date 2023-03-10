//Basils pi poem gen
//made by Basil Amin
#include <string>

#include <cstdlib>

#include <iostream>

#include <vector>

#include <ctime>
using namespace std;

vector<string> one_letter_words = {"a", "i"};

vector<string> two_letter_words = {"of", "to", "in", "it", "is", "be", "as", "at", "so", "we"};

vector<string> three_letter_words = {"the", "and", "for", "are", "but", "not", "you", "all", "any", "can"};

vector<string> four_letter_words = {"that", "with", "have", "this", "will", "your", "from", "they", "know", "want", "abed",

"abet",
"able",
"ably",
"abut",
"acai",
"aced",
"aces",
"ache",
"achy",
"acid",
"acme",
"acne",
"acre",
"acts",
"adds",
"adit",
"adze",
"aeon",
"afar",
"afro",
"agar",
"aged",
"ages",
"agog",
"ague",
"ahem",
"aide",
"aids",
"ails",
"aims",
"ally",
"alms",
"aloe",
"also",
"alto",
"alum",
"ambo",
"amen",
"amid",
"ammo",
"amok",
"amps",
"amyl",
"ands",
"arid",
"aril",
"arks",
"arms",
"army",
"auto",
"aver",
"avid",
"avow",
"away",
"awed",
"awes",
"awls",
"awry",
"axed",
"axel",
"axes",
"axil",
"axis",
"axle",
"axon,"
"bank",
"bans",
"barb",
"bard",
"bare",
"barf",
"bark",
"barn",
"begs",
"bell",
"belt",
"bend",
"bent",
"berg",
"berm",
"best",
"beta",
"bets",
"bevy",
"beys",
"bias",
"bibb",
"bibs",
"bide",
"bids",
"bier",
"biff",
"bike",
"bile",
"bilk",
"bill",
"bind",
"bint",
"bios",
"bird",
"bite",
"bits",
"blab",
"blah",
"bleb",
"bled",
"blew",
"blip",
"blob",
"bloc",
"blog",
"blot",
"blow",
"blue",
"blur",
"boar",
"boas",
"boat",
"bode",
"bods",
"body",
"bogs",
"bogy",
"boil",
"bola",
"bold",
"bole",
"boll",
"bolo",
"bolt",
"bomb",
"bond",
"bone",
"bong",
"bonk",
"defy",
"deke",
"deli",
"dumb",
"dump",
"dune",
"dung"};

vector<string> five_letter_words = {
  "being", "above", "would", "think", "which", "these", "their", "thing", "trade", "train", "aback", "abase",
"abate",
"abaya",
"abbey",
"abbot",
"abets",
"abhor",
"abide",
"abode",
"abort",
"about",
"above",
"abuse",
"aburt",
"abyss",
"ached",
"aches",
"acids",
"acing",
"ackee",
"acorn",
"acres",
"acrid",
"acted",
"actin",
"actor",
"acute",
"adage",
"adapt",
"added",
"adder",
"addle",
"adept",
"adieu",
"adios",
"adits",
"adman",
"admin",
"admit",
"adobe",
"adobo",
"adopt",
"adore",
"adorn",
"adult",
"adzes",
"aegis",
"aeons",
"aerie",
"affix",
"afire",
"afoot",
"astir",
"asura",
"atlas",
"atman",
"atoll",
"atoms",
"atone",
"atopy",
"attic",
"audio",
"audit",
"auger",
"aught",
"augur",
"aunts",
"aunty",
"aural",
"auras",
"autos",
"auxin",
"avail",
"avers",
"avert",
"avoid",
"avows",
"await",
"awake",
"award",
"aware",
"awash",
"awful",
"awoke",
"axels",
"axial",
"axils",
"axing",
"axiom",
"axion",
"axles",
"axons",
"azide",
"azole",
"azure",
"babel", "babes", "babka", 
"backs", "bacon",
 "baddy", "badge", 
"badly", "bagel",
 "baggy",
  "bails", "bairn", "baits", "baize", "baked", "baker", "bakes", "baldy", "baled", "baler", "bales", "balks", "balky", "balls", "balms", "balmy", "balsa", "banal", "bands", "bandy", "banes", "bangs", "banjo", "banks", "barbs", "bards", "bared", "barer", "bares", "barge", "barks", "barmy", "barns", "baron", "barre", "basal", "based", "baser", "bases", "basic", "basil", "basin", "basis", "basks", "basso", "bassy", "baste", "batch", "bated", "bathe", "baths", "batik", "baton", "batts", "batty", "bawdy", "bawls", "bayed", "bayou", "beach", "beads", "beady", "beaks", "beams", "beamy", "beans", "beard", "bears", "beast", "beats", "beaus", "beaut", "beaux", "bebop", "becks", "beech", "beefs", "beefy", "beeps", "beers", "beery", "beets", "befit", "began", "beget", "begin", "begun", "beige", "being", "belay", "belch", "belie", "belle", "bells", "belly", "below", "belts", "bench", "bends", "bendy", "bento", "bents", "beret", "bergs", "berms", "berry", "berth", "beryl", "beset", "bests", "betas", "betel", "betta", "bevel", "bezel", "bhaji", "bible", "bicep", "biddy", "bided", "bides", "bidet", "bight", "bigot", "bijou", "biked", "biker", "bikes", "biles", "bilge", "bills", "billy", "bimbo", "bindi", "binds", "binge", "bingo", "biome", "biota", "bipod", "birch", "birds", "birth", "bison", "bitch", "biter", "bites", "bitsy", "bitty", "black", "blade", "blame", "bland", "blank", "blare", "blase", "blast", "blaze", "bleak", "bleat", "blebs", "bleed", "bleep", "blend", "bless", "blimp", "blind", "bling", "blini", "blink", "blips", "bliss", 
"blitz", "bloat",
 "blobs", "block", "blocs", "blogs", "bloke", "blond", "blood", "bloom", "bloop",
  "click", "cliff", "climb", "clime", "cline", "cling", "clink", "clips", "cloak",
   "clock", "clods", "clogs", "clomp", "clone", "close", "cloth", "clots", "cloud",
    "clout", "clove", "clown", "clubs", "cluck", "clued", "clues", "clump", "clung",
     "clunk", "coach", "coals", "coast", "coati", "coats", "cobia", "cobra", "cocci",
      "cocks", "cocky", "cocoa", "codas", "codec", "coded", "coder", "codes", "codex", 
      "codon", "coeds", "cohos", "coifs", "coils", "coins", "cokes", "colas", "colds", 
      "coles", "colic", "colin", "colon", "color", "colts", "comas", "combo", "combs", 
      "comer", "comes", "comet", "comfy", "comic", "comma", "commo", "compo", "comps",
       "comte", "conch", "condo", "coned", "cones", "conga", "congo", "conic", "conks", 
       "cooed", "cooks", "cools", "coops", "coopt", "coped", "copes", "copra", "copse",
        "coral", "cords", "cored", "corer", "cores", "corgi", "corks", "corky", "corms",
         "corns", "cornu", "corny", "corps", "costs", "cotta", "couch", "cough", "could",
          "count", "coupe", "coups", "court", "coven", "cover", "coves", "covet", "covey",
           "cowed", "cower", "cowls", "coyly", "crabs", "crack", "craft", "crags", "cramp",
            "crams", "crane", "crank", "crape", "craps", "crash", "crass", "crate", "crave", 
            "crawl", "craws", "craze", "crazy", "creak", "cream", "credo", "creed", "creek", 
            "creel", "creep", "creme", "crepe", "crept", "cress", "crest", "crews", "cribs", 
            "crick", "cried", "crier", "cries", "crime", "crimp", "crisp", "crits", "croak",
             "crock", "crocs", "croft", "crone", "crony", "crook", "croon", "crops", "cross", 
             "croup", "crowd", "crown", "crows", "crude", "cruel", "cruet", "crumb", "cruse",
              "crush", "crust", "crypt", "cubby", "cubed", "cubes", "cubic", "cubit", "cuddy", "cuffs", "culls", "culpa",
              "dares", "darks", "darns", "darts", "dashi", "dated", "dater", "dates", "datum", "daubs",
               "daunt", "davit", "dawns", "dazed", "deals", "dealt", "deans", "dears", "deary", "death",
                "debit", "debts", "debug", "debut", "decaf", "decal", "decay", "decks", "decor", "decoy", 
                "decry", "deeds", "deems", "deeps", "deers", "defer", "deify", "deign", "deism", "deist", 
                "deity", "dekes", "delay", "delft", "delis", "dells", "delta", "delve", "demon", "demos", 
                "demur", "denim", "dense", "dents", "depot", "depth", "derby", "desks", "deter", "detox", 
                "deuce", "devil", "dewar", "dhikr", "dhows", "dials", "diary", "diced", "dices", "dicey", 
                "dicky", "dicta", "diets", "digit", "diked", "dikes", "dills", "dilly", "dimer", "dimes", 
                "dimly", "dinar", "dined", "diner", "dines", "dingo", "dings", "dingy", "dinks", "dinky", 
                "dinos", "diode", "dippy", "direr", "dirge", "dirty", "disco", "discs", "dishy", "disks", 
                "ditch", "ditsy", "ditto", "ditty", "ditzy", "divan", "divas", "dived", "diver", "dives",
                 "divot", "divvy", "dizzy", "docks", "dodge", "dodgy", "dodos", "doers", "doffs", "doges",
                  "doggy", "dogma", "doing", "doled", "doles", "dolls", "dolly", "dolor", "dolts", "domed", 
                  "domes", "donee", "dongs", "donna", "donor", "donut", "dooms", "doomy", "doors", "doozy", 
                  "doped", "dopes", "dopey", "dorks", "dorky", "dorms", "dosas", "dosed", "doses", "doted", "dotes",
                   "dotty", "doubt", "dough", "doula", "douse", "doves", "dowdy", "dowel", "dower", "downs", "downy",
                    "dowry", "dowse", "doyen", "dozed", "dozen", "dozer", "dozes", "drabs", "draft", "drags", "drain",
                     "drake", "drama", "drams", "drank", "drape", "drawl", "drawn", "draws", "drays", "dread", "dream",
                      "dreck", "dregs", "dress", "dribs", "dried","keeps",
"kicks",
"kills",
"kinda",
"kinds",
"kings",
"knees",
"knife",
"knock",
"knots",
"known",
"knows"
};

vector<string> six_letter_words = {"Better", "Beyond", "Bishop",
 "Border", "Bottle", "Bottom", "Bought", "Branch", "Breath", "Bridge", "Bright",
  "Budget", "Burden", "Bureau", "Button", "Camera", "Cancer", "Cannot", "Carbon",
   "Career", "Castle", "Casual", "Caught", "Center", "Centre", "Chance", "Change",
    "Charge", "Choice", "Choose", "Chosen", "Church", "Circle", "Client", "Closed",
     "Closer", "Coffee", "Column", "Combat", "Coming", "Common", "Comply", "Copper",
      "Corner", "Costly", "County", "Couple", "Course", "Covers", "Create", "Credit",
       "Crisis", "Custom", "Damage", "Danger", "Dealer", "Debate", "Decade", "Decide", 
       "Defeat", "Defend", "Define", "Degree", "Demand", "Depend", "Deputy", "Desert",
        "Design", "Desire", "Detail", "Detect", "Device", "Differ", "Dinner", "Direct",
         "Doctor", "Dollar", "Domain", "Double", "Driven", "Driver", "During", "Easily",
          "Eating", "Editor", "Effect", "Effort", "Eighth", "Either", "Eleven", "Emerge",
           "Empire", "Employ", "Headed", "Health", "Height", "Hidden", "Holder", "Honest", 
           "Impact", "Import", "Income", "Indeed", "Injury", "Inside", "Intend", "Intent", 
           "Invest", "Island", "Itself", "Jersey", "Joseph", "Junior", "Killed", "Master", 
           "Matter", "Mature", "Medium", "Member", "Memory", "Mental", "Merely", "Merger", 
           "Method", "Middle", "Miller", "Mining", "Minute", "Mirror", "Mobile", "Modern",
            "Modest", "Module", "Moment", "Morris", "Most", "Mother", "Motion", "Moving", "Murder", "Museum",
             "Mutual", "Myself", "Narrow", "Nation", "Native", "Nature", "Nearby", "Nearly", "Output", "Oxford", 
             "Packed", "Palace", "Parent", "Partly", "Patent", "People", "Period", "Permit", "Person", "Phrase", 
             "Picked", "Planet", "Player", "Please", "Plenty", "Pocket", "Police", "Policy", "Prefer", "Pretty", 
             "Prince", "Region", "Relate", "Relief", "Remain", "Remote", "Remove", "Repair", "Repeat", "Replay", 
             "Report", "Rescue", "Resort", "Result", "Retail", "Retain", "Return", "Reveal", "Review", "Reward", 
             "Riding", "Rising", "Robust", "Ruling", "Safety", "Salary", "Sample", "Saving", "Saying", "Scheme", 
             "School", "Screen", "Search", "Season", "Second", "Secret", "Sector", "Secure", "Seeing", "Select", 
             "Seller", "Senior", "Series", "Server", "Settle", "Severe", "Sexual", "Should", "Signal", "Signed", 
             "Silent", "Silver", "Simple", "Simply", "Single", "Sister", "Slight", "Smooth", "Social", "Solely", 
             "Sought", "Source", "Soviet", "Speech", "Spirit", "Spoken", "Spread", "Spring", "Square", "Stable",
              "Status", "Steady", "Stolen", "Strain", "Stream",
             "Street", "Stress", "Strict", "Strike", "String", "Theory", "Thirty", "Though", "Wonder", "Worker"
 };

vector<string> six_letter_words = {"Better", "Beyond", "Bishop",
 "Border", "Bottle", "Bottom", "Bought", "Branch", "Breath", "Bridge", "Bright",
  "Budget", "Burden", "Bureau", "Button", "Camera", "Cancer", "Cannot", "Carbon",
   "Career", "Castle", "Casual", "Caught", "Center", "Centre", "Chance", "Change",
    "Charge", "Choice", "Choose", "Chosen", "Church", "Circle", "Client", "Closed",
     "Closer", "Coffee", "Column", "Combat", "Coming", "Common", "Comply", "Copper",
      "Corner", "Costly", "County", "Couple", "Course", "Covers", "Create", "Credit",
       "Crisis", "Custom", "Damage", "Danger", "Dealer", "Debate", "Decade", "Decide", 
       "Defeat", "Defend", "Define", "Degree", "Demand", "Depend", "Deputy", "Desert",
        "Design", "Desire", "Detail", "Detect", "Device", "Differ", "Dinner", "Direct",
         "Doctor", "Dollar", "Domain", "Double", "Driven", "Driver", "During", "Easily",
          "Eating", "Editor", "Effect", "Effort", "Eighth", "Either", "Eleven", "Emerge",
           "Empire", "Employ", "Headed", "Health", "Height", "Hidden", "Holder", "Honest", 
           "Impact", "Import", "Income", "Indeed", "Injury", "Inside", "Intend", "Intent", 
           "Invest", "Island", "Itself", "Jersey", "Joseph", "Junior", "Killed", "Master", 
           "Matter", "Mature", "Medium", "Member", "Memory", "Mental", "Merely", "Merger", 
           "Method", "Middle", "Miller", "Mining", "Minute", "Mirror", "Mobile", "Modern",
            "Modest", "Module", "Moment", "Morris", "Most", "Mother", "Motion", "Moving", "Murder", "Museum",
             "Mutual", "Myself", "Narrow", "Nation", "Native", "Nature", "Nearby", "Nearly", "Output", "Oxford", 
             "Packed", "Palace", "Parent", "Partly", "Patent", "People", "Period", "Permit", "Person", "Phrase", 
             "Picked", "Planet", "Player", "Please", "Plenty", "Pocket", "Police", "Policy", "Prefer", "Pretty", 
             "Prince", "Region", "Relate", "Relief", "Remain", "Remote", "Remove", "Repair", "Repeat", "Replay", 
             "Report", "Rescue", "Resort", "Result", "Retail", "Retain", "Return", "Reveal", "Review", "Reward", 
             "Riding", "Rising", "Robust", "Ruling", "Safety", "Salary", "Sample", "Saving", "Saying", "Scheme", 
             "School", "Screen", "Search", "Season", "Second", "Secret", "Sector", "Secure", "Seeing", "Select", 
             "Seller", "Senior", "Series", "Server", "Settle", "Severe", "Sexual", "Should", "Signal", "Signed", 
             "Silent", "Silver", "Simple", "Simply", "Single", "Sister", "Slight", "Smooth", "Social", "Solely", 
             "Sought", "Source", "Soviet", "Speech", "Spirit", "Spoken", "Spread", "Spring", "Square", "Stable",
              "Status", "Steady", "Stolen", "Strain", "Stream",
             "Street", "Stress", "Strict", "Strike", "String", "Theory", "Thirty", "Though", "Wonder", "Worker"};

             vector<string> nine_letter_words {"Provoking",
 "Nutrition", "Crocodile", "Halloween", "Amerindic", "Ambulance", "Alligator", "Seventeen", "Affection", "Congruent", "Marijuana", "Community", "Different", "Vegetable", "Influence",
 "Structure", "Invisible", "Wonderful", "Christian", "Dangerous", "Masculine", "Australia", "Irregular", "Something", "Elizabeth", "Knowledge", "Macaronic", "Pollution", "President",
};



int main {
    srand(time(0));  int random_index_word



    cout << "3: "
random_index_word = rand() % three_letter_words.size();
cout << three_letter_words[random_index_word] << endl

   cout << "1: "
random_index_word = rand() % one_letter_words.size();
cout << one_letter_words[random_index_word] << endl


   cout << "4: "
random_index_word = rand() % four_letter_words.size();
cout << four_letter_words[random_index_word] << endl

   cout << "1: "
random_index_word = rand() % one_letter_words.size();
cout << one_letter_words[random_index_word] << endl

   cout << "5: "
random_index_word = rand() % five_letter_words.size();
cout << five_words[random_index_word] << endl

   cout << "9: "
random_index_word = rand() % nine_letter_words.size();
cout << nine_letter_words[random_index_word] << endl

   cout << "2: "
random_index_word = rand() % two_letter_words.size();
cout << two_letter_words[random_index_word] << endl

   cout << "6: "
random_index_word = rand() % six_letter_words.size();
cout << six_letter_words[random_index_word] << endl

   cout << "5: "
random_index_word = rand() % five_letter_words.size();
cout << five_letter_words[random_index_word] << endl




}
