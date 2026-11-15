	THUMB_FUNC_START sub_0801276C
sub_0801276C: @ 0x0801276C
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	lsl r0, r3, #3
	ldr r1, _080127A0  @ =gEntityLinks
	add r0, r0, r1
	ldr r2, [r0, #4]
	ldr r0, [r0]
	cmp r2, r0
	beq _0801279C
	ldr r1, [r2]
	ldr r0, [r2, #4]
	str r0, [r1, #4]
	ldr r1, [r2, #4]
	ldr r0, [r2]
	str r0, [r1]
	ldr r1, _080127A4  @ =gUnknown_03005AD8
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	add r0, r3, #0
	add r1, r2, #0
	bl sub_08012728
_0801279C:
	pop {r0}
	bx r0
_080127A0:
	.4byte gEntityLinks
_080127A4:
	.4byte gUnknown_03005AD8
	THUMB_FUNC_END sub_0801276C

