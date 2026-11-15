	THUMB_FUNC_START sub_08103C1C
sub_08103C1C: @ 0x08103C1C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r5, r1, #0
	ldr r3, _08103C60  @ =gRam
	ldr r2, _08103C64  @ =0x00000FC2
	add r0, r3, r2
	add r4, r1, r0
	ldrb r2, [r4]
	cmp r2, #0
	bne _08103C5A
	ldr r6, _08103C68  @ =0x00000F72
	add r0, r3, r6
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08103C46
	add r6, r6, #48
	add r0, r3, r6
	add r0, r1, r0
	strb r2, [r0]
_08103C46:
	ldr r1, _08103C6C  @ =0x00000F52
	add r0, r3, r1
	add r0, r5, r0
	strb r2, [r0]
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #32
	strb r1, [r4]
_08103C5A:
	pop {r4-r6}
	pop {r0}
	bx r0
_08103C60:
	.4byte gRam
_08103C64:
	.4byte 0x00000FC2
_08103C68:
	.4byte 0x00000F72
_08103C6C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08103C1C

