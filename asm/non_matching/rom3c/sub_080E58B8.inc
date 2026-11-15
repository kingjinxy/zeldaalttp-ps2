	THUMB_FUNC_START sub_080E58B8
sub_080E58B8: @ 0x080E58B8
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080E58E4  @ =gRam
	ldr r1, _080E58E8  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080E58EC  @ =gUnknown_081774C0
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #2
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
_080E58E4:
	.4byte gRam
_080E58E8:
	.4byte 0x00000F92
_080E58EC:
	.4byte gUnknown_081774C0
	THUMB_FUNC_END sub_080E58B8

