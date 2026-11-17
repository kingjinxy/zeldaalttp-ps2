	THUMB_FUNC_START sub_08014180
sub_08014180: @ 0x08014180
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r4, r1, #24
	lsr r4, r4, #24
	bl sub_0800099C
	ldr r1, _080141A8  @ =gUnknown_03006C80
	add r1, r1, #84
	add r4, r4, r1
	ldrb r2, [r4]
	lsl r2, r2, #2
	add r2, r2, r5
	mov r1, #31
	and r1, r1, r0
	ldr r0, [r2]
	add r0, r0, r1
	ldrb r0, [r0]
	pop {r4,r5}
	pop {r1}
	bx r1
_080141A8:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08014180

