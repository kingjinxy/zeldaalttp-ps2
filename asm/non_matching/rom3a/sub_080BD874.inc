	THUMB_FUNC_START sub_080BD874
sub_080BD874: @ 0x080BD874
	push {r4-r6,lr}
	add r4, r0, #0
	add r5, r2, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	lsl r1, r1, #24
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r0, _080BD8BC  @ =gUnknown_0817171C
	lsr r1, r1, #25
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r6, [r1]
	lsl r0, r5, #26
	lsr r0, r0, #24
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	ldr r0, _080BD8C0  @ =gRam
	ldr r1, _080BD8C4  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mul r0, r5, r0
	lsl r0, r0, #3
	add r6, r6, r0
	add r0, r4, #0
	add r1, r6, #0
	add r2, r5, #0
	bl sub_080C9480
	pop {r4-r6}
	pop {r0}
	bx r0
_080BD8BC:
	.4byte gUnknown_0817171C
_080BD8C0:
	.4byte gRam
_080BD8C4:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080BD874

