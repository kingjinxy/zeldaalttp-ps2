	THUMB_FUNC_START sub_08014020
sub_08014020: @ 0x08014020
	push {r4,r5,lr}
	add r5, r1, #0
	lsl r4, r2, #16
	lsr r4, r4, #16
	ldr r0, _08014044  @ =gUnknown_08429B4C
	ldrb r1, [r5, #10]
	bl sub_08014180
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r4, #0
	add r2, r5, #0
	bl sub_08013EC0
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08014044:
	.4byte gUnknown_08429B4C
	THUMB_FUNC_END sub_08014020

