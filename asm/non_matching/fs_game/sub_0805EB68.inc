	THUMB_FUNC_START sub_0805EB68
sub_0805EB68: @ 0x0805EB68
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805EC12
	ldr r0, _0805EBD4  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _0805EBD4  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r7]
	ldr r1, [r1]
	ldr r2, [r2, #96]
	eor r1, r1, r2
	str r1, [r0]
	ldr r0, [r7]
	ldr r1, _0805EBD4  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r7]
	ldr r1, [r1]
	ldr r2, [r2, #96]
	and r1, r1, r2
	cmp r1, #0
	beq _0805EBDC
	ldr r1, _0805EBD8  @ =0x00008001
	b _0805EBE0
	.byte 0x00
	.byte 0x00
_0805EBD4:
	.4byte gUnknown_0201F000
_0805EBD8:
	.4byte 0x00008001
_0805EBDC:
	mov r1, #128
	lsl r1, r1, #8
_0805EBE0:
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #232
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #22
	bl sub_08003DFC
_0805EC12:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805EB68

	.byte 0x00
	.byte 0x00
