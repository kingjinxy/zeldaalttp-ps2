	THUMB_FUNC_START sub_08011870
sub_08011870: @ 0x08011870
	push {r4,lr}
	add r4, r0, #0
	ldr r0, [r4, #84]
	cmp r0, #0
	bne _0801187E
	mov r0, #208
	b _08011892
_0801187E:
	add r1, r4, #0
	bl sub_0803D3D0
	ldrb r0, [r4, #24]
	add r0, r0, #16
	ldrh r1, [r4, #50]
	add r0, r0, r1
	strh r0, [r4, #50]
	ldrh r0, [r4, #54]
	add r0, r0, #20
_08011892:
	strh r0, [r4, #54]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08011870

	.byte 0x00
	.byte 0x00
