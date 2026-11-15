	THUMB_FUNC_START sub_0809407C
sub_0809407C: @ 0x0809407C
	push {r4,r5,lr}
	ldr r4, _08094194  @ =gRam
	ldr r1, _08094198  @ =0x0000172E
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _0809419C  @ =0x000016E4
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _080941A0  @ =0x0000172B
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #48
	and r0, r0, r1
	cmp r0, #0
	bne _080940AA
	bl sub_08093EB0
	ldr r1, _080941A4  @ =0x0000172D
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08094118
_080940AA:
	bl sub_080943CC
	lsl r0, r0, #24
	cmp r0, #0
	beq _08094118
	ldr r2, _080941A8  @ =0x00000B14
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #3
	bls _08094110
	ldr r3, _080941AC  @ =0x0000179F
	add r1, r4, r3
	mov r0, #2
	strb r0, [r1]
	bl sub_0809EDA4
	ldr r0, _080941B0  @ =0x0000097C
	add r2, r4, r0
	mov r1, #0
	ldrsb r1, [r2, r1]
	mov r3, #189
	lsl r3, r3, #5
	add r0, r4, r3
	strh r1, [r0]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	beq _08094110
	ldr r0, _080941B4  @ =0x000016D6
	add r2, r4, r0
	ldrb r1, [r2]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r4, r3
	strb r1, [r0]
	ldr r3, _080941B8  @ =0x0000179A
	add r0, r4, r3
	ldrb r0, [r0]
	add r1, r1, r0
	strb r1, [r2]
	ldr r0, _080941BC  @ =0x000016D7
	add r2, r4, r0
	ldrb r1, [r2]
	ldr r3, _080941C0  @ =0x00000961
	add r0, r4, r3
	strb r1, [r0]
	ldr r3, _080941C4  @ =0x0000179C
	add r0, r4, r3
	ldrb r0, [r0]
	add r1, r1, r0
	strb r1, [r2]
_08094110:
	bl sub_0809E650
	bl sub_08094460
_08094118:
	ldr r4, _08094194  @ =gRam
	ldr r1, _080941A8  @ =0x00000B14
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #2
	beq _080941D8
	cmp r0, #3
	bne _0809412A
	b _08094270
_0809412A:
	cmp r0, #4
	bne _08094130
	b _0809423C
_08094130:
	ldr r2, _080941B4  @ =0x000016D6
	add r0, r4, r2
	ldr r3, _080941BC  @ =0x000016D7
	add r1, r4, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _0809423C
	ldr r0, _080941C8  @ =0x00001718
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #19
	bne _0809414E
	b _0809427C
_0809414E:
	cmp r0, #8
	bne _08094154
	b _0809427C
_08094154:
	cmp r0, #9
	bne _0809415A
	b _0809427C
_0809415A:
	cmp r0, #10
	bne _08094160
	b _0809427C
_08094160:
	cmp r0, #3
	bne _08094166
	b _0809427C
_08094166:
	bl sub_0809EDA4
	ldr r1, _080941CC  @ =0x00001714
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0809417A
	b _0809427C
_0809417A:
	mov r0, #1
	strb r0, [r5]
	ldr r2, _080941D0  @ =0x00001804
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809427C
	ldr r3, _080941D4  @ =0x00001719
	add r1, r4, r3
	mov r0, #4
	strb r0, [r1]
	b _0809427C
	.byte 0x00
	.byte 0x00
_08094194:
	.4byte gRam
_08094198:
	.4byte 0x0000172E
_0809419C:
	.4byte 0x000016E4
_080941A0:
	.4byte 0x0000172B
_080941A4:
	.4byte 0x0000172D
_080941A8:
	.4byte 0x00000B14
_080941AC:
	.4byte 0x0000179F
_080941B0:
	.4byte 0x0000097C
_080941B4:
	.4byte 0x000016D6
_080941B8:
	.4byte 0x0000179A
_080941BC:
	.4byte 0x000016D7
_080941C0:
	.4byte 0x00000961
_080941C4:
	.4byte 0x0000179C
_080941C8:
	.4byte 0x00001718
_080941CC:
	.4byte 0x00001714
_080941D0:
	.4byte 0x00001804
_080941D4:
	.4byte 0x00001719
_080941D8:
	bl sub_0809EDA4
	ldr r1, _0809424C  @ =0x0000097C
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r2, #189
	lsl r2, r2, #5
	add r1, r4, r2
	ldrh r1, [r1]
	orr r0, r0, r1
	cmp r0, #15
	bne _0809423C
	ldr r3, _08094250  @ =0x000017AA
	add r1, r4, r3
	ldrb r0, [r1]
	cmp r0, #0
	bne _08094202
	mov r0, #58
	strb r0, [r1]
_08094202:
	ldr r1, _08094254  @ =0x00001727
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809423C
	ldr r2, _08094258  @ =0x0000179A
	add r0, r4, r2
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r0, #0
	beq _08094224
	ldr r0, _0809425C  @ =0x000016D6
	add r1, r4, r0
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
_08094224:
	ldr r1, _08094260  @ =0x0000179C
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #0
	beq _0809423C
	ldr r3, _08094264  @ =0x000016D7
	add r1, r4, r3
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
_0809423C:
	ldr r0, _08094268  @ =gRam
	ldr r1, _0809426C  @ =0x0000179F
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	bl sub_0809E650
	b _0809427C
_0809424C:
	.4byte 0x0000097C
_08094250:
	.4byte 0x000017AA
_08094254:
	.4byte 0x00001727
_08094258:
	.4byte 0x0000179A
_0809425C:
	.4byte 0x000016D6
_08094260:
	.4byte 0x0000179C
_08094264:
	.4byte 0x000016D7
_08094268:
	.4byte gRam
_0809426C:
	.4byte 0x0000179F
_08094270:
	ldr r2, _08094394  @ =0x0000179F
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	bl sub_0809E684
_0809427C:
	mov r4, #0
	mov r0, #0
	bl sub_0809EEB4
	ldr r2, _08094398  @ =gRam
	ldr r3, _0809439C  @ =0x0000172A
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08094296
	ldr r1, _080943A0  @ =0x0000172B
	add r0, r2, r1
	strb r4, [r0]
_08094296:
	ldr r3, _080943A4  @ =0x00001718
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #11
	beq _080942D4
	mov r4, #8
	mov r1, #182
	lsl r1, r1, #5
	add r0, r2, r1
	sub r3, r3, #44
	add r1, r2, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	sub r3, r3, #22
	add r1, r2, r3
	strb r0, [r1]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080942D4
	cmp r0, #0
	blt _080942C6
	mov r4, #4
_080942C6:
	ldr r0, _080943A8  @ =0x00001727
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #3
	and r0, r0, r1
	orr r4, r4, r0
	strb r4, [r2]
_080942D4:
	mov r4, #2
	ldr r2, _08094398  @ =gRam
	ldr r1, _080943AC  @ =0x000016C4
	add r0, r2, r1
	ldr r3, _080943B0  @ =0x000016F0
	add r1, r2, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	sub r3, r3, #25
	add r1, r2, r3
	strb r0, [r1]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r3, r2, #0
	cmp r0, #0
	beq _0809430A
	cmp r0, #0
	blt _080942FC
	mov r4, #1
_080942FC:
	ldr r0, _080943A8  @ =0x00001727
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #12
	and r0, r0, r1
	orr r4, r4, r0
	strb r4, [r2]
_0809430A:
	ldr r1, _080943B4  @ =0x000009B2
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809438C
	ldr r2, _080943B8  @ =0x00000B14
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r0, #4
	bne _0809438C
	ldr r1, _080943A4  @ =0x00001718
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #4
	bne _0809438C
	mov r4, #247
	ldr r2, _080943BC  @ =0x0000179A
	add r0, r3, r2
	ldrh r1, [r0]
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #0
	beq _0809435C
	lsl r0, r1, #24
	cmp r0, #0
	blt _08094344
	mov r4, #251
_08094344:
	ldr r2, _080943C0  @ =0x000016D6
	add r0, r3, r2
	ldrb r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #24
	cmp r0, #0
	bne _0809435C
	ldr r0, _080943A8  @ =0x00001727
	add r1, r3, r0
	ldrb r0, [r1]
	and r4, r4, r0
	strb r4, [r1]
_0809435C:
	mov r4, #253
	ldr r1, _080943C4  @ =0x0000179C
	add r0, r3, r1
	ldrh r1, [r0]
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #0
	beq _0809438C
	lsl r0, r1, #24
	cmp r0, #0
	blt _08094374
	mov r4, #254
_08094374:
	ldr r2, _080943C8  @ =0x000016D7
	add r0, r3, r2
	ldrb r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #24
	cmp r0, #0
	bne _0809438C
	ldr r0, _080943A8  @ =0x00001727
	add r1, r3, r0
	ldrb r0, [r1]
	and r4, r4, r0
	strb r4, [r1]
_0809438C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08094394:
	.4byte 0x0000179F
_08094398:
	.4byte gRam
_0809439C:
	.4byte 0x0000172A
_080943A0:
	.4byte 0x0000172B
_080943A4:
	.4byte 0x00001718
_080943A8:
	.4byte 0x00001727
_080943AC:
	.4byte 0x000016C4
_080943B0:
	.4byte 0x000016F0
_080943B4:
	.4byte 0x000009B2
_080943B8:
	.4byte 0x00000B14
_080943BC:
	.4byte 0x0000179A
_080943C0:
	.4byte 0x000016D6
_080943C4:
	.4byte 0x0000179C
_080943C8:
	.4byte 0x000016D7
	THUMB_FUNC_END sub_0809407C

