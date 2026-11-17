	THUMB_FUNC_START sub_0801D01C
sub_0801D01C: @ 0x0801D01C
	push {r4,r5,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r5, #128
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0801D054
	ldr r2, [r4, #88]
	add r0, r4, #0
	mov r1, #14
	bl sub_08009998
	lsl r1, r0, #24
	lsr r2, r1, #24
	add r1, r5, #0
	and r1, r1, r0
	cmp r1, #0
	beq _0801D05A
	add r0, r4, #0
	add r1, r2, #0
	bl sub_0801D380
	b _0801D05A
_0801D054:
	add r0, r4, #0
	bl sub_0801D3C0
_0801D05A:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D01C

