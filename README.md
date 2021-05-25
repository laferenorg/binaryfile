# binaryfile

## INFO

### First
binaryfile header is a header designed to write a binary file that can 
store number data or a word. And storage is made very simple.

### Seconds
the header in directory include. If you wont look test code you can compile code and learn
how code run. In directory example.

## Hot To Using

### First
How to using this header. First decalred variable. And give name file what's you like.
Like this:
```CPP
std::binaryfile myFile = "namefile.db";
```

## Functions
### `adding_number`
This section for adding number. You must give type of number you wont to
adding this type you must to give: `int`, `float`, `double`. Example:
```CPP
std::binaryfile myFile = "namefile.db";

/* Section For Adding Number Integer */
myFile.adding_number<int>(23);

/* Section For Adding Number Float */
myFile.adding_number<float>(23.2);

/* Section For Adding Number Double */
myFile.adding_number<int>(23.33);
```

### `adding_string`
This section for adding string. Example:
```CPP
std::binaryfile myFile = "namefile.db";

/* Section For Adding String */
myFile.adding_string("Hello, World!");
```

### Info
If you using get and removing function. You must to know how to array work.
This like array. But if array from 0. This start from 1.

### `remove`
This section how to remove data. Example:
```CPP
std::binaryfile myFile = "namefile.db";

/* Section For Adding String */
myFile.adding_string("Hello, World!");

/* Section For Remove Data */
myFile.remove(1);
```

### `clear`
This section it's function for clear all data. Example:
```CPP
std::binaryfile myFile = "namefile.db";

/* Section For Adding String */
myFile.adding_string("Hello, World!");

/* Section For Remove Data */
myFile.clear();
```

### `get_number` And `get_string`
This section it's how to get data. `Info`: you must make a data type same as you're parameter Type.
Example:
```CPP
std::binaryfile myFile = "namefile.db";

/* Section For Adding String */
myFile.adding_string("Hello, World!");

/* Section For Adding Number */
myFile.adding_number<int>(40);

/* Get String */
std::cout << db.get_string(1) << std::endl;
std::cout << db.get_number<int>(2) << std::endl;
```

### `save` And `init`
This section for save data into file. And read file into memory.
Example:
```CPP
std::binaryfile myFile = "namefile.db";
/* Read File */
myFile.init();

/* Write File */
myFile.save();
```

### `type` And `length`
this section it's features. For type function it's for get type of data using id.
And then for length function for get length of data.
Example:
```CPP
std::binaryfile myFile = "namefile.db";

/* Section For Adding Data Number */
myFile.add_number<int>(20);

/* Section For Get Type */
std::cout << myFile.type(1) << std::endl;

/* Section For Get Length */
std::cout << myFile.length() << std::endl;
```

### `update_number` And `update_string`
this section it's features. For update data.
Info: `You can change from int to string. or type to another type`.
Example:
```CPP
std::binaryfile myFile = "namefile.db";

/* Section For Adding Data Number */
myFile.add_number<int>(20);
myFile.add_number<float>(32.4f);

/* Section For Update Data */
myFile.update_string(1, "Hello, World!");
myFile.update_number<int>(2, 30);
```

## Thanking You In Crypto:
- Bitcoin : 3Q9KL3pbrzHVNKzmcysgMxcyU8EVHvCRGD
- Ethereum: 0x541736e629677Fb46ead7AC3DAd056689E2175d5
- Litecoin: MRq3hsiSodE5CJyDvVJPWEAAXZ7pbRDXN9
