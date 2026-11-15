	THUMB_FUNC_START sub_0800E63C
sub_0800E63C: @ 0x0800E63C
	push {r4-r7,lr}
	add r3, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r4, #19
	ldr r7, _0800E664  @ =gUnknown_0202A5E0
	add r0, r7, #0
	add r0, r0, #212
	add r0, r1, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _0800E668
	mov r0, #15
_0800E656:
	strh r0, [r3]
	add r3, r3, #2
	sub r4, r4, #1
	cmp r4, #0
	bne _0800E656
	b _0800E694
	.byte 0x00
	.byte 0x00
_0800E664:
	.4byte gUnknown_0202A5E0
_0800E668:
	mov r5, #0
	lsl r0, r1, #3
	sub r0, r0, r1
	lsl r6, r0, #2
	add r7, r7, #100
_0800E672:
	add r1, r5, #0
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r1, r1, r6
	add r1, r1, r7
	ldrb r0, [r1]
	lsl r0, r0, #8
	orr r0, r0, r2
	strh r0, [r3]
	add r3, r3, #2
	add r0, r2, #2
	lsl r0, r0, #16
	lsr r2, r0, #16
	sub r4, r4, #1
	cmp r4, #0
	bne _0800E672
_0800E694:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0800E63C

	.byte 0x00
	.byte 0x00
