	THUMB_FUNC_START sub_080EB5CC
sub_080EB5CC: @ 0x080EB5CC
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080EB5F8  @ =gRam
	ldr r1, _080EB5FC  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #5
	ldr r0, _080EB600  @ =gUnknown_08177F6C
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #4
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
_080EB5F8:
	.4byte gRam
_080EB5FC:
	.4byte 0x00000F92
_080EB600:
	.4byte gUnknown_08177F6C
	THUMB_FUNC_END sub_080EB5CC

