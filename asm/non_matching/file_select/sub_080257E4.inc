	THUMB_FUNC_START sub_080257E4
sub_080257E4: @ 0x080257E4
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	bl sub_08009FDC
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802581C
	ldrh r1, [r4, #44]
	ldr r0, _08025808  @ =0x0000FFFF
	cmp r1, r0
	bne _0802580C
	add r0, r4, #0
	bl DeleteThisEntity
	b _08025822
_08025808:
	.4byte 0x0000FFFF
_0802580C:
	ldrh r1, [r4, #44]
	add r0, r4, #0
	bl sub_080038E8
	add r0, r4, #0
	bl sub_08025850
	b _08025822
_0802581C:
	add r0, r4, #0
	bl sub_08008E50
_08025822:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080257E4

