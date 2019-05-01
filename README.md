# How far Arduino? (ultrasonic senser)
  <p>&nbsp;&nbsp;&nbsp;&nbsp;"ultrasonic" หรือ "อัลตร้าโซนิค" หมายถึง คลื่นเสียงที่มีความถี่สูงเกินกว่าที่หูมนุษย์จะได้ยิน ซึ่งโดยทั่วไปแล้วหูมนุษย์จะได้ยินเสียงแค่ประมาณ 15KHz (กิโลเฮิร์ต) ดังนั้นโดยปกติแล้วคำว่าอัลต้าโซนิคจึงหมายถึงคลื่นเสียงที่มีความถี่สูงกว่า 20KHz ขึ้นไป
    สำหรับการทำงานของเซ็นเซอร์อัลตร้าโซนิค จะส่งผ่านคลื่นเสียงที่มีความสม่ำเสมอไปสะท้อนกับวัตถุ โดยเซ็นเซอร์และระบบการทำงานจะรับการสะท้อนของคลื่นเสียงที่สะท้อนกลับมา โดยตรวจจับเวลาตั้งแต่ปล่อยคลื่นอัลตราโซนิกออกไปจนถึงได้รับคลื่นสะท้อนกลับมาจะทำให้ทราบระยะทางได้ ถ้าอยากทราบระยะทาง ก็จะเอาเวลาที่ใช้ในการส่งสัญญานออกไปมาคำนวนเพื่อหาระยะทางออกมา</p>
    
    
# About Project
<center><img src="poster.jpg" width="50%"></center>

  <p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;กลุ่มของพวกเราได้จัดทำโปรเจค ultrasonic distance senser เพื่อประกอบการเรียนในวิชา computer programming (06016315) และเพื่อใช้เป็นเครื่องมือวัดระยะทางโดยสังเขปแสดงผลออกมาทางจอ lcd ดิจิตอล เพื่อที่จะได้เห็นระยะทางที่ชัดเจน โดยเซนเซอร์อัลตร้าโซนิค รุ่น HC-SR04 ตัวนี้สามารถนำไปประยุกต์ใช้งานได้หลากลาย ยกตัวอย่างเช่น อุปกณ์วัดระดับน้ำสำหรับอ่างเก็บน้ำหรือฝาย เพื่อแจ้งเตือนการเกิดอุทกภัย หรือ เครื่องมืออื่นๆอีกมากมาย อยู่ที่การนำมาประยุกต์ใช้ หวังว่าจะมีผลประโยชต่อผู้ที่สนใจศึกษาต่อไป</p>
  
# My video
<p><img src="https://static-s.aa-cdn.net/img/gp/20600000025034/Ned_Tu_ge6GgJZ_lIO_5mieIEmjDpq9kfgD05wapmvzcInvT4qQMxhxq_hEazf8ZsqA=w300" width="2%">&nbsp;&nbsp;https://www.youtube.com/watch?v=WFfY_Hr_GVM&feature=youtu.be</p>

# source code
<p><img src="https://www.img.in.th/images/0097b3e8757ae4020d5adb1f648f8f76.png" width="40%"></p>

# Product
<img src="https://surtrtech.files.wordpress.com/2018/01/09782-3.png" width="40%" >
<img src="https://www.img.in.th/images/9399ea885cf46c06ff929354db388ca8.jpg" width="40%" >
<img src="https://www.img.in.th/images/27934bfcffc432241e0fa53d04c07076.jpg" width="40%" >
<img src="https://www.img.in.th/images/6258eef0edf374f3aabc6d14bcbdcfda.jpg" width="40%" >
<img src="https://www.img.in.th/images/62ce876b20d65b6620f38103f38164fb.jpg" width="40%" >

# Reference
<p>https://www.arduino.cc/en/Tutorial/LiquidCrystalDisplay</p>
<p>https://create.arduino.cc/projecthub/Salmanfarisvp/ultrasonic-range-detector-with-arduino-46c96c</p>
<p>https://randomnerdtutorials.com/complete-guide-for-ultrasonic-sensor-hc-sr04/</p>
                                                                        
# Equipment used

<table align="center" width="80%"><tr>
					<td width="30%">
									<p>
										- Arduino Uno R3 board
									</p></td>
					<td width="50%">
									<img src="https://www.img.live/images/2019/04/29/board.jpg" width="20%" align="right">
					</td>
				</tr>
				<tr><td width="30%">
          <p>
										- Ultrasonic Sensor HC-SR04
									</p>
				</td>
				<td width="70%">
							<br><img src="https://www.img.in.th/images/57478795e1e0d3f9c8530c5b91a75090.jpg" width="20%" align="right">
				</td></tr>
								<tr><td width="30%">
									<p>
										- Jump Wire
									</p>
				</td>
				<td width="70%">
							<br><img src="https://www.img.in.th/images/23f3b9ddb9a49efa4cb44d76c8bb23a2.jpg" width="20%" align="right">
				</td></tr>
								<tr><td width="30%">
									<p>
										- Breadboard
									</p>
				</td>
				<td width="70%">
							<br><img src="https://cdn.solarbotics.com/products/photos/c555f8d67727caf6a0833c8a1817526a/21025-dscn3816.JPG?w=800" width="20%" align="right"> 
				</td></tr>
	<tr><td width="30%">
									<p>
										- LCD with I2C
									</p>
				</td>
				<td width="70%">
							<br><img src="https://hobbycomponents.com/1487-large_default/i2c-serial-lcd-1602-module.jpg" width="20%" align="right"> 
				</td></tr>
	<tr><td width="30%">
									<p>
										- LED Diode
									</p>
				</td>
				<td width="70%">
							<br><img src="https://errebishop.com/4558-large_default/led-diode-red-dim-5.jpg" width="20%" align="right"> 
				</td></tr>
	<tr><td width="30%">
									<p>
										- 10K Ohm resistor
									</p>
				</td>
				<td width="70%">
							<br><img src="https://cdn.sparkfun.com//assets/parts/1/2/2/1/6/14491-03.jpg" width="20%" align="right"> 
				</td></tr>
			</table>
			
# Arduino IDE

<p>&nbsp;&nbsp;&nbsp;&nbsp;Arduino IDE คือ เครื่องมือการเขียนโปรแกรมที่มีใช้งานได้กับ Arduino ได้ทุกรุ่น โดยภายในจะมีเครื่องมือที่จะเป็นสำหรับติดต่อ Arduinoเช่น การค้นห Arduino ที่ติดต่อกับเครื่องคอมพิวเตอร์ การเลือกรุ่น Arduino ที่ต่ออยู่เพื่อนตรวจสอบว่าขนาดของโปรแกรมที่เขียน หรือไรบรารี่ต่างๆซับพอร์ตกับ Arduino รุ่นนั้นๆไหม อีกทั้งยังมีโปรแกรมติดต่อผ่านซีเรียลโดยตรงสำหรับคอมพิวเตอร์โดยตรง<br><br>
<img src="http://3.bp.blogspot.com/-E9EerxD_6xo/VzC0xzRVUqI/AAAAAAAALkE/sZZ26_gFShsd0CYHmTPmNPV65Rda_Zw5wCK4B/s1600/arduino_ide_macro_pir.png" width="50%">
</p>

# Fritzing
<p>&nbsp;&nbsp;&nbsp;&nbsp;Fritzing เป็นโปรแกรม open-source สำหรับออกแบบวงจรไฟฟ้าโปรแกรมหนึ่ง ที่มีจุดเด่นในเรื่องของฟีเจอร์อันหลากหลายที่ใช้งานง่าย เช่น ภาพกราฟฟิคของอุปกรณ์อิเล็กทรอนิกส์ต่างๆที่สวยงาม และเสมือนจริง สามารถออกแบบหรือแก้ไข พาร์ทชิ้นส่วนของอุปกรณ์อิเล็กทรอนิกส์ได้เอง หรือเป็น IDE ขนาดย่อมๆ สามารถเขียนโค้ดและอัพโหลดลงบนบอร์ด Arduino ได้เหมือนกับโปรแกรม Arduino IDE เป็นต้น และด้วยฟีเจอร์อันหลากหลายแต่ง่ายต่อการใช้งานนี้เอง ทำให้โปรแกรม Fritzing เหมาะกับการเริ่มต้นการต่อวงจรไฟฟ้าควบคู่ไปกับการเขียนโปรแกรมควบคุมไมโครคอนโทรลเลอร์<br>
	<br><img src="https://upload.wikimedia.org/wikipedia/commons/4/4d/Fritzing-screenshot.png" width="50%">
</p>

# Members

<table width="80%" border="0">
  <tr>
    <td align="center"><img src="https://www.img.in.th/images/c8c053391c64c6028acc3537957a0c49.jpg" width="20%"><br><br> 
	    <a href="https://facebook.com/IngIngNatchaya" target="_blank"><img src="https://www.img.live/images/2019/04/29/fb.png" width="3%" target="_blank"></a>&nbsp;&nbsp;
											<a href="https://github.com/61070053" target="_blank"><img src="https://www.img.live/images/2019/04/29/github.png" width="3%" ></a>&nbsp;&nbsp;
											<a href="https://www.instagram.com/ing______natchaya/" target="_blank"><img src="https://www.img.live/images/2019/04/29/ig.png" width="3%"></a>
	    </p>
    <p>
										นางสาวณัฐชยา ล้อรัตนไชยยงค์
									</p>
									<p>
									         รหัสนักศึกษา 61070053
									</p></td>
  </tr>
  <tr>
    <td align="center"><p><img src="https://www.img.in.th/images/daad383f44286f3870788354b68228c6.jpg" width="20%"><br><br>
	    <a href="https://facebook.com/gamenithan" target="_blank"><img src="https://www.img.live/images/2019/04/29/fb.png" width="3%" target="_blank"></a>&nbsp;&nbsp;
											<a href="https://github.com/gamenithan" target="_blank"><img src="https://www.img.live/images/2019/04/29/github.png" width="3%" ></a>&nbsp;&nbsp;
											<a href="https://www.instagram.com/game_nithan/" target="_blank"><img src="https://www.img.live/images/2019/04/29/ig.png" width="3%"></a>
      </p>
      <p>นายนิธาน ทรัพย์แก้วยอด
  </p>
      </p>
      <p>
	           รหัสนักศึกษา 61070105
	  </p></td>
  </tr>
  <tr>
    <td align="center"><p><img src="https://www.img.in.th/images/63b95f4927caaa572e790fe642435b80.jpg" width="20%"><br><br>
	    <a href="https://facebook.com/mangpor.9ii" target="_blank"><img src="https://www.img.live/images/2019/04/29/fb.png" width="3%" target="_blank"></a>&nbsp;&nbsp;
											<a href="https://github.com/everestes" target="_blank"><img src="https://www.img.live/images/2019/04/29/github.png" width="3%" ></a>&nbsp;&nbsp;
											<a href="https://www.instagram.com/__mangporr/" target="_blank"><img src="https://www.img.live/images/2019/04/29/ig.png" width="3%"></a>
      </p>
      <p>นางสาวบุญญิสา เลียวสิริไพโรจน์
  </p>
      </p>
      <p>
	           รหัสนักศึกษา 61070108
</p></td>
  </tr>
  <tr>
    <td align="center"><img src="https://www.img.in.th/images/61891e510c71f7aad9edbfce75cc6435.jpg" width="20%"><br><br>
	    <a href="https://facebook.com/BalloonQuestionMark" target="_blank"><img src="https://www.img.live/images/2019/04/29/fb.png" width="3%"></a>&nbsp;&nbsp;
											<a href="https://github.com/61070140" target="_blank"><img src="https://www.img.live/images/2019/04/29/github.png" width="3%"></a> &nbsp;&nbsp;
										<a href="https://www.instagram.com/beaslzlo_____/" target="_blank"><img src="https://www.img.live/images/2019/04/29/ig.png" width="3%"></a>
	    </p>
      <p>
      นายพันธวีร์ คงสวัสดิ์
  </p>
      <p>
	           รหัสนักศึกษา 61070140
</p></td>
<p><center>นักศึกษาชั้นปีที่ 1 คณะเทคโนโลยีสารสนเทศ สถาบันเทคโนโลยีพระจอมเกล้าเจ้าคุณทหารลาดกระบัง</center></p>
  </tr>
  
</table>
