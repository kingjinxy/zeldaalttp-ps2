	THUMB_FUNC_START sub_08122630
sub_08122630: @ 0x08122630
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _08122650  @ =gRam
	ldr r1, _08122654  @ =0x00000996
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0812264C
	add r0, r2, #0
	bl sub_08122390
_0812264C:
	pop {r0}
	bx r0
_08122650:
	.4byte gRam
_08122654:
	.4byte 0x00000996
	THUMB_FUNC_END sub_08122630

