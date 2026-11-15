	THUMB_FUNC_START sub_081211D4
sub_081211D4: @ 0x081211D4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r6, r2, #0
	ldr r1, _08121200  @ =gRam
	ldr r3, _08121204  @ =0x00000E1F
	add r0, r1, r3
	add r5, r2, r0
	ldrb r0, [r5]
	cmp r0, #1
	bne _0812122E
	add r3, r3, #20
	add r0, r1, r3
	add r3, r2, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _08121208
	add r0, r2, #0
	bl sub_0812133C
	b _0812122E
	.byte 0x00
	.byte 0x00
_08121200:
	.4byte gRam
_08121204:
	.4byte 0x00000E1F
_08121208:
	mov r4, #2
	strb r4, [r3]
	ldr r0, _08121224  @ =0x00000E29
	add r1, r1, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #55
	bne _08121228
	strb r4, [r5]
	b _0812122E
_08121224:
	.4byte 0x00000E29
_08121228:
	add r0, r6, #0
	bl sub_0812133C
_0812122E:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081211D4

