	THUMB_FUNC_START sub_08099C90
sub_08099C90: @ 0x08099C90
	push {r4,r5,lr}
	ldr r5, _08099D24  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _08099D28  @ =0x000016EC
	add r0, r5, r2
	mov r4, #0
	strb r1, [r0]
	ldr r3, _08099D2C  @ =0x000016C1
	add r0, r5, r3
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	add r3, r3, #3
	add r0, r5, r3
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r5, r2
	strb r1, [r0]
	add r3, r3, #1
	add r0, r5, r3
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	bl sub_0809E624
	ldr r3, _08099D30  @ =0x00001705
	add r0, r5, r3
	strb r4, [r0]
	ldr r1, _08099D34  @ =0x000017E1
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _08099D38  @ =0x000016C8
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08099D7E
	sub r3, r3, #54
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08099D7E
	mov r0, #5
	bl sub_0809EEB4
	ldr r1, _08099D3C  @ =0x000017D0
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08099D44
	ldr r2, _08099D40  @ =0x00001718
	add r1, r5, r2
	mov r0, #4
	strb r0, [r1]
	bl sub_080937AC
	bl sub_08092BF4
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
	mov r0, #1
	b _08099D80
_08099D24:
	.4byte gRam
_08099D28:
	.4byte 0x000016EC
_08099D2C:
	.4byte 0x000016C1
_08099D30:
	.4byte 0x00001705
_08099D34:
	.4byte 0x000017E1
_08099D38:
	.4byte 0x000016C8
_08099D3C:
	.4byte 0x000017D0
_08099D40:
	.4byte 0x00001718
_08099D44:
	ldr r3, _08099D8C  @ =0x0000174B
	add r2, r5, r3
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r5, #0
	cmp r0, #4
	beq _08099D76
	ldrb r3, [r2]
	ldr r2, _08099D90  @ =0x0000174C
	add r0, r1, r2
	ldrb r2, [r0]
_08099D60:
	lsr r2, r2, #1
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _08099D60
	ldr r3, _08099D94  @ =0x000016CF
	add r0, r1, r3
	strb r2, [r0]
	cmp r2, #0
	bne _08099D7E
_08099D76:
	ldr r0, _08099D8C  @ =0x0000174B
	add r1, r1, r0
	mov r0, #3
	strb r0, [r1]
_08099D7E:
	mov r0, #0
_08099D80:
	bl sub_08099D98
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08099D8C:
	.4byte 0x0000174B
_08099D90:
	.4byte 0x0000174C
_08099D94:
	.4byte 0x000016CF
	THUMB_FUNC_END sub_08099C90

