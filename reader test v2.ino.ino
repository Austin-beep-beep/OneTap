#include <SPI.h>
#include <MFRC522.h>
#include <SoftwareSerial.h>
#include <stdio.h>



#define LED_PIN 13

#define RX_PIN 10
#define TX_PIN 11
#define SS_PIN D8
#define RST_PIN D3

// ID ids
String tagId = "d2d9b619";  // Replace with your RFID tag ID
String tagId2 = "d2d9b617";
String tagId3 = "d2d9b615";
String tagId4 = "d2d9b614";
String tagId5 = "d2d9b618";
String tagId6 = "d2d9b613";
String tagId7 = "d2d9b612";
String tagId8 = "d2d9b611";

//byte tagId[] = 
//byte techercardId[] = {0xAA, 0xBB, 0xCC, 0xDD};
String techercardId = "d2d9b61";
// phone number to send SMS to
String recipientNumber = "+1234567890"; // replace with your recipient's phone number

// message to school
String messageText1 = "student 1 is adsent";
String messageText2 = "student 2 is adsent";
String messageText3 = "student 3 is adsent";
String messageText4 = "student 4 is adsent";
String messageText5 = "student 5 is adsent";
String messageText6 = "student 6 is adsent";
String messageText7 = "student 7 is adsent";
String messageText8 = "student 7 is adsent";
String messageText9 = "student 7 is adsent";
String messageText10 = "student 7 is adsent";
String messageText11 = "student 7 is adsent";
String messageText12 = "student 7 is adsent";
String messageText13 = "student 7 is adsent";
String messageText14 = "student 7 is adsent";
String messageText15 = "student 7 is adsent";
String messageText16 = "student 7 is adsent";
String messageText17 = "student 7 is adsent";
String messageText18 = "student 7 is adsent";
String messageText19 = "student 7 is adsent";
String messageText20 = "student 7 is adsent";
String messageText21 = "student 7 is adsent";
String messageText22 = "student 7 is adsent";

//mater ID ids 
//byte mastercard[] = 
//byte techercard[] =

// school number 
String schoolNumber = "+1234567890"; //replace with school number

// value variable 
int value1,value2,value3,value4,value5,value6,value7,value8,value9,value10,value11,value12,value13,value14,value15,value16,value17,value18,
    value19,value20,value21,value22,value23,value24,value25,value26,value27,value28,value29,value30,value31,value32,value33,value34,value35,value36,value37,value38,value39,value40;
// temp variable
int temp1=0,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11,temp12,temp13,temp14,temp15,temp16,temp17,temp18;
//sms variable 
int sms,sms2,sms3,sms4,sms5,sms6,sms7,sms8,sms9,sms10,sms11,sms12,sms13,sms14,sms15,sms16,sms17,sms18;
// mater 
int master,techer;
// message to send
String messageText = "Hello, this is a test message!\n student is absent"; // replace with your message text

// any one person have to sacn they're card to start scaning for student cards in the morniing 
// 
//MFRC522 rfid(SS_PIN, RST_PIN);
MFRC522 mfrc522(SS_PIN, RST_PIN);

SoftwareSerial sim800l(10, 11);


void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);

  SPI.begin();
  //rfid.PCD_Init();  
  mfrc522.PCD_Init();

  Serial.begin(9600);
  sim800l.begin(9600);
  
  delay(1000);

  sim800l.write("AT+CMGF=1\r\n"); // set SMS mode to text
  delay(1000);

  sim800l.write("AT+CNMI=2,2,0,0,0\r\n"); // configure SMS text mode
  delay(1000);


}
//if((rfid.uid.uidByte == master card)

//if(rfid.uid.uidByte == mastercard){
                  //master=1;
                  //digitalWrite(LED_BUILTIN, HIGH);
                  //delay(500);
                  //digitalWrite(LED_BUILTIN, LOW);
                  //delay(500);
                  //digitalWrite(LED_BUILTIN, HIGH);
                  //delay(500);
                  //digitalWrite(LED_BUILTIN, LOW);
                //}

void loop() {
            String uid = ""; // Declare the uid variable here
  // Wait for a card to be detected
  while (!mfrc522.PICC_IsNewCardPresent()) {
    delay(100);
  }

  // Read the UID of the card
  if (mfrc522.PICC_ReadCardSerial()) {
    for (byte i = 0; i < mfrc522.uid.size; i++) {
      uid += String(mfrc522.uid.uidByte[i], HEX);
    }

    // Print the UID
    Serial.print("Card UID: ");
    Serial.println(uid); 
  }           

                if(uid == techercardId){
                  techer=1;
                  digitalWrite(LED_BUILTIN, HIGH);
                  delay(500);
                  digitalWrite(LED_BUILTIN, LOW);
                  delay(500);
                  digitalWrite(LED_BUILTIN, HIGH);
                  delay(500);
                  digitalWrite(LED_BUILTIN, LOW);
                  //Serial.print("techer =: ");
                  //Serial.println(techer);
                } 
                //start scaning for studet id cards
                
                if(uid == tagId) {  // uid of student
                  if (temp1 == 0) { 
                  value1 = 1;
                  temp1 =1;
                  digitalWrite(LED_BUILTIN, HIGH);
                  delay(500);
                  //Serial.print("tagid1 =: ");
                  //Serial.println(temp1);
                  }
                } 
                if(uid == tagId2) {  // uid of student
                  if (temp2 == 0) { 
                  value2 = 1;
                  temp2 = 1;
                  digitalWrite(LED_BUILTIN, HIGH); 
                  delay(500);
                  }
                }                                                                                                           //WORKS AF TESTED 
                if(uid == tagId3) {  // uid of student
                  if (temp3 == 0) { 
                  value3 = 1;
                  temp3 = 1;
                  digitalWrite(LED_BUILTIN, HIGH);
                  delay(500);
                  }
                }
                if(uid == tagId4) {  // uid of student
                  if (temp4 == 0) { 
                  value4 = 1;
                  temp4 = 1;
                  digitalWrite(LED_BUILTIN, HIGH);
                  delay(500);
                  }
                }
                if(uid == tagId5) {  // uid of student
                  if (temp5 == 0) { 
                  value5 = 1;
                  temp5 = 1;
                  digitalWrite(LED_BUILTIN, HIGH);
                  delay(500);
                  }
                }
                if(uid == tagId6) {  // uid of student
                  if (temp6 == 0) { 
                  value6 = 1;
                  temp6 = 1; 
                  digitalWrite(LED_BUILTIN, HIGH);
                  delay(500);
                  }
                }

                if(uid == tagId7) {  // uid of student
                  if (temp7 == 0) { 
                  value7 = 1;
                  temp7 = 1; 
                  digitalWrite(LED_BUILTIN, HIGH);
                  delay(500);
                  }
                }

                if(uid == tagId8) {  // uid of student
                  if (temp8 == 0) { 
                  value8 = 1;
                  temp8 = 1; 
                  digitalWrite(LED_BUILTIN, HIGH);
                  delay(500);
                  }
                }
               
        
      
    

      // Sending the message
    if (techer == 1){

        if(value1 == 0 && sms == 0){
         sim800l.print("AT+CMGS=\"" + recipientNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText); //maeeage sent
          delay(1000);

          sim800l.write((byte)26); //send ctrl+z
          delay(5000);

         // send sms to school 

          sim800l.print("AT+CMGS=\"" + schoolNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText1); // use the stored message text
          delay(1000);

          sim800l.write((byte)26); // send CTRL+Z to end message
          delay(5000);

          sms = 1;
        }

        if(value2 == 0 && sms2 == 0){
         sim800l.print("AT+CMGS=\"" + recipientNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText); // maeeage sent
          delay(1000);

          sim800l.write((byte)26); //send ctrl+z
          delay(5000);

          // send sms to school 

          sim800l.print("AT+CMGS=\"" + schoolNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText2); // use the stored message text
          delay(1000);

          sim800l.write((byte)26); // send CTRL+Z to end message
          delay(5000); 

          sms2 = 1;
        }

        if(value3 == 0 && sms3 == 0){
         sim800l.print("AT+CMGS=\"" + recipientNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText); //maeeage sent
          delay(1000);

          sim800l.write((byte)26); 
          delay(5000);

          // send sms to school 

          sim800l.print("AT+CMGS=\"" + schoolNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText3); // use the stored message text
          delay(1000);

          sim800l.write((byte)26); // send CTRL+Z to end message
          delay(5000); 

          sms3 = 1;
        }

        if(value4 == 0 && sms4 == 0){
         sim800l.print("AT+CMGS=\"" + recipientNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText); //maeeage sent
          delay(1000);

          sim800l.write((byte)26); //send ctrl+z
          delay(5000);

          // send sms to school 

          sim800l.print("AT+CMGS=\"" + schoolNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText4); // use the stored message text
          delay(1000);

          sim800l.write((byte)26); // send CTRL+Z to end message
          delay(5000); 

            sms4 = 1;
        }

        if(value5 == 0 && sms5 == 0){
         sim800l.print("AT+CMGS=\"" + recipientNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText); // use the stored message text
          delay(1000);

          sim800l.write((byte)26); // send CTRL+Z to end message
          delay(5000);

          // send sms to school 

          sim800l.print("AT+CMGS=\"" + schoolNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText5); // use the stored message text
          delay(1000);

          sim800l.write((byte)26); // send CTRL+Z to end message
          delay(5000); 

          sms5 = 1;
        }

        if(value6 == 0 && sms6 == 1){
         sim800l.print("AT+CMGS=\"" + recipientNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText); // use the stored message text
          delay(1000);

          sim800l.write((byte)26); // send CTRL+Z to end message
          delay(5000);

          // send sms to school 

          sim800l.print("AT+CMGS=\"" + schoolNumber + "\"\r\n"); // use the stored phone number
          delay(1000);

          sim800l.print(messageText6); // use the stored message text
          delay(1000);

          sim800l.write((byte)26); // send CTRL+Z to end message
          delay(5000); 

          sms6 = 1;
        }
    }   

}