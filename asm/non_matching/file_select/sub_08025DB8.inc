	THUMB_FUNC_START sub_08025DB8
sub_08025DB8: @ 0x08025DB8
	push {r4,lr}
	add r4, r0, #0
	bl sub_08026244
	ldr r0, [r4, #84]
	add r0, r0, #42
	ldrb r1, [r0]
	lsl r1, r1, #27
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x080040C4
	ldr r0, [r4, #84]
	add r0, r0, #42
	ldrb r1, [r0]
	lsl r1, r1, #27
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x080040C4
	ldr r0, [r4, #84]
	add r0, r0, #42
	ldrb r1, [r0]
	lsl r1, r1, #27
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x080040C4
	ldr r0, [r4, #84]
	add r0, r0, #42
	ldrb r1, [r0]
	lsl r1, r1, #27
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x080040C4
	add r0, r4, #0
	bl sub_0803CC20
	ldr r0, [r4, #12]
	sub r0, r0, #36
	str r0, [r4, #12]
	ldr r1, _08025E20  @ =0x0000043F
	cmp r0, r1
	bgt _08025E1A
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #24
	strb r0, [r4, #23]
_08025E1A:
	pop {r4}
	pop {r0}
	bx r0
_08025E20:
	.4byte 0x0000043F
	THUMB_FUNC_END sub_08025DB8

