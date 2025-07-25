---
author: Luciano Ramalho
created: 2025-01-14T11:41+03:00
tags:
  - blog
  - Python
  - annotation_book
file: ./books/Ramalho-Fluent_Python.pdf
sr-due: 2025-07-22
sr-interval: 1
sr-ease: 130
---

# Fluent Python

Python’s simplicity lets you become productive quickly, but this often means you aren’t using everything it has to offer. With this hands-on guide, you’ll learn how to write effective, idiomatic Python code by leveraging its best—and possibly most neglected—features.

Author Luciano Ramalho takes you through Python’s core language features and libraries, and shows you how to make your code shorter, faster, and more readable at the same time. Many experienced programmers try to bend Python to fit patterns they learned from other languages, and never discover Python features outside of their experience.

With this book, those Python programmers will thoroughly learn how to become proficient in Python 3.

## Cover /1

## Copyright /4

## Table of Contents /7

## Preface /21

### Who This Book Is For /22

### Who This Book Is Not For /22

### Five Books in One /22

#### How the Book Is Organized /23

### Hands-On Approach /24

### Soapbox: My Personal Perspective /25

### Companion Website: fluentpython.com /25

### Conventions Used in This Book /25

### Using Code Examples /26

### O’Reilly Online Learning /27

### How to Contact Us /27

### Acknowledgments /27

#### Acknowledgments for the First Edition /29

## Part I. Data Structures /31

### Chapter 1. The Python Data Model /33

#### What’s New in This Chapter /34

#### A Pythonic Card Deck /35

#### How Special Methods Are Used /38

##### Emulating Numeric Types /39

##### String Representation /42

##### Boolean Value of a Custom Type /43

##### Collection API /44

#### Overview of Special Methods /45

#### Why len Is Not a Method /47

#### Chapter Summary /48

#### Further Reading /48

### Chapter 2. An Array of Sequences /51

#### What’s New in This Chapter /52

#### Overview of Built-In Sequences /52

#### List Comprehensions and Generator Expressions /55

##### List Comprehensions and Readability /55

##### Listcomps Versus map and filter /57

##### Cartesian Products /57

##### Generator Expressions /59

#### Tuples Are Not Just Immutable Lists /60

##### Tuples as Records /60

##### Tuples as Immutable Lists /62

##### Comparing Tuple and List Methods /64

#### Unpacking Sequences and Iterables /65

##### Using * to Grab Excess Items /66

##### Unpacking with * in Function Calls and Sequence Literals /67

##### Nested Unpacking /67

#### Pattern Matching with Sequences /68

##### Pattern Matching Sequences in an Interpreter /73

#### Slicing /77

##### Why Slices and Ranges Exclude the Last Item /77

##### Slice Objects /78

##### Multidimensional Slicing and Ellipsis /79

##### Assigning to Slices /80

#### Using + and * with Sequences /80

##### Building Lists of Lists /81

##### Augmented Assignment with Sequences /83

##### A += Assignment Puzzler /84

#### list.sort Versus the sorted Built-In /86

#### When a List Is Not the Answer /89

##### Arrays /89

##### Memory Views /92

##### NumPy /94

##### Deques and Other Queues /97

#### Chapter Summary /100

#### Further Reading /101

### Chapter 3. Dictionaries and Sets /107

#### What’s New in This Chapter /108

#### Modern dict Syntax /108

##### dict Comprehensions /109

##### Unpacking Mappings /110

##### Merging Mappings with | /110

#### Pattern Matching with Mappings /111

#### Standard API of Mapping Types /113

##### What Is Hashable /114

##### Overview of Common Mapping Methods /115

##### Inserting or Updating Mutable Values /117

#### Automatic Handling of Missing Keys /120

##### defaultdict: Another Take on Missing Keys /120

##### The **missing** Method /121

##### Inconsistent Usage of **missing** in the Standard Library /124

#### Variations of dict /125

##### collections.OrderedDict /125

##### collections.ChainMap /125

##### collections.Counter /126

##### shelve.Shelf /127

##### Subclassing UserDict Instead of dict /127

#### Immutable Mappings /129

#### Dictionary Views /131

#### Practical Consequences of How dict Works /132

#### Set Theory /133

##### Set Literals /135

##### Set Comprehensions /136

#### Practical Consequences of How Sets Work /137

##### Set Operations /137

#### Set Operations on dict Views /140

#### Chapter Summary /142

#### Further Reading /143

### Chapter 4. Unicode Text Versus Bytes /147

#### What’s New in This Chapter /148

#### Character Issues /148

#### Byte Essentials /150

#### Basic Encoders/Decoders /153

#### Understanding Encode/Decode Problems /155

##### Coping with UnicodeEncodeError /155

##### Coping with UnicodeDecodeError /156

##### SyntaxError When Loading Modules with Unexpected Encoding /158

##### How to Discover the Encoding of a Byte Sequence /158

##### BOM: A Useful Gremlin /159

#### Handling Text Files /161

##### Beware of Encoding Defaults /164

#### Normalizing Unicode for Reliable Comparisons /170

##### Case Folding /172

##### Utility Functions for Normalized Text Matching /173

##### Extreme “Normalization”: Taking Out Diacritics /174

#### Sorting Unicode Text /178

##### Sorting with the Unicode Collation Algorithm /180

#### The Unicode Database /180

##### Finding Characters by Name /181

##### Numeric Meaning of Characters /183

#### Dual-Mode str and bytes APIs /185

##### str Versus bytes in Regular Expressions /185

##### str Versus bytes in os Functions /186

#### Chapter Summary /187

#### Further Reading /188

### Chapter 5. Data Class Builders /193

#### What’s New in This Chapter /194

#### Overview of Data Class Builders /194

##### Main Features /197

#### Classic Named Tuples /199

#### Typed Named Tuples /202

#### Type Hints 101 /203

##### No Runtime Effect /203

##### Variable Annotation Syntax /204

##### The Meaning of Variable Annotations /205

#### More About @dataclass /209

##### Field Options /210

##### Post-init Processing /213

##### Typed Class Attributes /215

##### Initialization Variables That Are Not Fields /216

##### @dataclass Example: Dublin Core Resource Record /217

#### Data Class as a Code Smell /220

##### Data Class as Scaffolding /221

##### Data Class as Intermediate Representation /221

#### Pattern Matching Class Instances /222

##### Simple Class Patterns /222

##### Keyword Class Patterns /223

##### Positional Class Patterns /224

#### Chapter Summary /225

#### Further Reading /226

### Chapter 6. Object References, Mutability, and Recycling /231

#### What’s New in This Chapter /232

#### Variables Are Not Boxes /232

#### Identity, Equality, and Aliases /234

##### Choosing Between == and is /236

##### The Relative Immutability of Tuples /237

#### Copies Are Shallow by Default /238

##### Deep and Shallow Copies of Arbitrary Objects /241

#### Function Parameters as References /243

##### Mutable Types as Parameter Defaults: Bad Idea /244

##### Defensive Programming with Mutable Parameters /246

#### del and Garbage Collection /249

#### Tricks Python Plays with Immutables /251

#### Chapter Summary /253

#### Further Reading /254

## Part II. Functions as Objects /259

### Chapter 7. Functions as First-Class Objects /261

#### What’s New in This Chapter /262

#### Treating a Function Like an Object /262

#### Higher-Order Functions /264

##### Modern Replacements for map, filter, and reduce /265

#### Anonymous Functions /266

#### The Nine Flavors of Callable Objects /267

#### User-Defined Callable Types /269

#### From Positional to Keyword-Only Parameters /270

##### Positional-Only Parameters /272

#### Packages for Functional Programming /273

##### The operator Module /273

##### Freezing Arguments with functools.partial /277

#### Chapter Summary /279

#### Further Reading /280

### Chapter 8. Type Hints in Functions /283

#### What’s New in This Chapter /284

#### About Gradual Typing /284

#### Gradual Typing in Practice /285

##### Starting with Mypy /286

##### Making Mypy More Strict /287

##### A Default Parameter Value /288

##### Using None as a Default /290

#### Types Are Defined by Supported Operations /290

#### Types Usable in Annotations /296

##### The Any Type /296

##### Simple Types and Classes /299

##### Optional and Union Types /300

##### Generic Collections /301

##### Tuple Types /304

##### Generic Mappings /306

##### Abstract Base Classes /308

##### Iterable /310

##### Parameterized Generics and TypeVar /312

##### Static Protocols /316

##### Callable /321

##### NoReturn /324

#### Annotating Positional Only and Variadic Parameters /325

#### Imperfect Typing and Strong Testing /326

#### Chapter Summary /327

#### Further Reading /328

### Chapter 9. Decorators and Closures /333

#### What’s New in This Chapter /334

#### Decorators 101 /334

#### When Python Executes Decorators /336

#### Registration Decorators /338

#### Variable Scope Rules /338

#### Closures /341

#### The nonlocal Declaration /345

##### Variable Lookup Logic /346

#### Implementing a Simple Decorator /347

##### How It Works /348

#### Decorators in the Standard Library /350

##### Memoization with functools.cache /350

##### Using lru_cache /353

##### Single Dispatch Generic Functions /354

#### Parameterized Decorators /359

##### A Parameterized Registration Decorator /359

##### The Parameterized Clock Decorator /362

##### A Class-Based Clock Decorator /365

#### Chapter Summary /366

#### Further Reading /366

### Chapter 10. Design Patterns with First-Class Functions /371

#### What’s New in This Chapter /372

#### Case Study: Refactoring Strategy /372

##### Classic Strategy /372

##### Function-Oriented Strategy /377

##### Choosing the Best Strategy: Simple Approach /380

##### Finding Strategies in a Module /381

#### Decorator-Enhanced Strategy Pattern /383

#### The Command Pattern /385

#### Chapter Summary /387

#### Further Reading /388

## Part III. Classes and Protocols /391

### Chapter 11. A Pythonic Object /393

#### What’s New in This Chapter /394

#### Object Representations /394

#### Vector Class Redux /395

#### An Alternative Constructor /398

#### classmethod Versus staticmethod /399

#### Formatted Displays /400

#### A Hashable Vector2d /404

#### Supporting Positional Pattern Matching /407

#### Complete Listing of Vector2d, Version 3 /408

#### Private and “Protected” Attributes in Python /412

#### Saving Memory with **slots** /414

##### Simple Measure of **slot** Savings /417

##### Summarizing the Issues with **slots** /418

#### Overriding Class Attributes /419

#### Chapter Summary /421

#### Further Reading /422

### Chapter 12. Special Methods for Sequences /427

#### What’s New in This Chapter /428

#### Vector: A User-Defined Sequence Type /428

#### Vector Take #1: Vector2d Compatible /429

#### Protocols and Duck Typing /432

#### Vector Take #2: A Sliceable Sequence /433

##### How Slicing Works /434

##### A Slice-Aware **getitem** /436

#### Vector Take #3: Dynamic Attribute Access /437

#### Vector Take #4: Hashing and a Faster == /441

#### Vector Take #5: Formatting /448

#### Chapter Summary /455

#### Further Reading /456

### Chapter 13. Interfaces, Protocols, and ABCs /461

#### The Typing Map /462

#### What’s New in This Chapter /463

#### Two Kinds of Protocols /464

#### Programming Ducks /465

##### Python Digs Sequences /466

##### Monkey Patching: Implementing a Protocol at Runtime /468

##### Defensive Programming and “Fail Fast” /470

#### Goose Typing /472

##### Subclassing an ABC /477

##### ABCs in the Standard Library /479

##### Defining and Using an ABC /481

##### ABC Syntax Details /487

##### Subclassing an ABC /488

##### A Virtual Subclass of an ABC /490

##### Usage of register in Practice /493

##### Structural Typing with ABCs /494

#### Static Protocols /496

##### The Typed double Function /496

##### Runtime Checkable Static Protocols /498

##### Limitations of Runtime Protocol Checks /501

##### Supporting a Static Protocol /502

##### Designing a Static Protocol /504

##### Best Practices for Protocol Design /506

##### Extending a Protocol /507

##### The numbers ABCs and Numeric Protocols /508

#### Chapter Summary /511

#### Further Reading /512

### Chapter 14. Inheritance: For Better or for Worse /517

#### What’s New in This Chapter /518

#### The super() Function /518

#### Subclassing Built-In Types Is Tricky /520

#### Multiple Inheritance and Method Resolution Order /524

#### Mixin Classes /530

##### Case-Insensitive Mappings /530

#### Multiple Inheritance in the Real World /532

##### ABCs Are Mixins Too /532

##### ThreadingMixIn and ForkingMixIn /533

##### Django Generic Views Mixins /534

##### Multiple Inheritance in Tkinter /537

#### Coping with Inheritance /540

##### Favor Object Composition over Class Inheritance /540

##### Understand Why Inheritance Is Used in Each Case /540

##### Make Interfaces Explicit with ABCs /541

##### Use Explicit Mixins for Code Reuse /541

##### Provide Aggregate Classes to Users /541

##### Subclass Only Classes Designed for Subclassing /542

##### Avoid Subclassing from Concrete Classes /543

##### Tkinter: The Good, the Bad, and the Ugly /543

#### Chapter Summary /544

#### Further Reading /545

### Chapter 15. More About Type Hints /549

#### What’s New in This Chapter /549

#### Overloaded Signatures /550

##### Max Overload /551

##### Takeaways from Overloading max /555

#### TypedDict /556

#### Type Casting /564

#### Reading Type Hints at Runtime /567

##### Problems with Annotations at Runtime /568

##### Dealing with the Problem /570

#### Implementing a Generic Class /571

##### Basic Jargon for Generic Types /574

#### Variance /574

##### An Invariant Dispenser /575

##### A Covariant Dispenser /576

##### A Contravariant Trash Can /577

##### Variance Review /579

#### Implementing a Generic Static Protocol /582

#### Chapter Summary /584

#### Further Reading /585

### Chapter 16. Operator Overloading /591

#### What’s New in This Chapter /592

#### Operator Overloading 101 /592

#### Unary Operators /593

#### Overloading + for Vector Addition /596

#### Overloading * for Scalar Multiplication /602

#### Using @ as an Infix Operator /604

#### Wrapping-Up Arithmetic Operators /606

#### Rich Comparison Operators /607

#### Augmented Assignment Operators /610

#### Chapter Summary /615

#### Further Reading /617

## Part IV. Control Flow /621

### Chapter 17. Iterators, Generators,

## and Classic Coroutines /623

#### What’s New in This Chapter /624

#### A Sequence of Words /624

#### Why Sequences Are Iterable: The iter Function /626

##### Using iter with a Callable /628

#### Iterables Versus Iterators /629

#### Sentence Classes with **iter** /633

##### Sentence Take #2: A Classic Iterator /633

##### Don’t Make the Iterable an Iterator for Itself /635

##### Sentence Take #3: A Generator Function /636

##### How a Generator Works /637

#### Lazy Sentences /640

##### Sentence Take #4: Lazy Generator /640

##### Sentence Take #5: Lazy Generator Expression /641

#### When to Use Generator Expressions /643

#### An Arithmetic Progression Generator /645

##### Arithmetic Progression with itertools /648

#### Generator Functions in the Standard Library /649

#### Iterable Reducing Functions /660

#### Subgenerators with yield from /662

##### Reinventing chain /663

##### Traversing a Tree /664

#### Generic Iterable Types /669

#### Classic Coroutines /671

##### Example: Coroutine to Compute a Running Average /673

##### Returning a Value from a Coroutine /676

##### Generic Type Hints for Classic Coroutines /680

#### Chapter Summary /682

#### Further Reading /682

### Chapter 18. with, match, and else Blocks /687

#### What’s New in This Chapter /688

#### Context Managers and with Blocks /688

##### The contextlib Utilities /693

##### Using @contextmanager /694

#### Pattern Matching in lis.py: A Case Study /699

##### Scheme Syntax /699

##### Imports and Types /701

##### The Parser /701

##### The Environment /703

##### The REPL /705

##### The Evaluator /706

##### Procedure: A Class Implementing a Closure /715

##### Using OR-patterns /716

#### Do This, Then That: else Blocks Beyond if /717

#### Chapter Summary /719

#### Further Reading /720

### Chapter 19. Concurrency Models in Python /725

#### What’s New in This Chapter /726

#### The Big Picture /726

#### A Bit of Jargon /727

##### Processes, Threads, and Python’s Infamous GIL /729

#### A Concurrent Hello World /731

##### Spinner with Threads /731

##### Spinner with Processes /734

##### Spinner with Coroutines /736

##### Supervisors Side-by-Side /741

#### The Real Impact of the GIL /743

##### Quick Quiz /743

#### A Homegrown Process Pool /746

##### Process-Based Solution /748

##### Understanding the Elapsed Times /748

##### Code for the Multicore Prime Checker /749

##### Experimenting with More or Fewer Processes /753

##### Thread-Based Nonsolution /754

#### Python in the Multicore World /755

##### System Administration /756

##### Data Science /757

##### Server-Side Web/Mobile Development /758

##### WSGI Application Servers /760

##### Distributed Task Queues /762

#### Chapter Summary /763

#### Further Reading /764

##### Concurrency with Threads and Processes /764

##### The GIL /766

##### Concurrency Beyond the Standard Library /766

##### Concurrency and Scalability Beyond Python /768

### Chapter 20. Concurrent Executors /773

#### What’s New in This Chapter /773

#### Concurrent Web Downloads /774

##### A Sequential Download Script /776

##### Downloading with concurrent.futures /779

##### Where Are the Futures? /781

#### Launching Processes with concurrent.futures /784

##### Multicore Prime Checker Redux /785

#### Experimenting with Executor.map /788

#### Downloads with Progress Display and Error Handling /792

##### Error Handling in the flags2 Examples /796

##### Using futures.as_completed /799

#### Chapter Summary /802

#### Further Reading /802

### Chapter 21. Asynchronous Programming /805

#### What’s New in This Chapter /806

#### A Few Definitions /807

#### An asyncio Example: Probing Domains /808

##### Guido’s Trick to Read Asynchronous Code /810

#### New Concept: Awaitable /811

#### Downloading with asyncio and HTTPX /812

##### The Secret of Native Coroutines: Humble Generators /814

##### The All-or-Nothing Problem /815

#### Asynchronous Context Managers /816

#### Enhancing the asyncio Downloader /817

##### Using asyncio.as_completed and a Thread /818

##### Throttling Requests with a Semaphore /820

##### Making Multiple Requests for Each Download /824

#### Delegating Tasks to Executors /827

#### Writing asyncio Servers /829

##### A FastAPI Web Service /830

##### An asyncio TCP Server /834

#### Asynchronous Iteration and Asynchronous Iterables /841

##### Asynchronous Generator Functions /842

##### Async Comprehensions and Async Generator Expressions /848

#### async Beyond asyncio: Curio /851

#### Type Hinting Asynchronous Objects /854

#### How Async Works and How It Doesn’t /855

##### Running Circles Around Blocking Calls /855

##### The Myth of I/O-Bound Systems /856

##### Avoiding CPU-Bound Traps /856

#### Chapter Summary /857

#### Further Reading /858

## Part V. Metaprogramming /863

### Chapter 22. Dynamic Attributes and Properties /865

#### What’s New in This Chapter /866

#### Data Wrangling with Dynamic Attributes /866

##### Exploring JSON-Like Data with Dynamic Attributes /868

##### The Invalid Attribute Name Problem /872

##### Flexible Object Creation with **new** /873

#### Computed Properties /875

##### Step 1: Data-Driven Attribute Creation /876

##### Step 2: Property to Retrieve a Linked Record /878

##### Step 3: Property Overriding an Existing Attribute /882

##### Step 4: Bespoke Property Cache /883

##### Step 5: Caching Properties with functools /885

#### Using a Property for Attribute Validation /887

##### LineItem Take #1: Class for an Item in an Order /887

##### LineItem Take #2: A Validating Property /888

#### A Proper Look at Properties /890

##### Properties Override Instance Attributes /891

##### Property Documentation /894

#### Coding a Property Factory /895

#### Handling Attribute Deletion /898

#### Essential Attributes and Functions for Attribute Handling /899

##### Special Attributes that Affect Attribute Handling /900

##### Built-In Functions for Attribute Handling /900

##### Special Methods for Attribute Handling /901

#### Chapter Summary /903

#### Further Reading /903

### Chapter 23. Attribute Descriptors /909

#### What’s New in This Chapter /910

#### Descriptor Example: Attribute Validation /910

##### LineItem Take #3: A Simple Descriptor /910

##### LineItem Take #4: Automatic Naming of Storage Attributes /917

##### LineItem Take #5: A New Descriptor Type /919

#### Overriding Versus Nonoverriding Descriptors /922

##### Overriding Descriptors /924

##### Overriding Descriptor Without **get** /925

##### Nonoverriding Descriptor /926

##### Overwriting a Descriptor in the Class /927

#### Methods Are Descriptors /928

#### Descriptor Usage Tips /930

#### Descriptor Docstring and Overriding Deletion /932

#### Chapter Summary /933

#### Further Reading /934

### Chapter 24. Class Metaprogramming /937

#### What’s New in This Chapter /938

#### Classes as Objects /938

#### type: The Built-In Class Factory /939

#### A Class Factory Function /941

#### Introducing **init_subclass** /944

##### Why **init_subclass** Cannot Configure **slots** /951

#### Enhancing Classes with a Class Decorator /952

#### What Happens When: Import Time Versus Runtime /955

##### Evaluation Time Experiments /956

#### Metaclasses 101 /961

##### How a Metaclass Customizes a Class /963

##### A Nice Metaclass Example /964

##### Metaclass Evaluation Time Experiment /967

#### A Metaclass Solution for Checked /972

#### Metaclasses in the Real World /977

##### Modern Features Simplify or Replace Metaclasses /977

##### Metaclasses Are Stable Language Features /978

##### A Class Can Only Have One Metaclass /978

##### Metaclasses Should Be Implementation Details /979

#### A Metaclass Hack with **prepare** /980

#### Wrapping Up /982

#### Chapter Summary /983

#### Further Reading /984

## Afterword /989

### Further Reading /990

## Index /993

## About the Author /1010

## Colophon /1010
