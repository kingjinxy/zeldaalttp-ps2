	THUMB_FUNC_START sub_08118ACC
sub_08118ACC: @ 0x08118ACC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r5, _08118AF4  @ =gRam
	ldr r1, _08118AF8  @ =0x00000E29
	add r0, r5, r1
	add r0, r3, r0
	ldr r6, _08118AFC  @ =gUnknown_0817F34E
	ldrb r4, [r0]
	ldrb r0, [r6]
	cmp r4, r0
	beq _08118AEA
	ldrb r1, [r6, #5]
	cmp r4, r1
	bne _08118B00
_08118AEA:
	add r0, r3, #0
	bl sub_081190F0
	b _08118B8A
	.byte 0x00
	.byte 0x00
_08118AF4:
	.4byte gRam
_08118AF8:
	.4byte 0x00000E29
_08118AFC:
	.4byte gUnknown_0817F34E
_08118B00:
	ldr r1, _08118B20  @ =0x00000AA8
	add r0, r5, r1
	ldrh r0, [r0]
	lsr r2, r0, #8
	mov r1, #64
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08118B28
	ldr r1, _08118B24  @ =0x00000E15
	add r0, r5, r1
	add r0, r3, r0
	mov r1, #0
	strb r1, [r0]
	b _08118B8A
	.byte 0x00
	.byte 0x00
_08118B20:
	.4byte 0x00000AA8
_08118B24:
	.4byte 0x00000E15
_08118B28:
	mov r0, #128
	and r2, r2, r0
	cmp r2, #0
	beq _08118B8A
	ldr r0, _08118B44  @ =0x00000B6A
	add r2, r5, r0
	ldrh r0, [r2]
	add r1, r0, #0
	cmp r1, #0
	bne _08118B48
	add r0, r3, #0
	bl sub_08118B9C
	b _08118B8A
_08118B44:
	.4byte 0x00000B6A
_08118B48:
	cmp r1, #1
	beq _08118B52
	sub r0, r0, #1
	strh r0, [r2]
	b _08118B8A
_08118B52:
	ldrb r6, [r6, #6]
	cmp r4, r6
	beq _08118B64
	ldr r0, _08118B60  @ =0x00001732
	add r1, r5, r0
	mov r0, #35
	b _08118B72
_08118B60:
	.4byte 0x00001732
_08118B64:
	mov r0, #73
	mov r1, #0
	bl sub_0812A324
	ldr r0, _08118B90  @ =0x00001732
	add r1, r5, r0
	mov r0, #40
_08118B72:
	strb r0, [r1]
	ldr r4, _08118B94  @ =gRam
	ldr r1, _08118B90  @ =0x00001732
	add r0, r4, r1
	ldrb r0, [r0]
	bl sub_0812FBC4
	ldr r0, _08118B98  @ =0x00000B6A
	add r4, r4, r0
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
_08118B8A:
	pop {r4-r6}
	pop {r0}
	bx r0
_08118B90:
	.4byte 0x00001732
_08118B94:
	.4byte gRam
_08118B98:
	.4byte 0x00000B6A
	THUMB_FUNC_END sub_08118ACC

