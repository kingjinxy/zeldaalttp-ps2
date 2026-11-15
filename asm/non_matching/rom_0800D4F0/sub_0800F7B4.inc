	THUMB_FUNC_START sub_0800F7B4
sub_0800F7B4: @ 0x0800F7B4
	push {r4-r7,lr}
	add r4, r1, #0
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldrb r0, [r4, #2]
	ldrb r1, [r4, #3]
	cmp r0, r1
	bhi _0800F7C8
	mov r0, #0
	b _0800F7FC
_0800F7C8:
	add r0, r6, #0
	bl sub_0800EE50
	add r5, r0, #0
	ldrb r7, [r4, #3]
	ldr r0, _0800F804  @ =0x000002FF
	cmp r6, r0
	bls _0800F7E2
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0800EF34
	add r5, r5, #64
_0800F7E2:
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0800EF34
	ldrb r1, [r4, #2]
	ldrb r0, [r4, #3]
	cmp r0, r1
	bls _0800F7F4
	strb r1, [r4, #3]
_0800F7F4:
	ldrb r0, [r4, #3]
	sub r0, r0, r7
	lsl r0, r0, #16
	lsr r0, r0, #16
_0800F7FC:
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0800F804:
	.4byte 0x000002FF
	THUMB_FUNC_END sub_0800F7B4

	.ALIGN 2, 0
