	THUMB_FUNC_START sub_08112B9C
sub_08112B9C: @ 0x08112B9C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _08112D00  @ =gRam
	ldr r1, _08112D04  @ =0x00000EE2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	mov r8, r0
	ldr r3, _08112D08  @ =0x00000F02
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	mov r1, r8
	orr r1, r1, r0
	mov r8, r1
	sub r3, r3, #48
	add r0, r2, r3
	add r0, r5, r0
	ldrb r4, [r0]
	ldr r1, _08112D0C  @ =0x00000EF2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r4, r4, r0
	mov r1, #1
	ldr r3, _08112D10  @ =0x00000996
	add r0, r2, r3
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _08112BF0
	ldr r0, _08112D14  @ =0x00000F92
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08112BF0:
	ldr r1, _08112D14  @ =0x00000F92
	add r0, r2, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #5
	bne _08112C00
	mov r0, #0
	strb r0, [r1]
_08112C00:
	ldr r0, _08112D18  @ =gUnknown_02010990
	ldrb r0, [r0]
	cmp r0, #5
	beq _08112C16
	ldrb r0, [r1]
	cmp r0, #1
	bne _08112C16
	add r0, r5, #0
	mov r1, #26
	bl sub_080CF0AC
_08112C16:
	ldr r6, _08112D00  @ =gRam
	ldr r2, _08112D1C  @ =0x00000F62
	add r0, r6, r2
	add r7, r5, r0
	ldrb r0, [r7]
	cmp r0, #0
	beq _08112C26
	b _08112D54
_08112C26:
	ldr r0, _08112D20  @ =0x000016C4
	add r3, r6, r0
	ldr r1, _08112D24  @ =gUnknown_0817D81B
	ldr r0, _08112D28  @ =0x00000FB2
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r3]
	add r0, r0, r3
	ldr r3, _08112D2C  @ =0x00000968
	add r1, r6, r3
	strh r0, [r1]
	mov r0, #182
	lsl r0, r0, #5
	add r3, r6, r0
	ldr r1, _08112D30  @ =gUnknown_0817D81F
	ldrb r0, [r2]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r3]
	add r0, r0, r3
	ldr r2, _08112D34  @ =0x0000096C
	add r1, r6, r2
	strh r0, [r1]
	add r0, r5, #0
	mov r1, #24
	bl sub_080C2DCC
	ldr r3, _08112D38  @ =0x00000F12
	add r0, r6, r3
	add r0, r5, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #16
	add r0, r6, r3
	add r0, r5, r0
	add r2, r2, #1
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	mov r0, #1
	mov r1, r8
	add r2, r4, #0
	bl sub_080AE848
	ldr r3, _08112D3C  @ =0x0000097C
	add r0, r6, r3
	ldrb r0, [r0]
	add r0, r0, #6
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #11
	bhi _08112CB6
	ldr r1, _08112D40  @ =0x0000097D
	add r0, r6, r1
	ldrb r0, [r0]
	add r0, r0, #6
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #11
	bls _08112CC4
_08112CB6:
	ldr r2, _08112D44  @ =0x00001042
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08112CC4
	b _08112E56
_08112CC4:
	ldr r2, _08112D00  @ =gRam
	ldr r3, _08112D1C  @ =0x00000F62
	add r1, r2, r3
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08112D38  @ =0x00000F12
	add r3, r2, r0
	add r3, r5, r3
	ldr r4, _08112D48  @ =gUnknown_0817D817
	add r0, r0, #160
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	lsr r0, r0, #1
	add r0, r0, r4
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r3, _08112D4C  @ =0x00000F22
	add r2, r2, r3
	add r2, r5, r2
	ldr r3, _08112D50  @ =gUnknown_0817D813
	ldrb r0, [r1]
	lsr r0, r0, #1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	b _08112E56
	.byte 0x00
	.byte 0x00
_08112D00:
	.4byte gRam
_08112D04:
	.4byte 0x00000EE2
_08112D08:
	.4byte 0x00000F02
_08112D0C:
	.4byte 0x00000EF2
_08112D10:
	.4byte 0x00000996
_08112D14:
	.4byte 0x00000F92
_08112D18:
	.4byte gUnknown_02010990
_08112D1C:
	.4byte 0x00000F62
_08112D20:
	.4byte 0x000016C4
_08112D24:
	.4byte gUnknown_0817D81B
_08112D28:
	.4byte 0x00000FB2
_08112D2C:
	.4byte 0x00000968
_08112D30:
	.4byte gUnknown_0817D81F
_08112D34:
	.4byte 0x0000096C
_08112D38:
	.4byte 0x00000F12
_08112D3C:
	.4byte 0x0000097C
_08112D40:
	.4byte 0x0000097D
_08112D44:
	.4byte 0x00001042
_08112D48:
	.4byte gUnknown_0817D817
_08112D4C:
	.4byte 0x00000F22
_08112D50:
	.4byte gUnknown_0817D813
_08112D54:
	cmp r0, #1
	bne _08112DF0
	mov r0, #0
	mov r1, r8
	add r2, r4, #0
	bl sub_080AE848
	ldr r1, _08112DD4  @ =0x00001042
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08112E56
	add r0, r5, #0
	mov r1, #120
	bl sub_080CF0AC
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	ldr r2, _08112DD8  @ =0x00000FC2
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #16
	strb r1, [r0]
	ldr r3, _08112DDC  @ =0x00000F12
	add r2, r6, r3
	add r2, r5, r2
	ldr r1, _08112DE0  @ =gUnknown_0817D817
	ldr r0, _08112DE4  @ =0x00000FB2
	add r3, r6, r0
	add r3, r5, r3
	ldrb r0, [r3]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsr r1, r0, #31
	add r0, r0, r1
	asr r0, r0, #1
	neg r0, r0
	strb r0, [r2]
	ldr r1, _08112DE8  @ =0x00000F22
	add r2, r6, r1
	add r2, r5, r2
	ldr r1, _08112DEC  @ =gUnknown_0817D813
	ldrb r0, [r3]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsr r1, r0, #31
	add r0, r0, r1
	asr r0, r0, #1
	neg r0, r0
	strb r0, [r2]
	add r0, r5, #0
	mov r1, #1
	mov r2, #29
	bl sub_080AD658
	b _08112E56
_08112DD4:
	.4byte 0x00001042
_08112DD8:
	.4byte 0x00000FC2
_08112DDC:
	.4byte 0x00000F12
_08112DE0:
	.4byte gUnknown_0817D817
_08112DE4:
	.4byte 0x00000FB2
_08112DE8:
	.4byte 0x00000F22
_08112DEC:
	.4byte gUnknown_0817D813
_08112DF0:
	ldr r2, _08112E60  @ =gUnknown_02010990
	mov r8, r2
	mov r0, #5
	strb r0, [r2]
	ldr r3, _08112E64  @ =0x00000F92
	add r0, r6, r3
	add r3, r5, r0
	mov r0, #0
	strb r0, [r3]
	ldr r1, _08112E68  @ =0x00001152
	add r0, r6, r1
	add r0, r0, r5
	mov r12, r0
	ldr r2, _08112E6C  @ =0x00000FC2
	add r0, r6, r2
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #8
	sub r0, r0, r1
	lsl r0, r0, #1
	mov r1, r12
	strb r0, [r1]
	ldrb r4, [r2]
	cmp r4, #0
	bne _08112E56
	mov r1, #48
	strb r4, [r7]
	strb r4, [r3]
	ldr r3, _08112E70  @ =0x00000F52
	add r0, r6, r3
	add r0, r5, r0
	strb r4, [r0]
	strb r1, [r2]
	mov r0, r8
	strb r4, [r0]
	ldr r0, _08112E74  @ =gUnknown_02010993
	strb r4, [r0]
	ldr r2, _08112E78  @ =0x00000EA5
	add r1, r6, r2
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	add r0, r0, #5
	strb r0, [r1]
	mov r3, r12
	strb r4, [r3]
	ldr r1, _08112E7C  @ =0x00001142
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
_08112E56:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08112E60:
	.4byte gUnknown_02010990
_08112E64:
	.4byte 0x00000F92
_08112E68:
	.4byte 0x00001152
_08112E6C:
	.4byte 0x00000FC2
_08112E70:
	.4byte 0x00000F52
_08112E74:
	.4byte gUnknown_02010993
_08112E78:
	.4byte 0x00000EA5
_08112E7C:
	.4byte 0x00001142
	THUMB_FUNC_END sub_08112B9C

