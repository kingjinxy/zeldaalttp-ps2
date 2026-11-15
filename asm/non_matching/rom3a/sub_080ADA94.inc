	THUMB_FUNC_START sub_080ADA94
sub_080ADA94: @ 0x080ADA94
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	beq _080ADAB2
	b _080ADBB6
_080ADAB2:
	ldr r2, _080ADB0C  @ =gRam
	mov r1, sp
	ldr r5, _080ADB10  @ =0x00000E29
	add r0, r2, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r6, _080ADB14  @ =0x00001844
	add r0, r2, r6
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	mov r1, sp
	ldr r5, _080ADB18  @ =0x00001832
	add r0, r2, r5
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	mov r1, sp
	ldr r6, _080ADB1C  @ =0x00000DED
	add r0, r2, r6
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r5, _080ADB20  @ =0x00000DF7
	add r0, r2, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	ldr r6, _080ADB24  @ =0x0000178A
	add r0, r2, r6
	ldrb r0, [r0]
	add r5, r2, #0
	cmp r0, #0
	beq _080ADB2C
	ldr r1, _080ADB28  @ =0x000016D5
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r4, r0, #4
	b _080ADB3E
_080ADB0C:
	.4byte gRam
_080ADB10:
	.4byte 0x00000E29
_080ADB14:
	.4byte 0x00001844
_080ADB18:
	.4byte 0x00001832
_080ADB1C:
	.4byte 0x00000DED
_080ADB20:
	.4byte 0x00000DF7
_080ADB24:
	.4byte 0x0000178A
_080ADB28:
	.4byte 0x000016D5
_080ADB2C:
	ldr r2, _080ADBC0  @ =0x0000180C
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080ADB3E
	ldr r3, _080ADBC4  @ =0x000016D5
	add r0, r5, r3
	ldrb r0, [r0]
	lsr r4, r0, #1
_080ADB3E:
	mov r1, sp
	ldr r6, _080ADBC8  @ =0x00000E1F
	add r0, r5, r6
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	lsl r3, r4, #25
	lsr r4, r3, #24
	ldr r2, _080ADBCC  @ =gUnknown_0816E58C
	lsl r1, r4, #1
	add r1, r1, r2
	mov r6, #182
	lsl r6, r6, #5
	add r0, r5, r6
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	mov r6, #150
	lsl r6, r6, #4
	add r1, r5, r6
	strh r0, [r1]
	add r0, r4, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldr r2, _080ADBD0  @ =0x000016C4
	add r1, r5, r2
	ldrh r1, [r1]
	ldrh r0, [r0]
	add r2, r1, r0
	ldr r4, _080ADBD4  @ =0x00000964
	add r0, r5, r4
	strh r2, [r0]
	ldr r0, _080ADBD8  @ =gUnknown_0816E5AC
	lsr r3, r3, #24
	add r3, r3, r0
	ldrh r0, [r3]
	add r1, r1, r0
	add r6, r6, #8
	add r2, r5, r6
	strh r1, [r2]
	mov r1, sp
	ldr r3, _080ADBDC  @ =0x0000181D
	add r0, r5, r3
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r2]
	strb r1, [r0]
	mov r1, sp
	ldr r4, _080ADBE0  @ =0x00001822
	add r0, r5, r4
	ldrb r1, [r1]
	add r0, r0, r1
	add r6, r6, #1
	add r1, r5, r6
	ldrb r1, [r1]
	strb r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080ADBB6:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ADBC0:
	.4byte 0x0000180C
_080ADBC4:
	.4byte 0x000016D5
_080ADBC8:
	.4byte 0x00000E1F
_080ADBCC:
	.4byte gUnknown_0816E58C
_080ADBD0:
	.4byte 0x000016C4
_080ADBD4:
	.4byte 0x00000964
_080ADBD8:
	.4byte gUnknown_0816E5AC
_080ADBDC:
	.4byte 0x0000181D
_080ADBE0:
	.4byte 0x00001822
	THUMB_FUNC_END sub_080ADA94

