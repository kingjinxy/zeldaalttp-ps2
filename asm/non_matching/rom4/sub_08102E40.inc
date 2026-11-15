	THUMB_FUNC_START sub_08102E40
sub_08102E40: @ 0x08102E40
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080C7A20
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	beq _08102E74
	ldr r1, _08102EA8  @ =gRam
	ldr r0, _08102EAC  @ =0x00000F22
	add r2, r1, r0
	add r2, r4, r2
	ldrb r0, [r2]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _08102EB0  @ =0x00001152
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
_08102E74:
	ldr r2, _08102EA8  @ =gRam
	ldr r1, _08102EB4  @ =0x00001042
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #12
	and r0, r0, r1
	cmp r0, #0
	beq _08102EA2
	ldr r0, _08102EB8  @ =0x00000F12
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08102EBC  @ =0x00001162
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
_08102EA2:
	pop {r4,r5}
	pop {r0}
	bx r0
_08102EA8:
	.4byte gRam
_08102EAC:
	.4byte 0x00000F22
_08102EB0:
	.4byte 0x00001152
_08102EB4:
	.4byte 0x00001042
_08102EB8:
	.4byte 0x00000F12
_08102EBC:
	.4byte 0x00001162
	THUMB_FUNC_END sub_08102E40

