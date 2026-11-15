	THUMB_FUNC_START sub_08094C1C
sub_08094C1C: @ 0x08094C1C
	push {lr}
	ldr r2, _08094C44  @ =gRam
	ldr r1, _08094C48  @ =0x0000097C
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _08094C50
	mov r3, #1
	ldr r1, _08094C4C  @ =0x000016D6
	add r0, r2, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _08094C6C
	b _08094C62
	.byte 0x00
	.byte 0x00
_08094C44:
	.4byte gRam
_08094C48:
	.4byte 0x0000097C
_08094C4C:
	.4byte 0x000016D6
_08094C50:
	mov r3, #1
	ldr r1, _08094C88  @ =0x000016D6
	add r0, r2, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08094C6E
_08094C62:
	mvn r0, r1
	add r0, r0, #1
	lsl r0, r0, #24
	cmp r0, #0
	bge _08094C6E
_08094C6C:
	mov r3, #255
_08094C6E:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	mov r1, #0
	strb r3, [r0]
	ldr r3, _08094C8C  @ =0x00000961
	add r0, r2, r3
	strb r1, [r0]
	bl sub_0809E6EC
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08094C88:
	.4byte 0x000016D6
_08094C8C:
	.4byte 0x00000961
	THUMB_FUNC_END sub_08094C1C

