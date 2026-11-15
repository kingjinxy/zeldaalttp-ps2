	THUMB_FUNC_START sub_081060C4
sub_081060C4: @ 0x081060C4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_08110700
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #190
	bne _08106100
	ldr r2, _08106134  @ =gRam
	ldr r1, _08106138  @ =0x00001062
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	ldr r0, _0810613C  @ =0x00000F92
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08106140  @ =0x00000FB2
	add r2, r2, r1
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #1
	add r3, r0, #0
	eor r3, r3, r1
	strb r3, [r2]
_08106100:
	ldr r1, _08106134  @ =gRam
	ldr r2, _08106138  @ =0x00001062
	add r0, r1, r2
	add r0, r4, r0
	ldrb r2, [r0]
	cmp r3, r2
	beq _08106110
	strb r3, [r0]
_08106110:
	ldr r2, _08106144  @ =0x00001082
	add r0, r1, r2
	add r0, r5, r0
	sub r2, r2, #208
	add r1, r1, r2
	add r1, r5, r1
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r5, #0
	bl sub_08111004
	add r0, r5, #0
	bl Sprite3_Move
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08106134:
	.4byte gRam
_08106138:
	.4byte 0x00001062
_0810613C:
	.4byte 0x00000F92
_08106140:
	.4byte 0x00000FB2
_08106144:
	.4byte 0x00001082
	THUMB_FUNC_END sub_081060C4

