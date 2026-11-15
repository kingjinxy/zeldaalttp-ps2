	THUMB_FUNC_START sub_08011434
sub_08011434: @ 0x08011434
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #192
	and r0, r0, r4
	add r5, r0, #0
	mov r0, #7
	and r4, r4, r0
	cmp r5, #0
	bne _0801144C
	bl sub_080113D8
_0801144C:
	ldr r0, _08011478  @ =gUnknown_0200B250
	lsl r1, r4, #6
	add r1, r1, r0
	mov r0, #17
	strb r0, [r1, #4]
	add r2, r1, #0
	add r2, r2, #63
	mov r0, #3
	strb r0, [r2]
	add r0, r4, #0
	bl sub_08067A18
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r5, #0
	bne _08011470
	bl sub_08011408
_08011470:
	add r0, r4, #0
	pop {r4,r5}
	pop {r1}
	bx r1
_08011478:
	.4byte gUnknown_0200B250
	THUMB_FUNC_END sub_08011434

