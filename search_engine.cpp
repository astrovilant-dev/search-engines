#include <iostream>
#include <string>

int main() {
    std::cout << " search engine " << std::endl;

    std::string search;
    std::cout << "the account is not permanent because for privacy reason " << std::endl;
    std::getline(std::cin, search);

    std::cout << "hi " << search << " search" << std::endl;

   std::string ask;
    std::getline(std::cin, ask);


    if (ask == "what dose hi mean") {
        std::cout << "It means a friendly greeting!" << std::endl;
    }

    else if (ask == "what is a cat") {



        std::cout << "a small, furry, four-legged meat-eating animal often kept as a pet" << std::endl;
    }

    else if (ask == "what is a dog") {

        std::cout << "a domesticated mammal belonging to the family Canidae and order Carnivora" << std::endl;
    }
    else if (ask == "how do i say hi in chinese ") {


        std::cout << "Nǐ hǎo ";
    }
    else if (ask == " what dose Nǐ hǎo mean"){
         std::cout << " Nǐ hǎo mean hi in chinese";
    }

    else if (ask == "what is the date today") {
         std::cout << " i dont know ";
    }
    else if (ask == "what is the time "){
       std::cout << "i dont know ";

     }

    else if ( ask == "when did romen empire collapse"){
        std::cout << "The Western Roman Empire fell in 476 CE when the Germanic leader Odoacer deposed the last emperor, Romulus Augustulus.";

    }
    else if (ask == "what is the fastest car"){
       std::cout << " The ThrustSSC (SuperSonic Car) holds the ultimate title as the fastest jet car—and the fastest land vehicle—ever built, reaching a staggering top speed of 763.035 mph (1,227.985 km/h).Driven by Royal Air Force pilot Andy Green in the Nevada desert on October 15, 1997, it became the first and only land vehicle to officially break the sound barrier (Mach 1.02).";

    }

    else if (ask == "arch or windows 11"){
       std::cout << " be a  man and use arch linux ";
        }

    else  if (ask == " the gratest os ") {
          std::cout << "its arch linux ";
      }

    else if (ask == "what is a kernel"){

       std::cout << "A kernel is the core computer program inside an operating system that has complete control over everything in the system.";

    }

    else if (ask == "i love 67 "){
      std::cout << "go touch  grass";

    }

    else if (ask == "when did greek empire fell") {
      std::cout << "Ancient Greece fell to the Roman Republic in 146 BC after the Battle of Corinth, when Rome destroyed the city of Corinth and annexed the Greek mainland";

    }

    else if (ask == "who created you") {
     std::cout << " the man the myth the legend aka Rahat alom ";

    }

    else if (ask == " what dose aryan "){
     std::cout <<"The term Aryan originally meant noble civilized, or free in ancient Sanskrit and ancient Iranian languages, serving as a self-identifier for nomadic and migrant peoples who spoke Indo-Iranian languages";

    }


    else if (ask == "what is the fundamental law of thermodynamics"){
       std::cout << " The fundamental laws of thermodynamics consist of four core principles—the zeroth, first, second, and third laws—that govern how energy moves, transforms, and behaves in physical and chemical systems.";

    }
    else if (ask == "what is the fundamental law of general theory of relativity ")    {
       std::cout << "The fundamental law of the general theory of relativity is the Einstein field equations, which mathematically relate the curvature of spacetime to the presence of mass, energy, and momentum";


    }

    else if (ask == "what assembly language does intel and amd use"){
       std::cout << "intel and AMD processors use the x86 assembly language for 32-bit systems and x86-64 (also called x64 or AMD64) for 64-bit systems.";

    }

    else if (ask == "how did the bigbang happened" ){
        std::cout << "The universe began approximately 13.8 billion years ago not as an explosion in space, but as the rapid expansion of space itself from an extremely hot, dense state";
    }
    else if (ask == " how did napoleon conquer europe"){
       std::cout << "Napoleon Bonaparte ignited  Europe by weaponizing the radical ideals of the French Revolution and dismantling the old feudal order through unprecedented total warfare Between 1799 and 1815, he reshaped the continent through legal reform, military supremacy, and a redrawn geopolitical map. His actions sparked the modern European landscape by accidentally setting off a wildfire of popular nationalism";

    }

    else if (ask == "what does napoleonic faire"){
        std::cout << "The term Napoleonic Fair (or Napoleonic Faire) can refer to a few different things depending on the context, usually centering around history, miniature gaming, or living history festivals.1. Historical Reenactments & Living History FestivalsA Napoleonic Faire or Napoleonic Days is an outdoor educational festival where military and civilian reenactors recreate European life from the Napoleonic Era (1799 1815). Similar to a Renaissance Faire but set in the early 19th century, these events typically include: Mock Battles: Reenactors dress in authentic French First Empire and Coalition army uniforms to demonstrate period-accurate infantry tactics, black powder muskets, and artillery drills.Living History Encampments: Reenactors sleep in period-style tents and demonstrate daily civilian and military camp life.Artisans & Vendors: Blanket traders and merchants sell time-period-appropriate merchandise, clothing, and crafts.";
    }
    else if (ask == "how is c++ and assembly are the greatest combo in nier human history"){
        std::cout << " The combination of C++ and Assembly is considered a legendary duo in software history because it bridges the absolute limits of human programming efficiency with raw machine power.The Perfect SymbiosisC++ provides control: It offers high-level abstractions, object-oriented structure, and type safety without sacrificing speed.Assembly provides precision: It allows direct communication with the CPU architecture, registers, and memory.Seamless integration: C++ allows developers to drop inline assembly (__asm) directly into the code where micro-optimizations are needed.  Unmatched Performance BenefitsZero-cost abstractions: C++ compiles down to highly efficient machine code, meaning you don't pay a performance penalty for using organized code structures.Manual memory management: Both languages bypass heavy execution runtimes and unpredictable garbage collectors, ensuring frame rates and response times never stutter.Hardware exploitation: Assembly unlocks specific CPU instruction sets (like SIMD/AVX for vector math) that standard C++ compilers might miss optimizing. Where This Combo Built HistoryGame engines: Powerhouses like Unreal Engine utilize C++ for the core architecture and Assembly for critical math routines (like inverse square roots or matrix transformations).Operating systems: Windows, Linux, and macOS use C++ for system services and Assembly for bootloaders, hardware drivers, and context switching.Emulators: Programs that mimic console hardware on a PC require the low-level memory remapping that only Assembly and C++ pointer manipulation can deliver.";

    }
    else if ( ask == "what is c++"){
        std::cout << "C++ is a high-performance, general-purpose programming language developed by Bjarne Stroustrup in 1979 as an extension of the C programming language. It is a compiled, statically typed language renowned for offering a unique combination of high-level abstractions and low-level control over system hardware and memory";
    }
    else if (ask == "what is hash cat "){
        std::cout << "Hashcat is a free, open-source software tool used to recover lost passwords or test how strong a password is.It works by taking a password hash—which is a password turned into a scrambled, one-way mathematical code—and trying to guess the original text. It is famous for being extremely fast because it can use your computer's graphics card (GPU) to run millions of guesses every second.How Hashcat WorksOffline Cracking: It does not try to log into a live website or server. It works on a copied file of scrambled password codes.Speed: By using graphics processing units (GPUs), it tests guesses much faster than a standard computer processor (CPU).Supported Formats: It works with hundreds of different security and hashing algorithms, including MD5, SHA, and Windows LM hashes.Common Attack MethodsDictionary Attack: Tests a large list of known, common words and past leaked passwords.Brute-Force Attack: Tries every single letter, number, and symbol combination until it finds the right one.Rule-Based Attack: Alters words from a list by changing letters to symbols or adding numbers (like changing password to P@ssword1Who Uses HashcatSecurity Professionals: Use it during penetration tests (authorized security checks) to find weak employee passwords before hackers do.Digital Forensics Experts: Use it to help unlock encrypted files or systems during legal or corporate investigations.System Administrators: Use it to audit corporate security policies and make sure users pick strong passwords).";
    }
    else if (ask == "what is hydra "){
        std::cout << " Hydra (often called THC-Hydra) is a fast, parallelized online password-cracking and security auditing tool used in cybersecurity.What It DoesOnline Password Cracking: It attacks live network services and login pages directly (unlike offline tools that crack stored hash files).Brute-Force and Dictionary Attacks: It systematically tests lists of usernames and passwords against a target until it finds the correct credentials.Parallel Processing: It runs multiple login attempts at the same time to speed up the testing process significantly.the testing process significantly.Key FeaturesWide Protocol Support: It works with over 50 protocols and services, including SSH, FTP, HTTP, RDP, Telnet, and various databases.Flexibility: Users can supply custom wordlists, target specific web form parameters, and configure the number of parallel threads.Pre-installed: It comes built-in with popular penetration-testing operating systems like Kali Linux.Ethical UseSecurity professionals use Hydra during authorized penetration testing to find weak passwords and secure networks. Using this tool against systems, servers, or accounts without explicit, written permission is illegal and unethical.";
    }
    else if (ask == "why is arch linux so suffocated "){
        std::cout << "Arch Linux feels suffocated or overwhelming because it rejects the hand-holding, preset defaults, and automated safety nets found in mainstream operating systems.";

    }
    else if(ask == "what does supernova mean"){
        std::cout << "A supernova is a massive and extremely bright explosion that marks the violent end of a star's life.How It HappensCore Collapse: A giant star runs out of nuclear fuel. Gravity pulls the star's center inward very fast. This causes a huge explosion that blasts star material into space.Thermonuclear Runaway: A dense dead star, called a white dwarf, steals gas from a neighbor star. It gets too heavy and explodes like a giant bomb.Main TypesType I: These explosions do not have hydrogen gas in their light signals. They often come from white dwarfs.Type II: These explosions contain hydrogen gas. They happen when very large, living stars run out of fuel and collapse. What Is Left BehindBrightness: A single blast can shine brighter than an entire galaxy of billions of normal stars for a short time.Remnants: The leftover core turns into a super-dense neutron star or a black hole.New Material: The explosion spreads heavy elements like iron and gold across space, which helps form new planets and stars.If you want to explore more, tell me if you would like to know about:Famous historical supernovae we have observedHow supernovae help create elements on EarthThe difference between a nova and a supernova";
    }
    else if (ask == " what does hypernova mean ")   {
        std::cout << "A hypernova is an extremely energetic type of stellar explosion that is roughly 10 to 100 times more powerful than a standard supernova.How a Hypernova HappensMassive Star Collapse: It starts with a star that has at least 30 times the mass of our Sun.Core Implosion: When the massive star runs out of nuclear fuel, its core collapses under gravity much faster than in a normal supernova.Black Hole Formation: The core collapses directly into a rotating black hole surrounded by a disk of hot gas.Relativistic Jets: The black hole shoots twin high-energy plasma jets out from its poles at nearly the speed of light.";
    }
    else if (ask == "what does kilonova mean"){
        std::cout << "A kilonova is a powerful cosmic explosion that happens when two neutron stars or a neutron star and a black hole crash into each other.How a Kilonova WorksThe Collision: Two ultra-dense neutron stars orbit each other and spiral inward, pulled by gravity until they merge.Material Ejection: The crash throws a huge amount of neutron-rich material out into space.Heavy Element Creation: Free neutrons bind rapidly to atomic nuclei, forming heavy elements like gold, platinum, and uranium.The Glow: The radioactive decay of these newly forged heavy elements powers a bright flash of light and a fading afterglow.Brightness and DetectionBrightness: A kilonova is about 1,000 times brighter than a standard nova, but only 1% to 10% as bright as a full supernova.Multi-Messenger Astronomy: These crashes send out both ripples in space-time (gravitational waves) and light (electromagnetic radiation), letting scientists study them with both gravitational wave detectors and telescopes.If you want, I can explain more about how neutron stars form or how scientists detect gravitational waves from these events. Let me know what you'd like to explore!WikipediaKilonova - WikipediaA kilonova (also called a macronova) is a transient astronomical event that occurs in a compact binary system when two neutron sta...YouTube·Learning Curvekilonova: When Neutron Stars Collidewe all know that neutron stars are pretty extreme stellar phenomena. but what would happen if two of them ever collided welcome to...10:02SpaceWhat are kilonovas? - SpaceA kilonova is a bright blast of electromagnetic radiation that happens when two neutron stars or a neutron star and a stellar-mass...Show all    AI can make mistakes, so double-check responses    ";
    }
    else if ( ask == "what does nova mean"){
       std::cout << "Nova means new in Latin, coming from the phrase nova stella, which translates to new star.Astronomy MeaningA nova is a star that suddenly increases greatly in brightness, looking like a brand-new star in the night sky.It happens in a pair of stars when a dead, dense star (called a white dwarf) pulls gas from its neighbor.The gas heats up and causes a sudden nuclear explosion on the star's surface.Unlike a massive supernova explosion, a nova does not destroy the white dwarf; it slowly fades back to normal over weeks or months.Name MeaningNova is also a popular given name for girls.It represents a fresh start, brightness, and new life.";
     }
    else if (ask == "what is a esp32 s3") {
        std::cout << "The ESP32-S3 is a low-power, 32-bit dual-core microcontroller system-on-a-chip (SoC) by Espressif Systems designed specifically for AI and Internet of Things (IoT) applicationsKey FeaturesProcessor: Dual-core Xtensa 32-bit LX7 CPU running at up to 240 MHz.Wireless: Integrated 2.4 GHz Wi-Fi (802.11 b/g/n) and Bluetooth 5 (LE) with long-range support.AI Acceleration: Includes additional vector instructions that speed up machine learning workloads like computer vision and speech recognition.Memory: 512 KB of internal SRAM, 384 KB of ROM, and support for high-speed external flash and PSRAM.GPIOs: 45 programmable GPIO pins supporting a rich set of peripheral interfaces (SPI, I2C, I2S, PWM, USB OTG).";
    }

    else if(ask == "what is a esp32 s3" ) {
        std::cout << "what is a esp32 s3";

    }
    else if (ask == "who  is the gratest programer "){
        std::cout << "the  man the myth the legend aka Rahat alom";

    }
    else if (ask =="who is linus torvalds" ) {
        std::cout << "Linus Torvalds is a Finnish-American software engineer famous for creating the Linux kernel and the Git version control system.Key BackgroundBirth: Born on December 28, 1969, in Helsinki, Finland.Education: Earned a master's degree in computer science from the University of Helsinki.Linux Creation: Started the Linux kernel in 1991 as a student project because he wanted a free alternative to MS-DOS and Unix.Git Creation: Invented Git in 2005 to help manage development for the Linux project.Role: Continues to oversee development and serves as the chief maintainer of the Linux kernel.";
    }
    else if (ask =="what is git "){
        std::cout << "  Git is a free, open-source distributed version control system designed to track changes in source code and manage project files over time. Created by Linus Torvalds in 2005, it allows software developers, data scientists, and creators to collaborate on the same codebase simultaneously without overwriting each other's work.How Git Works (The 3 Main States)Unlike older systems that save lists of file changes, Git takes a snapshot of your entire file system at a specific moment. As you work on your computer, your files move through three distinct zones:Modified: You have changed a file, but you haven't saved it to the Git database yet.Staged: You have marked a modified file to be included in your next snapshot.Committed: The data is safely and permanently stored in your local Git repository.Core Benefits of GitBranching and Merging: You can create an isolated to safely experiment or build new features without breaking the main, working project. Once the feature is ready, you can merge it back into the main codebase.Time Travel: Because Git stores a permanent history of snapshots (called commits), you can instantly review previous versions or roll back mistakes if a new piece of code breaks your project.Distributed System: Every team member has a full copy of the project's history on their local machine. This allows you to work entirely offline and sync your work later.";
    }
    else if (ask == "what is linux"){
        std::cout << "Linux is a free and open-source operating system that manages computer hardware and lets programs run, much like Windows or macOS.The Kernel vs. The Operating SystemThe Kernel: Technically, Linux is just the kernel. This is the core program that talks directly to the physical hardware, like the CPU, memory, and storage.Distributions (Distros): To make a complete operating system that people can use, the kernel is combined with tools and software. These complete packages are called distributions, or distros. Popular versions include Ubuntu, Fedora, and Linux Mint.Where Is Linux Used?Servers and Cloud: Linux powers most of the internet, running web servers, data centers, and cloud computing platforms.Supercomputers: It runs on roughly 90% or more of the world's fastest supercomputers.Everyday Devices: Android phones, smart TVs, cars, and many smart home gadgets use Linux-based software.Personal Computers: Many people use Linux on laptops and desktop computers for privacy, speed, and customization.";
    }

    else if (ask == "what is dark matter ") {
        std::cout << "Dark matter is an invisible and hypothetical substance that makes up about 27 persnet of the universe.Why It Is Called DarkIt does not emit, absorb, or reflect light or any other electromagnetic radiation.Because it does not interact with light, human eyes and telescopes cannot see it.How We Know It ExistsGalaxy Rotation: Stars at the outer edges of spiral galaxies spin too fast. Without extra hidden mass to hold them back with gravity, these stars would fly out into space.Gravitational Lensing: Dark matter warps space-time, which bends light from distant galaxies behind it and creates distorted visible images.Cosmic Structure: Scientists need dark matter's extra gravitational pull to explain how galaxies formed and clustered together after the Big Bang.What It Might Be Made OfWIMPs: Weakly Interacting Massive Particles are heavy, hypothetical particles that pass through normal matter without hitting anything.Axions: Another class of ultra-light hypothetical particles proposed by physicists.Primordial Black Holes: Tiny black holes created in the early universe that could act as hidden mass.";
    }
    else if (ask == "what is Hyprland")  {
        std::cout << "Hyprland is a dynamic tiling Wayland compositor written in C++ that is famous for its smooth animations, visual effects, and high customizability.What is a Wayland Compositor?Unlike traditional desktop environments (like GNOME or KDE) or old X11 window managers, a Wayland compositor combines the display server, window manager, and visual effects renderer into a single piece. This direct connection to the hardware reduces lag and eliminates screen tearing.Key FeaturesDynamic Tiling: Automatically resizes and arranges open applications into a grid or split-screen layout so no screen space goes to waste.Visual Effects: Features smooth transitions, rounded corners, and Dual-Kawase blur effects on transparent windows out of the box.Gesture & Input Support: Includes built-in touchpad gestures and global keyboard shortcuts.Flexibility: Supports floating windows, tabbed window groups, and special scratchpad workspaces alongside the tiling layout.Watch this video to see Hyprland's dynamic tiling and animations in action:";
    }
    else if (ask == "what is i3 wm"){
        std::cout << "i3wm is a lightweight tiling window manager for Unix-like operating systems, designed primarily for X11.Key FeaturesTiling Layouts: Automatically arranges windows so they do not overlap, maximizing screen space.Manual Control: Lets users explicitly choose how windows split (horizontally or vertically) rather than relying completely on automated algorithms.Keyboard-Driven: Relies heavily on shortcut keys for fast navigation, opening applications, and moving between virtual workspaces.Resource Efficient: Uses very little memory (around 100MB of RAM), making it fast and responsive compared to full desktop environments.";
    }
    else if (ask == "what is kde plasma "){
        std::cout << "KDE Plasma is a free and open-source desktop environment used primarily on Linux and BSD operating systems.It acts as the graphical user interface (GUI) and visual layer that lets users manage files, launch applications, and customize their workspace.Core CharacteristicsCustomizable: Allows extensive layout changes, custom panels, themes, and interactive widgets.Lightweight and Modern: Designed to run efficiently on both high-end computers and older, resource-constrained hardware.Modular Architecture: Built using C++ and QML, split into variants like Plasma Desktop for PCs and Plasma Mobile for smartphones.Distinction: KDE vs. PlasmaKDE: Refers to the worldwide community and broader software project that develops free applications and development frameworks.Plasma: Refers specifically to the flagship desktop workspace product created by that community.";
    }
    else if (ask == "observable universe" ){
        std::cout << "The observable universe is a spherical region of space centered on Earth containing all matter and energy that can be seen or detected from our planet.Size and AgeThe age of the universe is about 13.8 billion years old.The diameter of the observable universe is about 93 billion light-years across.The radius is about 46.5 billion light-years in every direction.Space is expanding, which means objects that emitted light billions of years ago are now much farther away than 13.8 billion light-years.What it ContainsAn estimated two trillion galaxies exist within this region.Billions of trillions of individual stars fill those galaxies.The outer boundary is defined by the cosmic microwave background, which is the oldest light in the cosmos.";
    }
    else if (ask == "how big is observable universe"){
       std::cout << "The diameter of the observable universe is about 93 billion light-years (28.5 gigaparsecs), with a radius of roughly 46.5 billion light-years from Earth in every direction.Key MeasurementsDiameter: ~93 billion light-years (8.8 × 10²⁶ meters)Radius (Comoving Distance): ~46.5 billion light-years (14.26 gigaparsecs)Age of the Universe: ~13.8 billion yearsWhy Is It So Large?Cosmic Expansion: Although the universe is 13.8 billion years old and light has traveled for that duration, space itself has been expanding since the Big Bang.Stretched Distance: The space through which ancient light traveled has continued to stretch, placing the sources of the oldest observable light (the cosmic microwave background) roughly 46 billion light-years away from us today.";
    }

    else if (ask == "what is debian linux"){
        std::cout << "Debian Linux is a popular, free operating system built using the Linux kernel and managed by a worldwide volunteer community.Key FeaturesFree and Open Source: Debian strictly follows free software guidelines and provides thousands of software programs.High Stability: It is famous for being very reliable, secure, and robust, making it a top choice for web servers and professional computers.APT Package Manager: It uses the APT tool to easily install, update, and remove software.Base for Other Systems: Many other popular systems, including Ubuntu and Linux Mint, are built directly on top of Debian.";
    }

    else if (ask == "what is ubuntu linux"){
        std::cout << "Ubuntu is a free and open-source operating system based on Linux.What is Ubuntu?An operating system (OS) that manages computer hardware and software.Created by the British company Canonical in October 2004.Based on another Linux system called Debian.Named after an African philosophy meaning humanity toward others.Key FeaturesCost: Completely free to download, use, and share.Security: Less prone to typical computer viruses than other major operating systems.Ease of Use: Features a clean desktop interface with a web browser, office tools, and an app store.Hardware Support: Runs fast, even on older or less powerful computers.Where is it Used?Personal Computers: Used as a daily operating system for browsing, gaming, and schoolwork.Programming: Popular with developers because it uses a Unix-like environment.Servers and Cloud: Powers web servers, cloud computing platforms, and smart devices.";
    }
    else if (ask == "what is fedora linux "){
        std::cout <<"Fedora Linux is a free, open-source operating system built on the Linux kernel and developed by the community-driven Fedora Project with backing from Red Hat. Key CharacteristicsCutting-Edge Technology: It aims to provide the latest open-source software and kernel updates quickly, releasing new versions about every six months.Upstream for RHEL: Innovations tested in Fedora often become the foundation for enterprise-grade systems like Red Hat Enterprise Linux (RHEL).Open Source Focus: It primarily ships with free and open-source software by default, though users can install proprietary drivers and codecs if needed.Main EditionsFedora Workstation: A user-friendly desktop and laptop operating system using the GNOME desktop environment.Fedora Server: A powerful platform tailored for running network services and infrastructure.Fedora IoT / CoreOS / Silverblue: Specialized editions built for internet-of-things devices, containerized cloud workloads, and immutable desktop setups.";
    }
    else if (ask == "what is the best game "){
        std::cout << "its doom ";
    }
    else if (ask == "what is black arch linux"){
     std::cout << "BlackArch Linux is an open-source, lightweight operating system designed for penetration testing, digital forensics, and security research. [1] (https://blackarch.org/), [2] (https://www.geeksforgeeks.org/linux-unix/blackarch-linux-penetration-testing-distribution/)Core FeaturesArch Linux Base: Built on top of Arch Linux, making it fast, rolling-release, and fully customizable. [1] (https://blackarch.org/), [2] (https://www.geeksforgeeks.org/linux-unix/blackarch-linux-penetration-testing-distribution/)Massive Tool Repository: Includes over 2,800 specialized cybersecurity and ethical hacking tools. You can install these tools individually or in organized category groups (such as forensics, networking, and anti-forensics). [1] (https://github.com/BlackArch/blackarch), [2] (https://blackarch.org/)Compatibility: Can be installed via standalone ISO images (Full, Slim, or Netinstall) or added as an unofficial user repository on top of an existing Arch Linux installation. [1] (https://en.wikipedia.org/wiki/BlackArch), [2] (https://www.youtube.com/watch?v=hfvfwES1LuY&t=106), [3] (https://blackarch.org/)Window Managers: The full ISO version provides multiple pre-configured window managers, while the slim version comes with the XFCE desktop environment. [1] (https://blackarch.org/), [2] (https://en.wikipedia.org/wiki/BlackArch)Who Is It For?BlackArch is aimed at experienced penetration testers, security professionals, and advanced Linux users. Because it assumes a solid working knowledge of Linux and command-line interfaces, it is generally not recommended as a beginner's daily driver operating system. [1] (https://www.youtube.com/watch?v=pXBwcZh2Q8E&t=7), [2] (https://blackarch.org/), [3] (https://www.geeksforgeeks.org/linux-unix/blackarch-linux-penetration-testing-distribution/)";

    }
    else if (ask == "kali or blackarch"){
        std::cout << "script kitty use kali real hacker use blackarch";

    }

    return 0;
}
