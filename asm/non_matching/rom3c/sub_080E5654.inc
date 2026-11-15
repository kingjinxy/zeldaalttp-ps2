	THUMB_FUNC_START sub_080E5654
sub_080E5654: @ 0x080E5654
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E5688  @ =gRam
	ldr r1, _080E568C  @ =0x00000F92
	add r4, r2, r1
	add r4, r0, r4
	ldr r3, _080E5690  @ =0x00000996
	add r1, r2, r3
	ldrb r1, [r1]
	lsr r1, r1, #1
	mov r3, #1
	and r1, r1, r3
	add r1, r1, #1
	strb r1, [r4]
	ldr r1, _080E5694  @ =0x00000F22
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	lsr r1, r1, #7
	bl sub_080E5698
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E5688:
	.4byte gRam
_080E568C:
	.4byte 0x00000F92
_080E5690:
	.4byte 0x00000996
_080E5694:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080E5654

