	THUMB_FUNC_START sub_0812CC24
sub_0812CC24: @ 0x0812CC24
	push {r4,lr}
	bl sub_0812C6C8
	add r2, r0, #0
	cmp r2, #0
	beq _0812CC4C
	ldr r4, _0812CC54  @ =gUnknown_08198EC8
_0812CC32:
	ldrh r0, [r2]
	lsr r0, r0, #8
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r1, [r0]
	add r0, r2, #0
	bl _call_via_r1
	bl sub_0812C6C8
	add r2, r0, #0
	cmp r2, #0
	bne _0812CC32
_0812CC4C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812CC54:
	.4byte gUnknown_08198EC8
	THUMB_FUNC_END sub_0812CC24

	.syntax unified

