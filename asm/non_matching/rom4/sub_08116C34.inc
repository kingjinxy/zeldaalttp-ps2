	THUMB_FUNC_START sub_08116C34
sub_08116C34: @ 0x08116C34
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _08116C78  @ =gRam
	ldr r1, _08116C7C  @ =0x00001844
	add r0, r3, r1
	add r1, r2, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	mov r4, #0
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08116C8C
	mov r0, #7
	strb r0, [r1]
	ldr r0, _08116C80  @ =0x00000E29
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _08116C8C
	ldr r1, _08116C84  @ =0x00000E15
	add r0, r3, r1
	add r0, r2, r0
	strb r4, [r0]
	ldr r1, _08116C88  @ =0x00001787
	add r0, r3, r1
	strb r4, [r0]
	b _08116C92
_08116C78:
	.4byte gRam
_08116C7C:
	.4byte 0x00001844
_08116C80:
	.4byte 0x00000E29
_08116C84:
	.4byte 0x00000E15
_08116C88:
	.4byte 0x00001787
_08116C8C:
	add r0, r2, #0
	bl sub_08116AA8
_08116C92:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08116C34

