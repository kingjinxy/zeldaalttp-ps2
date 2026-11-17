	THUMB_FUNC_START sub_0801911C
sub_0801911C: @ 0x0801911C
	push {r4,r5,lr}
	add r5, r0, #0
	bl sub_080095A4
	add r0, r5, #0
	bl sub_08009874
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _0801914E
	add r0, r5, #0
	bl sub_0800996C
	ldrb r0, [r5, #28]
	lsl r0, r0, #30
	cmp r0, #0
	bne _08019164
	ldr r0, [r5, #120]
	bl DeleteThisEntity
	ldr r0, [r5, #124]
	bl DeleteThisEntity
	b _08019164
_0801914E:
	ldr r4, _0801916C  @ =gUnknown_08139970
	add r0, r5, #0
	bl sub_080098DC
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r4
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_08019164:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801916C:
	.4byte gUnknown_08139970
	THUMB_FUNC_END sub_0801911C

